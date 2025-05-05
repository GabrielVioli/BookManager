#include <iostream>
#include <string>

#include "utils.h"

using namespace std; 

int main() {
    string type_it;

    MakeFile();
    cout<<"Digite: ";
    getline(cin, type_it);
    WriteFile(type_it);

    return 0;
}