#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

struct resultado {
    int posicao;
    int tempo;
};

bool verifica(resultado r1, resultado r2) {
    return r1.tempo < r2.tempo;
}

int main() {

    int N, M;
    cin >> N >> M;
    cin.ignore();

    vector<resultado> valores(N);
    for(int i = 0; i < N; i++) {
        string aux1, aux2;
        valores[i] = {i + 1, 0};
        getline(cin, aux1);
        istringstream ss(aux1);
        while(ss >> aux2)
            valores[i].tempo += stoi(aux2);
    }

    sort(valores.begin(), valores.end(), verifica);

    cout << valores[0].posicao << endl;
    cout << valores[1].posicao << endl;
    cout << valores[2].posicao << endl;

    return 0;
}