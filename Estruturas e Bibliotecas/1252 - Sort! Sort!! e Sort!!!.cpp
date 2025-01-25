#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct numero {
    int valor;
    int modulo;
};

bool compara(numero x, numero y) {
    if(x.modulo != y.modulo)
        return x.modulo < y.modulo;
    if(x.valor % 2 == 0 && y.valor % 2 != 0)
        return false;
    if(x.valor % 2 != 0 && y.valor % 2 == 0)
        return true;
    if(x.valor % 2 == 0 && y.valor % 2 == 0)
        return x.valor < y.valor;
    return x.valor > y.valor;
}

int main() {

    int N, M, aux;

    while(cin >> N >> M && M != 0 && N != 0) {
        vector<numero> X(N);
        for(int i = 0; i < N; i++) {
            cin >> aux;
            X[i].valor = aux;
            X[i].modulo = aux % M;
        }

        sort(X.begin(), X.end(), compara);

        cout << N << ' ' << M << endl;
        for(numero n: X)
            cout << n.valor << endl;
    }

    cout << "0 0" << endl;

    return 0;
}