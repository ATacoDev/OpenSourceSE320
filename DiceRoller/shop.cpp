#include "shop.h"

shop::shop() {
    // Initialize upgrades
    upgrades.push_back(upgrade(0, 0, "Buff Points", "Increases points gained from rolls"));
    upgrades.push_back(upgrade(0, 0, "Buff Health", "Increases health gained from rolls")); // Fix: Add an additional argument for the level
}

void shop::showUpgrades() {
    cout << "Available Upgrades:" << endl;
    cout << endl;
    for (size_t i = 0; i < upgrades.size(); ++i) {
        cout << i + 1 << ") " << upgrades[i].name << endl;
        cout << "Cost: " << upgrades[i].cost << endl;
        cout << "Description: " << upgrades[i].description << endl;
        cout << "Current buff: {+" << upgrades[i].level << "}" << endl;
        cout << endl;
    }
}

void shop::printRollBuff() {
    cout << "Additional gained from buff: {" << upgrades[0].level << "}" << endl;
}

void shop::enterShop() {
    cout << "Welcome to the shop!" << endl;
    showUpgrades();
    int choice = 0;
    while (choice != -1) {
        cout << "Enter an option 1 - " << upgrades.size() << " (" << upgrades.size() << " to show upgrades | -1 to leave shop): ";
        cin >> choice;
        if (choice >= 1 && choice <= upgrades.size()) {
            cout << "You have chosen " << upgrades[choice - 1].name << endl;
            upgrades[choice - 1].level++;
        } else if (choice == upgrades.size() + 1) {
            showUpgrades();
        } else if (choice != -1) {
            cout << "Invalid choice." << endl;
        }
    }
}

int shop::getBuffPoints() {
    if (!upgrades.empty()) {
        return upgrades[0].level;
    }
    return 0;
}
