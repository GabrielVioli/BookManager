#include <iostream>
#include <fstream>
#include <locale.h>
#include <vector>
#include <string>
#include <windows.h>
#include "utils.h"
#include "globals.h"

using namespace std;

//funcao de entrada
//funcao de saida
//funcao pra guardar os dados
//ifstream - leitura
//ofstream - ediçao

string type_it;
string opt, opt_t;
int opt_3;

void WriteFile(string x) {
    fstream WriteFil("data/library_data.txt", std::ios::app);
    if (WriteFil) {
        WriteFil<<x<<"\n";
    } else {
        cerr<<"error";
    }
    WriteFil.close();
}

void CleanText(string opt) {
    string filename = "data/library_data.txt";
    fstream file;

    if(opt == "s" || opt == "S") {
        file.open(filename, std::ios::out);
        file<<"";
    }
}

string ListText() {
    string filename = "data/library_data.txt";
    ifstream inputFile(filename);
    string line;
    if(!inputFile) {
        cerr<<"Erro ao abrir o arquivo";
        return "erro ao abrir o arquivo";
    }

    while (getline(inputFile, line)) {
        cout<<line <<"\n";
    }

    inputFile.close();
    
}

void ShowMenu() {
    cout<<"=======MENU PRINCIPAL=======\n[1] Adicionar\n[2] Remover\n[3] Listar\n[4] Sair\n";
    cout<<"Opcao: "; cin>>opt_3;
    cin.ignore();
}

void WriteMenu() {
    if(opt_3 == 1) {
        system("cls");
        cout<<"titulo: ";
        getline(cin, type_it);
        WriteFile(type_it);
    }
}

void RemoveShow() {
    if(opt_3 == 2) {
        system("cls");
        cout<<"deseja apagar todo o conteudo:[S/N]: ";
        cin>>opt;
        cin.ignore();
        CleanText(opt);
    }
}

void listShow() {
    if(opt_3 == 3) {
        ListText();
    }
}

