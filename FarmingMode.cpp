#include "FarmingMode.h"
#include <iostream>

Farming::Farming() {
    moneySpent = 0.0f;
    growthRate = 1.2f;
    plantStatus = 1.0f;
    running = true;
}

//When the game starts play this script
float Farming::growing() {
    plantStatus *= growthRate;
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
        std::cin >> userInput;
    }

    switch (userInput) {
        case 1:
            std::cout << "Buy and plant mode\n";
            planting();
            break;
        case 2:
            std::cout << "Check Plant\n";
            plantCheck();
            break;
        case 3:
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
}

void Farming::plantCheck() {
    std::cout << plantStatus << '\n';
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

