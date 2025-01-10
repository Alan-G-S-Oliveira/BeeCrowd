#include <iostream>

using namespace std;

int main() {

    int X, ant;
    bool erro = false;
    int posicao;

    cin >> ant;
    posicao = ant + 1;
    while(cin >> X) {

        if(X <= ant && !erro) {
            erro = true;
            posicao = ant + 1;
        }
        ant = X;
    }

    if(!erro)
        posicao = ant + 1;

    cout << posicao << endl;

    return 0;
}