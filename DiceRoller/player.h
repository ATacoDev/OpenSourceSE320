#ifndef PLAYER_H
#define PLAYER_H

using namespace std;

class player {

    public:
    int points;
    int health;

    void addPoints(int amount);
    void removePoints(int amount);
    void addHealth(int amount);
    void removeHealth(int amount);
    void showStats();

    player() {
        points = 0;
        health = 20;
    }

};

#endif