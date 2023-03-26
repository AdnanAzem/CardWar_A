
#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>
#include <stdio.h>
#include <stack>
#include "card.hpp"

namespace ariel{}
using namespace ariel;

using namespace std;


class Player{

    private:
        string name;
        int wonCard;
        stack<Card> cards;

    
    public:

        // constructors
        Player(){}
        Player(string const &name){};

        // getter
        string getName(){return this->name;};

        // prints the amount of cards left.
        int stacksize(){return cards.size();};

        // prints the amount of cards this player has won. 
        int cardesTaken(){return this->wonCard;};  

        // Destructor
        ~Player(){} 

};

#endif

