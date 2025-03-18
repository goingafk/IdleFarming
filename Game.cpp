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
    cout << getMoney() << '\n';
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
            running = false;
            farmingMode();
            break;
        case 2:
            running = false;
            inventoryMode();
            break;
        case 3:
            running = false;
            marketMode();
            break;
        case 4:
            running = false;
            exitGame();
            break;
        default:
            running = false;
            std::cout << "Invalid input.\n";
    }
}

void Game::gameLoop() {
    bool doONce = true;
    if (doONce == true) {
        Farming farming;
        farming.growing();
        doONce = false;
    }
    while (running) {
        //Clears the terminal

        system("cls");
        displayMode();
        userInput();
    }
}


void Game::farmingMode() {
    system("cls");
    std::cout << "Farming mode";
    Farming farming;
    farming.gameLoop();
    running = true;
}

void Game::marketMode() {
    system("cls");
    std::cout << "Market Mode";
}

void Game::inventoryMode() {
    system("cls");
    std::cout << "Inventory mode";
}

void Game::exitGame() {
    system("cls");
    running = false;
}
