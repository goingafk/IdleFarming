#include "Game.h"
#include "FarmingMode.h"

#include <iomanip>

//Setters
void Game::setMoney(float m) {
    this->money = m;
}
void Game::setTempInventory(float t) {
    this->tempInventory = t;
}
//Getters
float Game::getMoney() const {
    return this->money;
}
float Game::getTempInventory() const {
    return this->tempInventory;
}

Game::Game() {
    money = 100.0f;
    tempInventory = 0.0f;
    running = true;
}

void Game::displayMode() {
    using namespace std;
    cout << "=================================\n";
    cout << "       Welcome to the Farm!      \n";
    cout << "=================================\n";
    cout << "Here is how much money you have:\n";
    cout << Game().getMoney() << '\n';
    cout << "=================================\n";
    cout << "1.Farming\n";
    cout << "2.Inventory\n";
    cout << "3.Market\n";
    cout << "4.Exit\n";
    cout << "=================================\n";
}

//Menu input processing
void Game::userInput() {
    int userInput;
    std::cin.clear();
    std::cin >> userInput;
    while (std::cin.fail()) {
        std::cout<< "Invalid Input, please re-enter";
        std::cin >> userInput;
    }


    switch (userInput) {
        case 1:
            farmingMode();
        break;
        case 2:
            inventoryMode();
        break;
        case 3:
            marketMode();
        break;
        case 4:
            exitGame();
        default:
            std::cout << "Invalid input.\n";
    }
}

void Game::gameLoop() {
    while (running) {
        //Clears the terminal
        #ifdef WINDOWS
                system("cls");
        #else
                system("clear");
        #endif
        displayMode();
        userInput();
    }
}


void Game::farmingMode() {
    std::cout << "Farming mode";
    Farming farming;
    farming.gameLoop();
}

void Game::marketMode() {
    std::cout << "Market Mode";
}

void Game::inventoryMode() {
    std::cout << "Inventory mode";
}

void Game::exitGame() {
    running = false;
}
