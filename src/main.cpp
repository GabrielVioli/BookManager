#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

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
        } else if (opt_3 == 4){
            menushowbook();
        } else if(opt_3 != 1 && opt_3 != 2 && opt_3 != 3 && opt_3 != 4) {
            break;
        }
    }

    cout<<"programa finalizado";


    return 0;
}
