#include <iostream>
#include "menu.h"
#include "player.h"
#include "shop.h"

void menu::showMenu() // in charge of prompting the menu. Will work with the economy class to handle the user's points and upgrades
{
    player p;
    shop s;
    srand(time(0));
    int choice = 0;
    int roll = 0;
    while (choice != -1) {

        cout << "1. Roll the dice" << endl;
        cout << "2. Upgrades" << endl;
        cout << "3. Check your stats" << endl;
        cout << "-1. Quit" << endl;

        cout << "Enter an option 1 - 3 (-1 to exit): ";
        cin >> choice;

        switch (choice) {
            case 1: // Roll the dice
                cout << "~~~~~~~~~~~~~~~~~~" << endl;
                cout << "Rolling the dice!" << endl;
                roll = rand() % 6 + 1;
                cout << "You rolled a " << roll << " and gained " << roll << " POINTS! " << endl;
                s.printRollBuff();
                p.addPoints(roll);
                p.addPoints(s.getBuffPoints()); // adds the amount gained from the buff
                cout << endl;
                break;  
            case 2: // Upgrades
                cout << "~~~~~~~~~~~~~~~~~~" << endl;
                cout << "Upgrades:" << endl;
                s.enterShop();
                cout << endl;
                break;
            case 3: // Check stats
                cout << "~~~~~~~~~~~~~~~~~~" << endl;
                cout << "Player stats:" << endl;
                p.showStats();
                break;
            case -1: // exit the game
                cout << "Thanks for playing!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
                break;
        }
    }
}