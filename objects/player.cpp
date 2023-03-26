#include "../sources/player.hpp"

using namespace std;
using namespace ariel;

Player::Player(string const &name) {
    this->name = name;
}

Player::Player(){

}

int Player::stacksize(){
    return 0;
}

int Player::cardesTaken(){
    return 0;
}  


