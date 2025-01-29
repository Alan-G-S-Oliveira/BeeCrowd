#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct pessoa {
    int id;
    int amigos;
};

inline int somar(int **matriz, int x, int N) {

    int soma = 0;
    for(int i = 0; i < N; i++)
        soma += matriz[x][i];

    return soma;
}

inline void apaga(int **matriz, int x, int N) {
    for(int i = 0; i < N; i++)
        matriz[i][x] = matriz[x][i] = 0;
}

inline bool compara(pessoa x, pessoa y) {
    return x.amigos < y.amigos;
}

int main() {

    int N, M, K;
    int **grafo;

    while(cin >> N >> M >> K) {
        grafo = new int*[N];
        for(int i = 0; i < N; i++) {
            grafo[i] = new int[N];
            for(int j = 0; j < N; j++)
                grafo[i][j] = 0;
        }
        
        while(M--) {
            int aux1, aux2;
            cin >> aux1 >> aux2;

            grafo[aux1 - 1][aux2 - 1] = 1;
            grafo[aux2 - 1][aux1 - 1] = 1;
        }

        vector<pessoa> p(N);
        for(int i = 0; i < N; i++) {
            p[i].id = i;
            p[i].amigos = somar(grafo, i, N);
        }

        int inicio = 0;
        while(true) {
            sort(p.begin() + inicio, p.end(), compara);

            int i;
            for(i = inicio; p[i].amigos < K && i < N; i++)
                apaga(grafo, p[i].id, N);
            if(inicio == i)
                break;
            inicio = i;

            for(i = inicio; i < N; i++)
                p[i].amigos = somar(grafo, p[i].id, N);
        }

        if(inicio != N) {
            vector<int> aux;
            for(int i = inicio; i < N; i++)
                aux.push_back(p[i].id);

            bool espaco = false;
            sort(aux.begin(), aux.end());
            for(int i: aux) {
                if(espaco)
                    cout << ' ';
                espaco = true;
                cout << i + 1;
            }
            cout << endl;
        } else
            cout << 0 << endl;

        for(int i = 0; i < N; i++)
            delete[] grafo[i];
        delete[] grafo;
    }

    return 0;
}