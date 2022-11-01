using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using EdgeMultiplay;

namespace ChatRooms
{
    public class CreateRoomManager : MonoBehaviour
    {
        public Button createRoomButton;
        public InputField RoomNameInput;
        private void Start()
        {
            createRoomButton.onClick.AddListener(CreateRoom);
        }

        void CreateRoom()
        {
            if(RoomNameInput.text == "" || RoomNameInput.text.Length < 4)
                return;
            foreach (var player in FindObjectsOfType<PlayerManager>())
            {
                Destroy(player.gameObject);
            }
            EdgeManager.CreateRoom(
                playerName: GameManager.playerName,
                playerAvatar: 0,
                maxPlayersPerRoom: 2,
                minPlayersToStartGame: 2,
                playerTags: new Dictionary<string, string>() {
                    {
                        "roomName", RoomNameInput.text
                    }
                });
            RoomNameInput.text = "";
        }
    }
}