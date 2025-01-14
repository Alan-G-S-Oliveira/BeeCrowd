#include <iostream>

using namespace std;

int main() {

    string estado;

    cin >> estado;

    if(estado == "para" || estado == "roraima" || estado == "acre" || estado == "amapa" || estado == "amazonas" || estado == "tocantins" || estado == "rondonia")
        cout << "Regiao Norte" << endl;
    else
        cout << "Outra regiao" << endl;

    return 0;
}