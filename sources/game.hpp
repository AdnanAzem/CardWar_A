
#ifndef GAME_HPP
#define GAME_HPP

#include "player.hpp"
#include "iostream"

class Game{

    private:
        Player player1;
        Player player2;

    public:

        // constructors
        Game(){}
        Game(Player const &player1,Player const &player2){};

        //playes the game untill the end
        void playAll(){};

        // prints the name of the winning player
        void printWiner(){};

        // prints all the turns played one line per turn
        void printLog(){};

        // for each player prints basic statistics: win rate, cards won, <other stats you want to print>
        void printStats(){};

        void playTurn(){};

        // print the last turn stats.
        void printLastTurn(){};

};


#endif