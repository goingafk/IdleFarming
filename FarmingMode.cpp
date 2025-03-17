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

}

