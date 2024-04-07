#include <iostream>
#include "menu.h"

int main() {

    bool unitTestFlag = true;
    menu m;
    if (unitTestFlag) {
        m.testRun();
    } else {
        m.showMenu();
    }

    // m.showMenu();
    
}
