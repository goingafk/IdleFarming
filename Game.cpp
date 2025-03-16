#include "Game.h"

//Setters
void Game::setMoney(float m) {
    this->money = m;
}
void Game::setTempInventory(float t) {
    this->tempInventory = t;
}

//Getters
float Game::getMoney() const {
    return this->money;
}
float Game::getTempInventory() const {
    return this->tempInventory;
}
