#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>

using namespace std;

bool busca_em_profundidade(vector<vector<int>> &grafo, vector<bool> &visitados, set<pair<int, int>> &impressos, int n) {
    stack<int> pilha;
    bool saida = false;

    pilha.push(n);
    visitados[n] = true;

    while(!pilha.empty()) {
        int x = pilha.top();

        bool achou = false;
        for(int i: grafo[x]) {
            if(!visitados[i]) {
                visitados[i] = true;
                achou = true;

                for(int j = 0; j < (int)pilha.size(); j++)
                    cout << "  ";
                cout << x << '-' << i << " pathR(G," << i << ')' << endl;

                impressos.insert({x, i});
                pilha.push(i);
                saida = true;
                break;
            } else {
                pair<int, int> aux = {x, i};
                if(impressos.find(aux) == impressos.end())  {
                    for(int j = 0; j < (int)pilha.size(); j++)
                        cout << "  ";
                    cout << x << '-' << i << endl;
                    impressos.insert(aux);
                }
            }
        } 
        if(!achou)
            pilha.pop();
    }

    return saida;
}

int main() {

    int N, V, E;

    cin >> N;
    for(int i = 1; i <= N; i++) {
        cin >> V >> E;
        vector<vector<int>> grafo(V);

        for(int j = 0; j < E; j++) {
            int aux1, aux2;

            cin >> aux1 >> aux2;
            grafo[aux1].push_back(aux2);
        }

        for(int i = 0; i < V; i++)
            sort(grafo[i].begin(), grafo[i].end());

        vector<bool> visitados(V, false);
        set<pair<int, int>> impressos;
        cout << "Caso " << i << ":\n";

        for(int j = 0; j < V; j++) {
            if(!visitados[j]) {
                if(busca_em_profundidade(grafo, visitados, impressos, j))
                    cout << endl;
            }
        }
    }

    return 0;
}