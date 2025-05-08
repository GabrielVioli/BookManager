#include <iostream>
#include <string>
#include <cstdlib>

#include "utils.h"

using namespace std; 

int main() {
    string type_it;
    string opt, opt_t;
    int opt_3;


    cout<<" [1] adicionar \n [2] remover \n [3] listar\n";
    cout<<"Opcao: "; cin>>opt_3;
    cin.ignore();

    if(opt_3 == 1) {
        system("cls");
        cout<<"titulo: ";
        getline(cin, type_it);
        WriteFile(type_it);

    }

    else if(opt_3 == 2) {
        system("cls");
        cout<<"deseja apagar todo o conteudo:[S/N]: ";
        cin>>opt;
        cin.ignore();
        CleanText(opt);
 
    }

    else if(opt_3 == 3) {
        system("cls");
        ListText();
    }

    system("pause");

    return 0;
}