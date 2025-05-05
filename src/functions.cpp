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

void MakeFile() {
    ofstream File("data/library_data.txt");
}

void WriteFile(string x) {
    fstream WriteFil("data/library_data.txt", std::ios::out);
    WriteFil<<x;
}