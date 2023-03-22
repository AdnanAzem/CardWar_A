#include "doctest.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include "sources/game.hpp"
#include "sources/player.hpp"

using namespace ariel;
using namespace std;


TEST_CASE("Game 1"){

    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2); 
    for (int i=0;i<5;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p1.stacksize() <= 21);
    CHECK(p2.stacksize() <= 21);
    CHECK(p1.cardesTaken() >= 0);
    CHECK(p2.cardesTaken() >= 0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

}

TEST_CASE("Game 2"){

    Player p1("Adnan");
    Player p2("Yousef");

    Game game(p1,p2); 
    for (int i=0;i<10;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p1.stacksize() <= 16);
    CHECK(p2.stacksize() <= 16);
    CHECK(p1.cardesTaken() >= 0);
    CHECK(p2.cardesTaken() >= 0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

}

