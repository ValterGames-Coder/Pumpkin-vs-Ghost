using System;
using UnityEngine;
using UnityEngine.UI;
using EdgeMultiplay;

namespace ChatRooms
{
    public class RoomButtonManager : MonoBehaviour
    {
        public Text roomButtonText;
        public Text CountPlayerText;
        Button joinRoomButton;
        // Start is called before the first frame update
        void Start()
        {
            joinRoomButton = GetComponent<Button>();
            joinRoomButton.onClick.AddListener(JoinRoom);
        }

        void JoinRoom()
        {
            foreach (var player in FindObjectsOfType<PlayerManager>())
            {
                Destroy(player.gameObject);
            }
            EdgeManager.JoinRoom(gameObject.name, GameManager.playerName, 0);
        }

        public void SetupRoomButton(Room room)
        {
            gameObject.name = room.roomId;
            try
            {
                roomButtonText.text = room.roomMembers[0].playerTagsDict["roomName"];
            }
            catch (NullReferenceException)
            {
                //if the player who left is the room creator
                //the room name will be the first player in the room
                roomButtonText.text = room.roomMembers[0].playerName;
            }
            CountPlayerText.text = room.roomMembers.Count + "/" + room.maxPlayersPerRoom;
            if (room.maxPlayersPerRoom == room.roomMembers.Count && joinRoomButton != null)
            {
                joinRoomButton.interactable = false;
            }
        }
    }
}
