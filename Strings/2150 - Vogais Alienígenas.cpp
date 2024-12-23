#include <iostream>

using namespace std;

bool pertence(string s, char x) {
    for(char i: s) {
        if(x == i)
            return true;
    }
    return false;
}

int main() {

    string vogais, frase;
    while(cin >> vogais) {
        cin.ignore();
        getline(cin, frase);
        int qtd = 0;
        for(char i: frase) {
            if(pertence(vogais, i))
                qtd++;
        }
        cout << qtd << endl;
    }

    return 0;
}