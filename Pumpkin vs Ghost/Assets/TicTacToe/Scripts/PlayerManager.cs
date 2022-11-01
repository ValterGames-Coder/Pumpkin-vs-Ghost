using EdgeMultiplay;

namespace ChatRooms
{
    public class PlayerManager : NetworkedPlayer
    {
        public string TypePlayer;
        void OnEnable()
        {
            ListenToMessages();
        }

        private void Update()
        {
            if(ActivePlayer == false)
                Destroy(gameObject);
        }

        void OnDestroy()
        {
            StopListening();
        }
    }
}
