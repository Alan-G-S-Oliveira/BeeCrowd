#include <iostream>

using namespace std;

int main() {

    int M, N;
    int aux, soma;

    while(cin >> M >> N) {

        soma = 0;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < N; j++) {
                cin >> aux;
                soma += aux;
            }
        }

        cout << soma / 60 << " saca(s) e " << soma % 60 << " litro(s)" << endl;
    }

    return 0;
}