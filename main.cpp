#include <iostream>
#include "Game.h"

float test;

int main() {
    Game game;
    std::cout << "Insert money";
    std::cin >> test;
    game.setMoney(test);
    std::cout << game.getMoney() << std::endl;
    return 0;
}