#ifndef UPGRADE_H
#define UPGRADE_H

#include <string>

using namespace std;

class upgrade {

    public:
    int cost;
    int level;
    string name;
    string description;

    upgrade(int c, int l, string n, string d) {
        cost = c;
        level = l;
        name = n;
        description = d;
    }

    void levelUp(upgrade u);

};

#endif