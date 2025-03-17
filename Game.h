#pragma once
#include <iostream>
#include <limits>

//Game.h

class Game {
private:
    float money{};
    float tempInventory{};

    bool running{};
public:
    Game();
    //Setters
    void setMoney(float m);
    void setTempInventory(float t);
    //Getters
    float getMoney() const;
    float getTempInventory() const;

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