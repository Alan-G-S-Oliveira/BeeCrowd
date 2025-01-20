#include <iostream>
#include <cmath>
#include <set>

using namespace std;

int tamanho(int N) {
    int saida = 1;
    while(N / 10 != 0) {
        N /= 10;
        saida++;
    }

    return saida;
}

int main() {

    int X;
    unsigned int tam;

    while(cin >> X) {
        if(X == 0)
            break;

        set<int> numeros;

        numeros.insert(X);
        tam = 1;

        while(numeros.size() == tam) {
            X *= X;
            X /= 100;

            while(tamanho(X) > 4)
                X %= static_cast<int>(pow(10, tamanho(X) - 1));

            numeros.insert(X);
            tam++;
        }

        cout << tam - 1 << endl;
    }

    return 0;
}