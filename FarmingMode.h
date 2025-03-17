#pragma once

class Farming {
private:
    float moneySpent;
    float growthRate;

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

    //Farming Actions
    void planting();
    void plantCheck();
    void harvesting();
    void exit();




};