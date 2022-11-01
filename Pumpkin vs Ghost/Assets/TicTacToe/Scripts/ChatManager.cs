using UnityEngine;
using EdgeMultiplay;
using UnityEngine.UI;

namespace ChatRooms
{
    public class ChatManager : MonoBehaviour
    {
        public InputField ChatMessageInput;
        public Button sendButton;
        public GameObject chatScrollViewContent;
        public GameObject chatMessagePrefab;
        public static bool chatStarted;
        public Button ExitRoomButton;

        private void Start()
        {
            sendButton.onClick.AddListener(SendChatMessage);
            ExitRoomButton.onClick.AddListener(ExitRoomButtonPressed);
        }

        void SendChatMessage()
        {
            if (!chatStarted)
            {
                return;
            }
            if (ChatMessageInput.text != "")
            {
                EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
                {
                    eventName = "chat",
                    stringData = new string[] { ChatMessageInput.text }
                });

                ChatMessageInput.text = "";
            }
        }

        public void ShowReceivedMessage(string senderName, string messageContent)
        {
            GameObject chatMessage = Instantiate(chatMessagePrefab, chatScrollViewContent.transform);
            chatMessage.GetComponent<Text>().text = "<b>" + senderName + " </b>: " + messageContent;
        }

        public void ExitRoomButtonPressed()
        {
            EdgeManager.ExitRoom();
        }
    }
}