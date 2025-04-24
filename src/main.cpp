#include <iostream>
#include <vector>
#include <fstream>
#include <windows.h>
#include <locale>
#include <limits>
#include <string>

using namespace std;

struct Livros {
    string titulo;
    string genero;
    int ano_pub;
    string autor;
};

int main() {
    setlocale(LC_ALL, "UTF-8");
    SetConsoleOutputCP(CP_UTF8);
    
    fstream WriteFile("data\\library_data.txt", std::ios::out);
    vector<Livros> lista_livros;
    string opcao;
    int cont = 0;

    while (true) {
        Livros livro;
        cout<<"Titulo: ";
        getline(cin, livro.titulo);

        cout<<"genero: ";
        getline(cin, livro.genero);

        cout<<"autor: ";
        getline(cin, livro.autor);

        cout<<"Ano de publicação: ";
        while(!(cin>>livro.ano_pub)) {
            cout<<"Entrada inválida\nAno de publicação: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        cin.ignore();
    

        cout<<"Adicionar mais livros? [S/N]";
        getline(cin, opcao);
        lista_livros.push_back(livro);
        

        cont++;
        if(opcao == "N" || opcao =="n") {
            break;
        }
    }

    cout<<cont;

    if(WriteFile) {
        for(int i = 0; i < cont; i++) {
            WriteFile<<"Titulo: "<<lista_livros[i].titulo<<"\n";
            WriteFile<<"Genero: "<<lista_livros[i].genero<<"\n";
            WriteFile<<"Autor: "<<lista_livros[i].autor<<"\n";
            WriteFile<<"Ano de publicação: "<<lista_livros[i].ano_pub<<"\n\n";
        }
    } else {
        cout<<"Falha ao carregar arquivo";
        return 1;
    }

    WriteFile.close();
    return 0;
}