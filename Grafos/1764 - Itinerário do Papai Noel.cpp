#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct aresta {
    int v1;
    int v2;
    int peso;
};

int representante(vector<int> &vertices, int i) {
    int j = i;

    while(j != vertices[j])
        j = vertices[j];

    while(vertices[i] != j) {
        int k = vertices[i];
        vertices[i] = j;
        i = k;
    }

    return j;
}

int altura(vector<int> &vertices, int i) {
    int saida = 0;
    while(vertices[i] != i) {
        i = vertices[i];
        saida++;
    }

    return saida;
}

int uniao(vector<int> &vertices, int i, int j) {
    i = representante(vertices, i);
    j = representante(vertices, j);

    if(altura(vertices, i) > altura(vertices, j)) {
        vertices[j] = i;
        return i;
    }

    vertices[i] = j;
    return j;
}

int kruskal(vector<int> &vertices, vector<aresta> grafo) {
    int saida = 0;

    for(aresta a: grafo) {
        if(representante(vertices, a.v1) != representante(vertices, a.v2)) {
            uniao(vertices, a.v1, a.v2);
            saida += a.peso;
        }
    }

    return saida;
}

bool comparar(aresta &a1, aresta &a2) {
    return a1.peso < a2.peso;
}

int main() {

    int M, N;

    while(cin >> M >> N && (M != 0 || N != 0)) {
        vector<int> vertices(M);
        vector<aresta> grafo(N);

        for(int i = 0; i < M; i++)
            vertices[i] = i;

        for(int i = 0; i < N; i++)
            cin >> grafo[i].v1 >> grafo[i].v2 >> grafo[i].peso;

        sort(grafo.begin(), grafo.end(), comparar);
        cout << kruskal(vertices, grafo) << endl;
    }

    return 0;
}