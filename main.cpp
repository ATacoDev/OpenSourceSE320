#include <iostream>
#include "menu.h"

int main() {

    bool unitTestFlag = false;
    menu m;
    if (unitTestFlag) {
        m.testRun();
    } else {
        m.showMenu();
    }

    // m.showMenu();
    
}
