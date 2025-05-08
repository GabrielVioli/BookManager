#include <iostream>
#include <fstream>
#include <locale.h>
#include <vector>
#include <string>
#include <windows.h>
#include "utils.h"

using namespace std;

//funcao de entrada
//funcao de saida
//funcao pra guardar os dados
//ifstream - leitura
//ofstream - ediçao


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