#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct tecla {
    int id;
    double oleosidade;
};

bool compara(tecla x, tecla y) {
    return x.oleosidade > y.oleosidade;
}

int main() {

    int V, cont = 1;
    vector<tecla> senhas(10);

    while(cin >> V) {
        for(int i = 0; i < 10; i++) {
            senhas[i].id = i;
            cin >> senhas[i].oleosidade;
        }

        sort(senhas.begin(), senhas.end(), compara);

        cout << "Caso " << cont++ << ": ";
        for(int i = 0; i < V; i++)
            cout << senhas[i].id;
        cout << endl;
    }

    return 0;
}