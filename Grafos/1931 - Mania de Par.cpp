#include <iostream>
#include <limits>
#include <vector>
#include <queue>
#include <tuple>

using namespace std;

const long long int INF = 1e18;

struct Aresta {
    int v;
    long long int peso;
};

int main() {

    int C, V, C1, C2;
    long long int G;

    cin >> C >> V;

    vector<Aresta> grafo[2][C];

    for(int i = 0; i < V; i++) {

        cin >> C1 >> C2 >> G;
        grafo[0][C1 - 1].push_back({C2 - 1, G});
        grafo[0][C2 - 1].push_back({C1 - 1, G});

        grafo[1][C1 - 1].push_back({C2 - 1, G});
        grafo[1][C2 - 1].push_back({C1 - 1, G});

    }

    vector<vector<long long int>> distancia(2, vector<long long int>(C, INF));
    priority_queue<tuple<long long int, int, int>, vector<tuple<long long int, int, int>>, greater<>> H;

    distancia[0][0] = 0;
    H.push({0, 0, 0});

    while(!H.empty()) {
        auto[d, u, paridade] = H.top();
        H.pop();

        if(d > distancia[paridade][u])
            continue;

        for(auto &aresta: grafo[paridade][u]) {
            int v = aresta.v;
            long long int w = aresta.peso;
            int prox_paridade = 1 - paridade;
                
            if(distancia[prox_paridade][v] > d + w) {
                distancia[prox_paridade][v] = d + w;
                H.push({distancia[prox_paridade][v], v, prox_paridade});
            }
        }
    }

    cout << (distancia[0][C - 1] == INF? -1: distancia[0][C - 1]) << endl;

    return 0;
}