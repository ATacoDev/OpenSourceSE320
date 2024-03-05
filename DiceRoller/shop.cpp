#include <iostream>
#include "shop.h"

void shop::showUpgrades() {
    cout << endl;
    for (int i = 0; i < 2; i++) {
        cout << i + 1 << ") " << upgrades[i].name << endl;
        cout << "Cost: " << upgrades[i].cost << endl;
        cout << "Description: " << upgrades[i].description << endl;
        cout << "Current buff: {+" << upgrades[i].level << "}" << endl;
        cout << endl;
    }
}

void shop::enterShop() {
    cout << "Welcome to the shop!" << endl;
    showUpgrades();
    int choice = 0;
    while (choice != -1) {
        cout << "Enter an option 1 - 3 (3 to show upgrades | -1 to leave shop) ";
        cin >> choice;
        switch (choice) {
        case 1:
            cout << "You have chosen Buff Points" << endl;
            upgrades[0].level++;
            break;
        case 2:
            cout << "You have chosen Buff Health" << endl;
            upgrades[1].level++;
            break;
        case 3:
            showUpgrades();
            break;
        case -1: // exit shop
            cout << "Exiting shop" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
        }
    }
}