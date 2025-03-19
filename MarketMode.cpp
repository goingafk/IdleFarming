#include "MarketMode.h"
#include <iostream>

Market::Market() {
    running = true;
}



void Market::displayMode() {
    std::cout << "Welcome to the jungle";
}

void Market::userInput() {
    int choice;
    std::cin >> choice;

    while (std::cin.fail()) {
        std::cin.clear();
        std::cout<< "Invalid Input, please try again \n";
        std::cin >> choice;
    }

    switch (choice) {
        case 1:
            std::cout << "Welcome to the jungle";
            break;
        case 2:
            std::cout << "Welcome to the market";
            break;
        case 3:
            std::cout << "Leaving the market";
            running = false;
            break;
        default:
            std::cout << "Invalid choice, please try again.\n";


    }


}

void Market::gameLoop() {
    while (running) {
        system("cls");
        displayMode();
        userInput();
    }
}
