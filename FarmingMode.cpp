#include "FarmingMode.h"
#include <iostream>
Farming::Farming() {
    moneySpent = 0.0f;
    growthRate = 1.2f;
    plantStatus = 1.0f;
    running = true;
}
//Setters
void Farming::setMoneySpent(float m) {
    this->moneySpent = m;
}
void Farming::setGrowthRate(float r) {
    this->growthRate = r;
}
void Farming::setPlantStatus(float s) {
    this->plantStatus = s;
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
//When the game starts play this script
float Farming::growing() {
    setPlantStatus(plantStatus *= growthRate);
    return this->plantStatus;
}
void Farming::displayMode() {
    system("cls");
    using namespace std;
    cout << "\n" << "\n";
    cout << "===========================\n";
    cout << "Welcome to the farming menu\n";
    cout << "===========================\n";
    cout << "1. Buy and Plant seeds\n";
    cout << "2. Check plant        \n";
    cout << "3. Harvest Plants     \n";
    cout << "4. Exit               \n";
    cout << "===========================\n";
}

void Farming::userInput() {
    int userInput;
    std::cin.clear();
    std::cin >> userInput;
    while (std::cin.fail()) {
        std::cout << "Invalid input, please try again.\n";
        std::cin.clear();
        std::cin >> userInput;
    }
    switch (userInput) {
        case 1:
            running = false;
            std::cout << "Buy and plant mode\n";
            planting();
            break;
        case 2:
            running = false;
            std::cout << "Check Plant\n";
            plantCheck();
            break;
        case 3:
            running = false;
            std::cout << "Harvest Plants\n";
            harvestPlant();
            break;
        case 4:
            running = false;
        default:
            std::cout << "Invalid input AA, please try again.\n";
            break;
    }
}
void Farming::planting() {
    int choice;
    std::cin >> choice;
    while (std::cin.fail()) {
        std::cout << "Invalid input, please try again.\n";
    }
    running = true;
}

void Farming::plantCheck() {
    int wait;
    std::cout << "Here is the current plant growth: ";
    std::cout << getPlantStatus() << '\n';
    std::cin >> wait;
    running = true;
}

void Farming::harvestPlant() {

}

void Farming::gameLoop() {
    growing();
    while (running) {
        displayMode();
        userInput();
    }
}

