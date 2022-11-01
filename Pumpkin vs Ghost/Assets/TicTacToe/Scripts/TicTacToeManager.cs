using System.Collections.Generic;
using UnityEngine;
using EdgeMultiplay;
using UnityEngine.UI;

public class TicTacToeManager : MonoBehaviour
{
    [SerializeField] private List<Button> _grids = new List<Button>();
    [SerializeField] private List<Text> _gridsText = new List<Text>();
    public Text _statusText, _r, _l;
    [SerializeField] private GameObject _barrier;
    public int Step;
    public string WhoFirst;
    public string NowPlayer;
    public string NextPlayer;
    public bool Win;
    [SerializeField] private GameObject _waitPanel;
    //public List<NetworkedPlayer> _players;
    [SerializeField] private Button _exitButton;
    [SerializeField] private GameObject _restartButton;
    [SerializeField] private Sprite _pumpkin, _cast, _zero;
    public AudioSource _clickOnGridP, _clickOnGridG, _startGame, _zvukWin, _zvukLoze;

    private void Start()
    {
        _exitButton.onClick.AddListener(Exit);
        _waitPanel.SetActive(true);
        if (EdgeManager.currentRoomPlayers.Count == 2)
        {
            StartGame();
        }
    }

    private void Update()
    {
        if (Win == false && EdgeManager.currentRoomPlayers.Count == 2)
        {
            _statusText.text = $"{ReturnName(NowPlayer)} Step";
        }
    }

    public void Exit()
    {
        EdgeManager.gameStarted = false;
        Win = false;
        EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
        {
            eventName = "exit",
            stringData = new string[] { }
        });
        //YouOnePlayerPanel.SetActive(false);
        /*foreach (var player in _players)
        {
            _players.Remove(player);
        }*/
        //EdgeManager.Disconnect();
    }

    public void StartGame()
    {
        FindObjectOfType<EdgeManager>().GetComponent<AudioSource>().Play();
        _startGame.Play();
        _waitPanel.SetActive(false);
        Win = false;
        _exitButton.gameObject.SetActive(false);
        _restartButton.SetActive(false);
        _barrier.SetActive(false);
        _l.gameObject.SetActive(true);
        _r.gameObject.SetActive(true);
        _statusText.gameObject.SetActive(true);

        EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
        {
            eventName = "who first",
            stringData = new string[] { }
        });
        

        /*_r.text = _players[0].playerName;
        _l.text = _players[1].playerName;*/
        _r.text = EdgeManager.currentRoomPlayers[0].playerName;
        _l.text = EdgeManager.currentRoomPlayers[1].playerName;
    }

    public void PlayerStep(int id)
    {
        EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
        {
            eventName = "step",
            stringData = new string[] { id.ToString(), WhoNext(NowPlayer), EdgeManager.localPlayer.playerName }
        });
    }

    private void SearchWinner()
    {
        if (_gridsText[0].text == NowPlayer &&
            _gridsText[1].text == NowPlayer &&
            _gridsText[2].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[3].text == NowPlayer &&
                 _gridsText[4].text == NowPlayer &&
                 _gridsText[5].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[6].text == NowPlayer &&
                 _gridsText[7].text == NowPlayer &&
                 _gridsText[8].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[0].text == NowPlayer &&
                 _gridsText[3].text == NowPlayer &&
                 _gridsText[6].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[1].text == NowPlayer &&
                 _gridsText[4].text == NowPlayer &&
                 _gridsText[7].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[2].text == NowPlayer &&
                 _gridsText[5].text == NowPlayer &&
                 _gridsText[8].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[0].text == NowPlayer &&
                 _gridsText[4].text == NowPlayer &&
                 _gridsText[8].text == NowPlayer) GameOver(NowPlayer);

        else if (_gridsText[2].text == NowPlayer &&
                 _gridsText[4].text == NowPlayer &&
                 _gridsText[6].text == NowPlayer) GameOver(NowPlayer);

        else if (Step >= 8) GameOver("D");
        Step++;
    }

    private void GameOver(string playerWin)
    {
        Win = true;

        if (playerWin == ReturnNowPlayer(EdgeManager.localPlayer.playerName))
            _zvukWin.Play();
        else
            _zvukLoze.Play();

        switch (playerWin)
        {
            case "D":
                _statusText.text = "DRAW!";
                break;
            case "X":
                _statusText.text = EdgeManager.currentRoomPlayers[0].playerName + " Winner"; //_player
                break;
            case "O":
                _statusText.text = EdgeManager.currentRoomPlayers[1].playerName + " Winner"; //_player
                break;
        }
        _exitButton.gameObject.SetActive(true);
        _restartButton.SetActive(true);
        _barrier.SetActive(true);
    }

    public void RestartGameButton()
    {
        EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
        {
            eventName = "restart",
            stringData = new string[] { }
        });
    }
    
    public void RestartGame()
    {
        Step = 0;
        foreach (var grid in _grids)
        {
            grid.transform.GetChild(0).GetComponent<Image>().sprite = _zero;
            grid.enabled = true;
        }
        foreach (var grid in _gridsText)
        {
            grid.text = "";
        }
        StartGame();
    }
    
    public void ChangeGrid(int id)
    {
        _grids[id].enabled = false;
        _gridsText[id].text = NowPlayer;
        _grids[id].transform.GetChild(0).GetComponent<Image>().sprite = SetSprite(NowPlayer);
        SearchWinner();
    }
    
    private string WhoNext(string player) => player == "X" ? "O" : "X";
    public string ReturnName(string player) => player == "X" ? EdgeManager.currentRoomPlayers[0].playerName : EdgeManager.currentRoomPlayers[1].playerName; //_player

    public string ReturnNowPlayer(string player) => player == EdgeManager.currentRoomPlayers[0].playerName ? "X" : "O"; //_player
    private NetworkedPlayer ReturnPlayer(string player) => player == "X" ? EdgeManager.currentRoomPlayers[0] : EdgeManager.currentRoomPlayers[1]; //_player
    private Sprite SetSprite(string player) => player == "X" ? _pumpkin : _cast;


    /*public List<Button> Buttons = new List<Button>();
    public GameObject WaitPanel;
    public static bool GameStart;

    private void Start()
    {
        for (int i = 0; i < Buttons.Count; i++)
        {
            Buttons[i].onClick.AddListener(() =>
            {
                Step(i);
            });
        }
    }

    private void Update()
    {
        WaitPanel.SetActive(GameStart);
    }

    public void Step(int id)
    {
        if (GameStart == false)
        {
            return;
        }
        EdgeManager.MessageSender.BroadcastMessage(new GamePlayEvent
        {
            eventName = "step",
            stringData = new string[] { id.ToString() }
        });
    }

    public void UpdateCell()
    {
        
    }

    public int ReturnId(int id)
    {
        return id;
    }*/
}
