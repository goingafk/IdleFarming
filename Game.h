#pragma once
#include "FarmingMode.h"
#include "MarketMode.h"
//Game.h

class Game {
private:
    float money{};
    int inventory{};

    bool running{};
public:
    Game();
    Farming farming;
    Market market;
    //Setters
    void setMoney(float m);
    void setInventory(float t);
    void setRunning(bool r);
    //Getters
    float getMoney() const;
    float getInventory() const;
    bool getRunning() const;
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