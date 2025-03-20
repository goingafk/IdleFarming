#include "Game.h"
#include <iomanip>
#include <iostream>

//Setters
void Game::setMoney(float m) {
    this->money = m;
}
void Game::setInventory(float t) {
    this->inventory = t;
}
void Game::setRunning(bool r) {
    this->running = r;
}

//Getters
float Game::getMoney() const {
    return this->money;
}
float Game::getInventory() const {
    return this->inventory;
}
bool Game::getRunning() const {
    return this->running;
}

Game::Game() {
    money = 100.0f;
    inventory = 0.0f;
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
        std::cout<< "Invalid Input, please re-enter \n";
        std::cin.clear();
        std::cin >> userInput;
    }
    switch (userInput) {
        case 1:
            setRunning(false);
            farmingMode();
            break;
        case 2:
            setRunning(false);
            inventoryMode();
            break;
        case 3:
            setRunning(false);
            marketMode();
            break;
        case 4:
            setRunning(false);
            exitGame();
            break;
        default:
            setRunning(false);
            std::cout << "Invalid input.\n";
    }
}

void Game::gameLoop() {
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
    farming.setRunning(true);
    farming.gameLoop();
    setRunning(true);
}

void Game::marketMode() {
    system("cls");
    std::cout << "Market Mode";
    market.gameLoop();
    running = true;
}

void Game::inventoryMode() {
    system("cls");
    std::cout << "Inventory mode";
    running = true;
}

void Game::exitGame() {
    system("cls");
    running = false;
}
