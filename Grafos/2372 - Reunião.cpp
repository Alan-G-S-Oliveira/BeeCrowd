#include <iostream>
#include <vector>

using namespace std;

#define INFINITO 1000000000

void floyd_warshall(vector<vector<int>> &distancias) {
    int N = distancias.size();

    for(int k = 0; k < N; k++) {
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                if(distancias[i][k] < INFINITO && distancias[k][j] < INFINITO)
                    distancias[i][j] = min(distancias[i][j], distancias[i][k] + distancias[k][j]);
            }
        }
    }
}

int main() {

    int N, M, U, V, W;

    cin >> N >> M;

    vector<vector<int>> grafo(N, vector<int>(N, INFINITO));
    for(int i = 0; i < N; i++)
        grafo[i][i] = 0;

    while(M--) {
        cin >> U >> V >> W;
        grafo[U][V] = min(grafo[U][V], W);
        grafo[V][U] = min(grafo[V][U], W);
    }

    floyd_warshall(grafo);

    int menor_maxima = INFINITO;
    for(int i = 0; i < N; i++) {
        int maior = 0;
        for(int j = 0; j < N; j++) {
            if(i != j)
                maior = max(maior, grafo[i][j]);
        }
        menor_maxima = min(menor_maxima, maior);
    }

    cout << menor_maxima << endl;

    return 0;
}