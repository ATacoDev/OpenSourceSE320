#include <iostream>
#include "player.h"

//hello
void player::addPoints(int amount) {
    points += amount;
}

void player::removePoints(int amount) {
    points -= amount;
}

void player::addHealth(int amount) {
    health += amount;
}

void player::removeHealth(int amount) {
    health -= amount;
}

void player::showStats() {
    cout << "Points: " << points << endl;
    cout << "Health: " << health << endl;
    cout << endl;
}
