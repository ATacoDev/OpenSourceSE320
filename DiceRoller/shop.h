#ifndef SHOP_H
#define SHOP_H
#include "upgrade.h"

using namespace std;

class shop {

    public:
    upgrade upgrades[2] = { // array of upgrades
        upgrade(10, 0, "Buff Points", "Increase your points from each roll by 1"),
        upgrade(20, 0, "Buff Health", "Increase your health by 1")
    };
    
    void showUpgrades();
    void enterShop();

};

#endif