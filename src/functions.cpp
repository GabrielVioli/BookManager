#include <iostream>
#include <fstream>
#include <locale.h>
#include <vector>
#include <string>
#include <windows.h>
#include "utils.h"
#include "globals.h"
#include <locale.h>

using namespace std;



//funcao de entrada
//funcao de saida
//funcao pra guardar os dados
//ifstream - leitura
//ofstream - ediçao

string type_it;
string opt, opt_t;
int opt_3;

struct livros {
    string titulo;
    string autor;
    string genero;
    int ano_pub;
};

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
        cerr<<"Erro ao abrir o arquivo\n";
    }

    while (getline(inputFile, line)) {
        cout<<line<<"\n";
    }

    inputFile.close();
}

void Showbook() {
    string filename = "data/library_data.txt"; //caminho do arquivo
    ifstream file(filename); //tranforma o arquivo pra leitura
    vector<string> lines; //cria um vetor onde será armazenado todas as linhas
    string line, bookremover; //uma variavel onde será armazenada cada linha do arquivo
    bool bookfound = false; //vericacao se o livro foi encontrado, inciando com false

    if(!file) {
        cout<<"erro ao abrir arquivo";
    }

    cout<<"digite o nome do livro que deseja ver: ";
    getline(cin, bookremover);
    
    system("cls");
    while(getline(file, line)) {
        if(line == "titulo: " + bookremover) {
            cout << line << "\n";
            bookfound = true;

            for(int i = 0; i<3; i++) {
                getline(file, line);
                cout << line << "\n";
            }
            cout<<"\n";
            break;
            
        } 
    }

    file.close();

    if (!bookfound) {
        cout << "Livro não encontrado.\n";
    }
}


void removebook() {
    system("cls");
    string filename = "data/library_data.txt";
    ifstream file(filename);
    vector<string> lines;
    string bookremove, line;
    bool bookfind = false;

    if(!file) {
        cerr<<"Erro ao abrir arquivo";
    }

    cout<<"digite o livro que deseja remover: "; getline(cin, bookremove);

    while (getline(file, line)) {
        if(line == "titulo: " + bookremove) {
            cout<<line<<"\n";
            bookfind = true;
            for(int i = 0; i<3; i++) {
                getline(file, line);
                cout<<line<<"\n";
            } 

        } else {
                lines.push_back(line);
        }
    }

    if(!bookfind) {
        cout<<"livro não encontrado\n";
    }

    // Reescrever o arquivo com as linhas restantes

    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Erro ao abrir o arquivo para escrita\n";
        return;
    }

    for (const string ln : lines) {
        outFile << ln << "\n";
    }

    outFile.close();
    if(bookfind) {
        cout << "Livro removido com sucesso!\n";
    }
    
}




void ShowMenu() {
    cout << "======== GERENCIAMENTO DE LIVROS ========\n";
    cout << "============= MENU PRINCIPAL ============\n";
    cout << "[1] Adicionar livro\n";
    cout << "[2] Remover livro\n";
    cout << "[3] Listar todos os livros\n";
    cout << "[4] Mostrar livro especifico\n";
    cout << "[5] Remover livro especifico\n";
    cout << "[6] Sair\n";
    cout << "Opcao: "; 
    cin >> opt_3;
    cin.ignore();
}

void WriteMenu() {
    if(opt_3 == 1) {
        system("cls");
        vector<livros> lista_livros;
        livros livro;

        cout<<"titulo: "; getline(cin, livro.titulo);
        cout<<"genero: "; getline(cin, livro.genero);
        cout<<"autor: "; getline(cin, livro.autor);
        cout<<"ano de pubicação: "; cin>>livro.ano_pub; cin.ignore();
        lista_livros.push_back(livro);

        for(int i = 0; i < lista_livros.size(); i++) {
            WriteFile("titulo: " + lista_livros[i].titulo);
            WriteFile("autor: " + lista_livros[i].autor);
            WriteFile("genero: " + lista_livros[i].genero);
            WriteFile("Ano de publicacao: " + to_string(lista_livros[i].ano_pub));
            WriteFile(" ");
        }
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

void menushowbook() {
    Showbook();
}

void menuremovebook() {
    removebook();
}