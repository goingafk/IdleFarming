#pragma once

class Market {
private:
    float currentMarketPrice{};
    bool running{};
public:
    Market();
    float changeMarketPrice();

    void displayMode();
    void userInput();

    void gameLoop();

};