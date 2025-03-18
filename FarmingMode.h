#pragma once

class Farming {
private:
    float moneySpent;
    float growthRate;

    float plantStatus;

    bool running;
public:
    Farming();

    //Setters
    void setMoneySpent(float m);
    void setGrowthRate(float r);

    float getMoneySpent() const;
    float getGrowthRate() const;

    static void displayMode();
    void gameLoop();
    void userInput();

    //Script daily start up
    float growing();

    //Farming Actions
    void planting();
    void plantCheck();
    void harvestPlant();

};