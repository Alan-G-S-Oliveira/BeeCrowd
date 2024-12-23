#include <iostream>

using namespace std;

int main() {

    int qtd = 0;
    string cifrada, crib;

    cin >> cifrada;
    cin.ignore();
    cin >> crib;
    
    for(unsigned long int i = 0; i <= cifrada.size() - crib.size(); i++) {
        bool add = true;
        for(unsigned long int j = 0; j < crib.size(); j++) {
            if(crib[j] == cifrada[i + j]) {
                add = false;
                break;
            }
        }
        if(add)
            qtd++;
    }
    cout << qtd << endl;

    return 0;
}