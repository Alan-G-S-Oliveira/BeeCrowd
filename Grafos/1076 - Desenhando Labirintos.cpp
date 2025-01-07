#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int busca_em_profundidade(vector<vector<int>> grafo, int inicio) {

    int cont = 0;
    vector<bool> visitado(grafo.size(), false);
    stack<int> pilha;

    pilha.push(inicio);
    visitado[inicio] = true;

    while(!pilha.empty()) {
        int atual = pilha.top();
        bool achou = false;
        for(unsigned int i = 0; i < grafo[atual].size(); i++) {
            if(!visitado[grafo[atual][i]]) {
                achou = true;
                pilha.push(grafo[atual][i]);
                visitado[grafo[atual][i]] = true;
                cont++;
                break;
            }
        }
        if(!achou) {
            cont++;
            pilha.pop();
        }
    }

    return cont;
}

int main() {

    int T, N, V, A;
    int aux1, aux2;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;
        cin >> V >> A;
        cin.ignore();

        vector<vector<int>> grafo(V);
        for(int j = 0; j < A; j++) {
            cin >> aux1 >> aux2;
            cin.ignore();

            grafo[aux1].push_back(aux2);
            grafo[aux2].push_back(aux1);
        }

        cout << busca_em_profundidade(grafo, N) - 1 << endl;
    }

    return 0;
}