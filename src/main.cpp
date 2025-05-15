#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <locale.h>
#include <windows.h>

#include "utils.h"
#include "globals.h"

using namespace std;

int main() {

    setlocale(LC_ALL, "UTF-8");
    SetConsoleOutputCP(CP_UTF8);

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
        } else if (opt_3 == 5) {
            menuremovebook();
        } else if(opt_3 != 1 && opt_3 != 2 && opt_3 != 3 && opt_3 != 4 && opt_3 != 5) {
            break;
            system("cls");
        }
    }

    cout<<"programa finalizado";


    return 0;
}
