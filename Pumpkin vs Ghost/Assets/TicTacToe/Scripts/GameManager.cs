using System;
using UnityEngine;
using EdgeMultiplay;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.SceneManagement;

namespace ChatRooms
{
    [RequireComponent(typeof(EdgeManager))]
    public class GameManager : EdgeMultiplayCallbacks
    {

        public Button startGameButton;
        public InputField nameInputField;
        public GameObject StartPanel;
        public static string playerName;
        public GameObject RoomSelectionPanel;
        public GameObject ScrollViewContent;
        public GameObject RoomButtonPrefab;
        public GameObject CreateRoomPanel;
        public GameObject ExitPanel;

        // Use this for initialization
        void Start()
        {
            if (startGameButton != null)
            {
                startGameButton.onClick.AddListener(StartButtonPressed);
            }
        }

        private void Update()
        {
            if (end == false && Input.GetKey(KeyCode.Escape))
            {
                ExitPanel.SetActive(true);
            }
        }

        // Called once connected to your server deployed on Edge
        public override void OnConnectionToEdge()
        {
            StartPanel.SetActive(false);

            EdgeManager.GetRooms();
            RoomSelectionPanel.SetActive(true);
        }

        public override void OnFaliureToConnect(string reason)
        {
            Debug.Log("Connection faliure reason: " + reason);
        }

        public override void OnRoomsListReceived(List<Room> rooms)
        {
            if (rooms != null)
            {
                CreateRoomButtons(rooms);
            }
        }

        public override void OnNewRoomCreatedInLobby()
        {
            EdgeManager.GetRooms();
        }

        public override void OnRoomsUpdated()
        { 
            EdgeManager.GetRooms();
        }

        public override void OnRoomRemovedFromLobby()
        {
            EdgeManager.GetRooms();
        }

        public override void OnRoomJoin(Room room)
        {
            EdgeManager.gameSession.roomId = room.roomId;
            RoomSelectionPanel.SetActive(false);
            CreateRoomPanel.SetActive(false);
            SceneManager.LoadScene(1, LoadSceneMode.Additive);
            GetComponent<AudioSource>().Pause();
        }

        public override void OnRoomCreated(Room room)
        {
            EdgeManager.gameSession.roomId = room.roomId;
            RoomSelectionPanel.SetActive(false);
            CreateRoomPanel.SetActive(false);
            SceneManager.LoadScene(1, LoadSceneMode.Additive);
            GetComponent<AudioSource>().Pause();
        }

        public override void PlayerJoinedRoom(Room room)
        {
            if (EdgeManager.gameSession.roomId != "" && EdgeManager.gameSession.roomId == room.roomId)
            {
                string serverMessage = room.roomMembers[room.roomMembers.Count - 1].playerName + " joined the room";
            }
        }

        public override void OnPlayerLeft(RoomMemberLeft playerLeft)
        {
            string serverMessage = EdgeManager.GetPlayer(playerLeft.idOfPlayerLeft).playerName + " left the room.";
            Debug.Log("Player Left");
        }

        public override void OnGameStart()
        {
            
        }

        public override void OnLeftRoom()
        {
            /*foreach (var player in EdgeManager.currentRoomPlayers)
            {
                if (player.playerId != EdgeManager.localPlayer.playerId)
                {
                    Destroy(player.gameObject);
                }
            }*/
            EdgeManager.currentRoomPlayers = new List<NetworkedPlayer>();
            SceneManager.UnloadSceneAsync(1);
            RoomSelectionPanel.SetActive(true);
            EdgeManager.GetRooms();
        }

        void CreateRoomButtons(List<Room> rooms)
        {
            if (rooms == null)
            {
                return;
            }

            // clean
                if (ScrollViewContent != null)
                {
                    foreach (Transform child in ScrollViewContent.transform)
                    {
                        if (child != null)
                        {
                            Destroy(child.gameObject);
                        }
                    }
                }

                // create room buttons
                foreach (Room room in rooms)
                {
                    if (RoomButtonPrefab != null && ScrollViewContent != null)
                    {
                        GameObject roomButton = Instantiate(RoomButtonPrefab, ScrollViewContent.transform);
                        roomButton.GetComponent<RoomButtonManager>().SetupRoomButton(room);
                    }
                }
            
        }
        
        public void StartButtonPressed()
        {
            if(nameInputField.text == "" || nameInputField.text.Length < 3)
                return;
            ConnectToEdge();
            playerName = nameInputField.text;
        }

        private string player = "O";
        private bool end;

        public void Exit()
        {
            Application.Quit();
        }

        private string GetFirstPlayer(string player) => player == "X" ? "O" : "X";
        public override void OnWebSocketEventReceived(GamePlayEvent gamePlayEvent)
        {
            /*NetworkedPlayer sender = EdgeManager.GetPlayer(gamePlayEvent.senderId);
            string senderName = sender.playerName;*/
            switch (gamePlayEvent.eventName)
            {
                case "step":
                    if (FindObjectOfType<TicTacToeManager>().NowPlayer == FindObjectOfType<TicTacToeManager>()
                        .ReturnNowPlayer(gamePlayEvent.stringData[2]))
                    {
                        if (FindObjectOfType<TicTacToeManager>().NowPlayer == "X")
                            FindObjectOfType<TicTacToeManager>()._clickOnGridP.Play();
                        else
                            FindObjectOfType<TicTacToeManager>()._clickOnGridG.Play();
                        FindObjectOfType<TicTacToeManager>().ChangeGrid(int.Parse(gamePlayEvent.stringData[0]));
                        FindObjectOfType<TicTacToeManager>().NowPlayer = gamePlayEvent.stringData[1];
                    }
                    break;
                case "list":
                    //FindObjectOfType<TicTacToeManager>()._players = EdgeManager.currentRoomPlayers;
                    //FindObjectOfType<TicTacToeManager>()._players[0].gameObject.GetComponent<PlayerManager>().TypePlayer = "X";
                    //FindObjectOfType<TicTacToeManager>()._players[1].gameObject.GetComponent<PlayerManager>().TypePlayer = "O";
                    break;
                case "who first":
                    if (end == false)
                    {
                        EdgeManager.currentRoomPlayers[0].gameObject.GetComponent<PlayerManager>().TypePlayer = "X";
                        EdgeManager.currentRoomPlayers[1].gameObject.GetComponent<PlayerManager>().TypePlayer = "O";
                        Debug.Log($"<color=yellow>{EdgeManager.currentRoomPlayers.Count}</color>");
                        FindObjectOfType<TicTacToeManager>().NowPlayer = GetFirstPlayer(player);
                        player = GetFirstPlayer(player);
                        Debug.Log("<color=yellow>OK</color>");
                        end = true;
                    }

                    Debug.Log(player);
                    break;
                case "restart":
                    end = false;
                    FindObjectOfType<TicTacToeManager>().RestartGame();
                    break;
                case "exit":
                    end = false;
                    EdgeManager.ExitRoom();
                    EdgeManager.localPlayer.ActivePlayer = false;
                    /*EdgeManager.currentRoomPlayers = new List<NetworkedPlayer>();
                    SceneManager.UnloadSceneAsync(1);
                    RoomSelectionPanel.SetActive(true);
                    EdgeManager.localPlayer = null;*/
                    break;
            }
        }
    }
}