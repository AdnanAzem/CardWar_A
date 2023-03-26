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
    CHECK_NE(p1.getName(), p2.getName());

    Game game(p1,p2); 
    for (int i=0;i<5;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p1.stacksize() <= 21);
    CHECK_LE(p2.stacksize(),21);
    CHECK(p1.cardesTaken() >= 0);
    CHECK_GE(p2.cardesTaken(),0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

}

TEST_CASE("Game 2"){

    Player p1("Adnan");
    Player p2("Yousef");
    CHECK_NE(p1.getName(), p2.getName());

    Game game(p1,p2); 
    for (int i=0;i<10;i++) {
        CHECK_NOTHROW(game.playTurn());
    }
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_LE(p1.stacksize(), 16);
    CHECK(p2.stacksize() <= 16);
    CHECK_GE(p1.cardesTaken(),0);
    CHECK(p2.cardesTaken() >= 0);
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

}

TEST_CASE("Bad Game"){
    Player p1("Adnan");
    Player p2("Adnan");
    CHECK_NE(p1.getName() , p2.getName());
}

TEST_CASE("Good Game"){
    Player p1("Adnan");
    Player p2("Mohmad");
    CHECK_NE(p1.getName(), p2.getName());

    Game game(p1,p2); 
    CHECK_NOTHROW(game.playAll());
    CHECK_EQ(p1.stacksize(), 0);
    CHECK_EQ(p2.stacksize(), 0);
    CHECK_GE(p1.cardesTaken(),0);
    CHECK_GE(p2.cardesTaken(),0);

    CHECK_NOTHROW(game.printWiner());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());

}

