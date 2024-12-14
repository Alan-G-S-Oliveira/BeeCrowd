#include <iostream>

using namespace std;

int main() {

    string N;
    while(getline(cin, N)) {

        string saida = "";
        bool valido = true;
        for(char x: N) {
            if(x == 'l')
                saida += '1';
            else if(x == 'O' || x == 'o')
                saida += '0';
            else if(x == ' ' || x == ',')
                continue;
            else if(x >= '0' && x <= '9')
                saida += x;
            else {
                valido = false;
                break;
            }
        }
        if(valido)
            try {
                cout << stoi(saida) << endl;
            } catch(exception &e) {
                cout << "error" << endl;
            }
        else
            cout << "error" << endl;

    }

    return 0;
}