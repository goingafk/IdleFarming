#include "FarmingMode.h"
#include "Game.h"
#include <iostream>

Farming::Farming() {
    moneySpent = 0.0f;
    growthRate = 1.2f;
    running = true;
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
            break;
        case 2:
            std::cout << "Check Plant\n";
            break;
        case 3:
            std::cout << "Harvest Plants\n";
            break;
        case 4:

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
}

void Farming::harvesting() {
}

void Farming::exit() {
    running = false;
}

void Farming::gameLoop() {
    while (running) {
        displayMode();
        userInput();
    }
}

