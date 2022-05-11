
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
using namespace std;
namespace coup
{

    struct plr
    {
        string name;
        bool isCouped = false;
        int turn;
        int plrIndex;
    };

    enum OPERATION
    {
        INCOME,
        FOREIGN_AID,
        COUP,
        ROLE,
        BLOCK,
        TRANSFER,
        ASSASSIN,
        TAX,
        STEAL,
        STEAL1,

    };

    class Game
    {
    protected:
        int _currPlayerTurn = 0;
        int _numUsers = 0;
        bool running = false;
        map<int, plr> _playersMap;

    public:
        Game(){};
        ~Game(){};
        /*Main operations*/
        string turn();
        string winner();
        vector<string> players();

        /*healper Functions*/
        int numUsers() const;
        int getTurn() const;
        bool Running() const;
        void setNumOfPlayers(int num);
        void setPlayerTurn(int playerIndex, int turn);
        void setPlayerName(int playerIndex, string const &name);
        void setCopued(int playerIndex, bool copued);
        bool isCopued(int playerIndex);
        int playerTurn(int playerIndex);
        void resetTurns();
        void updateTurns();
        void setRunning(bool rn);
        void setTurn(int currPlayerIndex);
    };

}