#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool busca_em_largura(vector<vector<int>> &grafo, int n) {
    vector<bool> visitados(grafo.size(), false);
    queue<int> fila;

    int qtd = 0;

    visitados[n] = true;
    fila.push(n);

    while(!fila.empty()) {

        int x = fila.front();
        fila.pop();

        for(int i: grafo[x]) {
            if(!visitados[i]) {
                visitados[i] = true;
                fila.push(i);
            }
        }
        qtd++;
    }

    return (qtd == (int)grafo.size());
}

bool verifica(vector<vector<int>> &grafo) {
    for(int i = 0; i < (int)grafo.size(); i++) {
        if(!busca_em_largura(grafo, i))
            return false;
    }

    return true;
}

int main() {

    int N, M, V, W, P;

    while(cin >> N >> M && (N != 0 || M != 0)) {
        vector<vector<int>> grafo(N);

        for(int i = 0; i < M; i++) {
            cin >> V >> W >> P;
            grafo[V - 1].push_back(W - 1);
            if(P == 2)
                grafo[W - 1].push_back(V - 1);
        }
    
        cout << verifica(grafo) << endl;
    }

    return 0;
}