#pragma once;
#include <map>
#include <string>


//This sorts all the money and inventory

//Room for expansion is to have multiple types of assets that the player can have.

class Assets {
    float money;
    int currentInventory;
    std::pmr::map<std::string, int> inventory = { {"Potato", 0}, {"Carrot", 0}, {"Onion", 0}};

public:
    Assets();

    //Settters
    void setMoney(float m);
    void setCurrentlyInventory(int i);
    //Getters
    float getMoney();
    int getCurrentlyInventory();

    //Remember to add the map in the future



};


