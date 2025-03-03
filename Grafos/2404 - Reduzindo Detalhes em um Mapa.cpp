#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct aresta {
    int v1;
    int v2;
    int peso;
};

int representante(vector<int> &conjunto, int i) {
    int j = i;
    while(conjunto[j] != j)
        j = conjunto[j];

    while(conjunto[i] != j) {
        int k = conjunto[i];
        conjunto[i] = j;
        i = k;
    }

    return j;
}

int altura(vector<int> &conjunto, int i) {
    int saida = 0;

    while(conjunto[i] != i) {
        saida++;
        i = conjunto[i];
    }

    return saida;
}

int uniao(vector<int> &conjunto, int i, int j) {
    i = representante(conjunto, i);
    j = representante(conjunto, j);

    if(altura(conjunto, i) > altura(conjunto, j)) {
        conjunto[j] = i;
        return i;
    }

    conjunto[i] = j;
    return j; 
}

int kruskal(vector<int> &vertices, vector<aresta> &grafo) {
    int saida = 0;

    for(aresta a: grafo) {
        if(representante(vertices, a.v1) != representante(vertices, a.v2)) {
            uniao(vertices, a.v1, a.v2);
            saida += a.peso;
        }
    }

    return saida;
}

bool comparar(aresta a1, aresta a2) {
    return a1.peso < a2.peso;
}

int main() {

    int N, M, U, V, C;

    cin >> N >> M;

    vector<int> vertices(N);
    for(int i = 0; i < N; i++)
        vertices[i] = i;

    vector<aresta> grafo(M);
    for(int i = 0; i < M; i++) {
        cin >> U >> V >> C;
        grafo[i] = {U - 1, V - 1, C};
    }

    sort(grafo.begin(), grafo.end(), comparar);

    cout << kruskal(vertices, grafo) << endl;

    return 0;
}