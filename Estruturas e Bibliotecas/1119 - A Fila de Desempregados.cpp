#include <iostream>
#include <vector>

using namespace std;

int tamanho(int N) {
    int saida = 1;
    while(N / 10 > 0) {
        saida++;
        N /= 10;
    }

    return saida;
}

int main() {

    int N, k, m;

    while(cin >> N >> k >> m && (N != 0 || k != 0 || m != 0)) {
        vector<int> fila(N);
        vector<bool> valido(N, true);
        for(int i = 0; i < N; i++)
            fila[i] = i + 1;

        int tam = N;
        int hor = 0;
        int ant = tam - 1;
        bool virgula = false;
        while(tam > 0) {
            int passos = k;
            while(passos > 0) {
                if(valido[hor])
                    passos--;
                if(passos > 0)
                    hor = (hor + 1) % N;
            }

            passos = m;
            while(passos > 0) {
                if(valido[ant])
                    passos--;
                if(passos > 0)
                    ant = (ant + N - 1) % N;
            }

            if(virgula)
                cout << ',';
            virgula = true;

            cout << (tamanho(fila[hor]) > 1? " ": "  ") << fila[hor];
            if(hor != ant)
                cout << (tamanho(fila[ant]) > 1? " ": "  ") << fila[ant];

            valido[hor] = false;
            valido[ant] = false;

            tam -= (hor == ant)? 1: 2;
        }
        cout << endl;
    }

    return 0;
}