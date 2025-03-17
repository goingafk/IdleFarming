#include "FarmingMode.h"
#include <iostream>

Farming::Farming() {
    moneySpent = 0.0f;
    growthRate = 1.2f;
    running = true;
}


void Farming::displayMode() {
    using namespace std;
    cout << "\n" << "\n";
    cout << "=====================\n";
    cout << "Welcome to the farming menu\n";
}

void Farming::userInput() {
    int userInput;
    std::cin.clear();
    std::cin >> userInput;
    while (std::cin.fail()) {
        std::cout << "Invalid input, please try again.\n";
    }

    switch (userInput) {
        case 1:
            std::cout << "Farming Input 1\n";
            break;
        case 2:
            std::cout << "Farming Input 2\n";
            break;
        default:
            std::cout << "Invalid input AA, please try again.\n";
            break;
    }
}

void Farming::gameLoop() {
    while (running) {
        displayMode();
        userInput();
    }
}



