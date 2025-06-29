#include <iostream>
#include <vector>
#include <queue>

using namespace std;

using aresta = pair<int, int>;

const int INF = 1e9;

bool busca(vector<vector<aresta>> &grafo, int v, int u) {

    bool saida = false;

    for(aresta &a: grafo[v]) {
        if(a.first == u) {
            saida = true;
            break;
        }
    }

    if(saida) {
        for(aresta &a: grafo[u]) {
            if(a.first == v)
                return true;
        }
    }

    return false;
}

vector<int> dijkstra(vector<vector<aresta>> &grafo, int v) {
    vector<int> c(grafo.size(), INF);
    priority_queue<aresta, vector<aresta>, greater<aresta>> H;

    c[v] = 0;
    H.push({0, v});

    while(!H.empty()) {
        int d_atual = H.top().first;
        int u =  H.top().second;
        H.pop();

        if(d_atual > c[u])
            continue;

        for(aresta a: grafo[u]) {
            int vizinho = a.first;
            int peso = a.second;

            if(c[u] + peso < c[vizinho]) {
                c[vizinho] = c[u] + peso;
                H.push({c[vizinho], vizinho});
            }
        }
    }

    return c;
}

int main() {

    int N, E, X, Y, H, K, O, D;
    string saida = "";

    while(cin >> N >> E && (N != 0 || E != 0)) {

        vector<vector<aresta>> grafo(N);
        for(int i = 0; i < E; i++) {
            cin >> X >> Y >> H;
            grafo[X - 1].push_back({Y - 1, H});
        }

        for(int i = 0; i < N - 1; i++) {
            for(int j = i + 1; j < N; j++) {
                if(busca(grafo, i, j) && busca(grafo, j, i)) {
                    grafo[i].push_back({j, 0});
                    grafo[j].push_back({i, 0});
                }
            }
        }

        cin >> K;
        vector<vector<int>> distancias(N);
        for(int i = 0; i < K; i++) {
            cin >> O >> D;
            distancias[O - 1] = dijkstra(grafo, O - 1);
            if(distancias[O - 1][D - 1] < INF)
                saida +=  to_string(distancias[O - 1][D - 1]) += "\n";
            else
                saida += "Nao e possivel entregar a carta\n";
        }
        saida += "\n";
    }

    cout << saida;

    return 0;
}