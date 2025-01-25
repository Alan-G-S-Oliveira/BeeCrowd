#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct caractere {
    int asc;
    int qtd = 0;
};

bool compara(caractere x, caractere y) {
    if(x.qtd != y.qtd)
        return x.qtd < y.qtd;
    return x.asc > y.asc;
}

int main() {

    string S;
    bool espaco = false;
    vector<caractere> ascii(128);

    while(cin >> S) {
        for(int i = 0; i < 128; i++) {
            ascii[i].asc = i;
            ascii[i].qtd = 0;
        }

        for(char c: S)
            ascii[c - 0].qtd++;
        
        sort(ascii.begin(), ascii.end(), compara);

        if(espaco)
            cout << endl;
        else
            espaco = true;
        for(caractere c: ascii) {
            if(c.qtd != 0)
                cout << c.asc << ' ' << c.qtd << endl;
        }

    }

    return 0;
}