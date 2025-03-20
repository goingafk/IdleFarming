#pragma once

class Farming {
private:
    float moneySpent;
    float growthRate;

    float plantStatus;
    int tempInventory;

    bool running;
public:
    Farming();

    //Setters
    void setMoneySpent(float m);
    void setGrowthRate(float r);
    void setPlantStatus(float s);
    void setTempInventory(int i);
    void setRunning(bool r);


    //Getters
    float getMoneySpent() const;
    float getGrowthRate() const;
    float getPlantStatus() const;
    int getTempInventory() const;
    bool getRunning() const;

    static void displayMode();
    void gameLoop();
    void userInput();

    //Script daily start up
    float growing();

    //Farming Actions
    void plantBuySell();
    void plantCheck();
    void harvestPlant();

};