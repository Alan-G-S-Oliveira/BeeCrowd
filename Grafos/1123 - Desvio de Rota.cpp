#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using aresta = pair<int, int>; 
const int INF = 1e9;

vector<int> djikstra(vector<vector<aresta>> &grafo, int n) {
    vector<int> distancias(grafo.size(), INF);
    priority_queue<aresta, vector<aresta>, greater<>> fila;
    aresta x;

    distancias[n] = 0;
    fila.push({0, n});

    while(!fila.empty()) {
        x = fila.top();
        fila.pop();

        if(x.first > distancias[x.second])
            continue;

        for(aresta &a: grafo[x.second]) {
            int peso = a.first;
            int vizinho =  a.second;

            if(distancias[vizinho] > distancias[x.second] + peso) {
                distancias[vizinho] = distancias[x.second] + peso;
                fila.push({distancias[vizinho], vizinho});
            }
        }
    }

    return distancias;
}

int main() {

    int N, M, C, K, U, V, P;

    while(cin >> N >> M >> C >> K && (N != 0 || M != 0 || C != 0 || K != 0)) {
        vector<vector<aresta>> grafo(N);

        for(int i = 0; i < M; i++) {
            cin >> U >> V >> P;

            if(U >= C && V >= C) {
                grafo[U].push_back({P, V});
                grafo[V].push_back({P, U});
            } else if(U >= C && V < C)
                grafo[U].push_back({P, V});
            else if(U < C && V >= C)
                grafo[V].push_back({P, U});
            else {
                if(V == U + 1)
                    grafo[U].push_back({P, V});
                if(U == V + 1)
                    grafo[V].push_back({P, U});
            }
        }


        vector<int> saida = djikstra(grafo, K);
        cout << saida[C - 1] << endl;
    }

    return 0;
}