#include "FarmingMode.h"
#include <iostream>
#include <cmath>
#include <set>

Farming::Farming() {
    moneySpent = 0.0f;
    growthRate = 1.2f;
    plantStatus = 1.0f;
    tempInventory = 0;
    running = true;
}
//Setters
void Farming::setMoneySpent(float m) {
    m = std::round(m * 100)/ 100;
    this->moneySpent = m;
}
void Farming::setGrowthRate(float r) {
    this->growthRate = r;
}
void Farming::setPlantStatus(float s) {
    s = std::round(s * 100)/ 100;
    this->plantStatus = s;
}
void Farming::setTempInventory(int i) {
    this->tempInventory = i;
}
void Farming::setRunning(bool r) {
    this->running = r;
}
//Getters
float Farming::getMoneySpent() const{
    return this->moneySpent;
}
float Farming::getGrowthRate() const {
    return this->growthRate;
}
float Farming::getPlantStatus() const {
    return this->plantStatus;
}
int Farming::getTempInventory() const {
    return this->tempInventory;
}
bool Farming::getRunning() const {
    return this->running;
}

void clearScreen() {
#ifdef WINDOWS
    system("cls");
#else
    //
    system("clear");
#endif
}

void waitingInput() {
#ifdef WINDOWS
    system("pause");
#else
    system("read");
#endif
}

//When the game starts play this script
float Farming::growing() {
    setPlantStatus(plantStatus *= growthRate);
    return this->plantStatus;
}

void Farming::displayMode() {
    using namespace std;
    cout << "===============================\n";
    cout << " Welcome to the farming menu\n";
    cout << "===============================\n";
    cout << "1. Buy and Plant seeds\n";
    cout << "2. Check plant        \n";
    cout << "3. Harvest Plants     \n";
    cout << "4. Exit               \n";
    cout << "===============================\n";
}

void Farming::userInput() {
    int userInput;
    std::cin >> userInput;
    while (std::cin.fail()) {
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin >> userInput;
    }

    switch (userInput) {
        case 1:
            setRunning(false);
            std::cout << "Buy and plant mode\n";
            plantBuySell();
            break;
        case 2:
            setRunning(false);
            std::cout << "Check Plant\n";
            plantCheck();
            break;
        case 3:
            setRunning(false);
            std::cout << "Harvest Plants\n";
            harvestPlant();
            break;
        case 4:
            running = false;
            break;
        default:
            std::cout << "Invalid input AA, please try again.\n";
    }
}

void Farming::plantBuySell() {
    std::cout << "Please enter plant's money\n";
    int currentSpending;
    std::cin >> currentSpending;
    std::round(currentSpending);
    currentSpending = currentSpending + getPlantStatus();
    setPlantStatus(currentSpending);
    std::cout << "Current Spend is: " << getMoneySpent() << 'n';
    waitingInput();
    setRunning(true);
}


void Farming::plantCheck() {
    std::cout << "Here is the current plant growth: ";
    std::cout << getPlantStatus() << '\n';
    waitingInput();
    setRunning(true);
}

void Farming::harvestPlant() {
    std::cout << "Lets harvest the plants\n";
    int wholeInv = static_cast<int>(getPlantStatus());
    setPlantStatus(getPlantStatus() - static_cast<float>(wholeInv));
    setTempInventory(wholeInv);

    std::cout << "Current inventory: " << getTempInventory() << '\n';
    std::cout << "Current plant status: " << getPlantStatus() << '\n';
    waitingInput();
    running = true;

}

void Farming::gameLoop() {
    growing();
    while (getRunning()) {
        clearScreen();
        displayMode();
        userInput();
    }
}

