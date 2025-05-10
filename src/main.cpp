#include <iostream>
#include <string>
#include <cstdlib>

#include "utils.h"
#include "globals.h"

using namespace std; 

int main() {
    while(true) {

        ShowMenu();
        if(opt_3 == 1) {
            WriteMenu();
        } 
        else if(opt_3 == 2) {
            RemoveShow();
        } else if(opt_3 == 3) {
            listShow();
        } else if(opt_3 != (1,2,3)) {
            break;
        }
    }

    cout<<"programa finalizado";


    return 0;
}
