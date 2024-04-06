#ifndef SHOP_H
#define SHOP_H

#include <iostream>
#include <vector>
#include "upgrade.h"

using namespace std;

class shop {
public:
    // Constructor to initialize upgrades
    shop();

    void showUpgrades();
    void enterShop();
    void printRollBuff();
    int getBuffPoints();

private:
    vector<upgrade> upgrades;
};

#endif
