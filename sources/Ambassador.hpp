
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "Game.hpp"
#include "Player.hpp"
using namespace std;

namespace coup
{

    class Ambassador : public Player
    {
    public:
        Ambassador(Game &game, string playerName) : Player(game, playerName) {}
        static void block(Player &otherPlayer);
        void change(Player &player1, Player &player2);
        string role() override;
    };

}