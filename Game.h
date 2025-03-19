#pragma once
#include <iostream>
#include <limits>
#include "FarmingMode.h"
//Game.h

class Game {
private:
    float money{};
    int inventory{};

    bool running{};
public:
    Game();
    Farming farming;
    //Setters
    void setMoney(float m);
    void setInventory(float t);
    //Getters
    float getMoney() const;
    float getInventory() const;

    //Game Loops
    void displayMode();
    void farmingMode();
    void marketMode();
    void inventoryMode();
    void exitGame();

    //Input
    void userInput();

    //GameLogic
    void gameLoop();

};