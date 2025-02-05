#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct aresta {
    int v1;
    int v2;
    int peso;
};

int representante(vector<int> &conjuntos, int i) {
    int j = i;
    while(conjuntos[j] != j)
        j = conjuntos[j];

    while(conjuntos[i] != j) {
        int k = conjuntos[i];
        conjuntos[i] = j;
        i = k;
    }

    return j;
}

int altura(vector<int> &conjuntos, int i) {
    int saida = 0;
    while(i != conjuntos[i]) {
        i = conjuntos[i];
        saida++;
    }

    return saida;
}
int uniao(vector<int> &conjuntos, int i, int j) {
    i = representante(conjuntos, i);
    j = representante(conjuntos, j);

    if(altura(conjuntos, i) > altura(conjuntos, j)) {
        conjuntos[j] = i;
        return i;
    }

    conjuntos[i] = j;
    return j;
}

int kruskal(vector<aresta> &grafo, vector<int> &vertices) {
    
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

    int m, n;

    while(cin >> m >> n && (m != 0 && n != 0)) {
        vector<aresta> grafo(n);
        vector<int> vertices(m);
        
        int total = 0;

        for(int i = 0; i < m; i++)
            vertices[i] = i;

        for(int i = 0; i < n; i++) {
            cin >> grafo[i].v1 >> grafo[i].v2 >> grafo[i].peso;
            total += grafo[i].peso;
        }
        
        sort(grafo.begin(), grafo.end(), comparar);

        cout << total - kruskal(grafo, vertices) << endl;
    }

    return 0;
}