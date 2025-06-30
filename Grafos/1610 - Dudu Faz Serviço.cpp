#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool busca_em_profundidade(vector<vector<int>> &grafo, vector<int> &visitados, int n) {
    stack<int> pilha;

    pilha.push(n);
    visitados[n] = true;

    while(!pilha.empty()) {

        int x = pilha.top();
        bool achou = false;
        for(int i: grafo[x]) {
            if(visitados[i] == 0) {
                visitados[i] = 1;
                pilha.push(i);
                achou = true;
                break;
            } else if(visitados[i] == 1){
                return true;
            }
        }
        if(!achou) {
            pilha.pop();
            visitados[x] = 2;
        }
    }

    return false;
}

bool verifica(vector<vector<int>> &grafo) {
    vector<int> visitados(grafo.size(), 0);

    for(int i = 0; i < grafo.size(); i++) {
        if(visitados[i] == 0) {
            if(busca_em_profundidade(grafo, visitados, i))
                return true;
        }
    }

    return false;
}

int main() {

    int T, N, M, A, B;

    cin >> T;
    while(T--) {
        cin >> N >> M;

        vector<vector<int>> grafo(N);
        for(int i = 0; i < M; i++) {
            cin >> A >> B;
            grafo[A - 1].push_back(B - 1);
        }

        cout << (verifica(grafo)? "SIM": "NAO") << endl;
    }

    return 0;
}