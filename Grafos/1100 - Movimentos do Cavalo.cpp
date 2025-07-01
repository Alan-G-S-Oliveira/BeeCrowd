#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int busca_em_largura(vector<vector<int>> &grafo, int a, int b) {
    vector<bool> visitados(grafo.size(), false);
    vector<int> distancias(grafo.size(), 0);
    queue<int> fila;
    fila.push(a);
    visitados[a] = true;

    while(!fila.empty()) {
        int x = fila.front();
        fila.pop();

        for(int i: grafo[x]) {
            if(!visitados[i]) {
                fila.push(i);
                visitados[i] = true;
                distancias[i] = distancias[x] + 1;
            }
        }
    }

    return distancias[b];
}

int main() {

    vector<vector<int>> grafo(64);

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i + 2 < 8) {
                if(j + 1 < 8)
                    grafo[j * 8  + i].push_back((j + 1) * 8 + (i + 2));
                if(j - 1 >= 0)
                    grafo[j * 8  + i].push_back((j - 1) * 8 + (i + 2));
            }
            if(i - 2 >= 0) {
                if(j + 1 < 8)
                    grafo[j * 8  + i].push_back((j + 1) * 8 + (i - 2));
                if(j - 1 >= 0)
                    grafo[j * 8  + i].push_back((j - 1) * 8 + (i - 2));
            }
            if(j + 2 < 8) {
                if(i + 1 < 8)
                    grafo[j * 8  + i].push_back((j + 2) * 8 + (i + 1));
                if(i - 1 >= 0)
                    grafo[j * 8  + i].push_back((j + 2) * 8 + (i - 1));
            }
            if(j - 2 >= 0) {
                if(i + 1 < 8)
                    grafo[j * 8  + i].push_back((j - 2) * 8 + (i + 1));
                if(i - 1 >= 0)
                    grafo[j * 8  + i].push_back((j - 2) * 8 + (i - 1));
            }
        }
    }

    string A, B;
    int iA, iB;

    while(cin >> A >> B) {
        iA = A[0] - 'a' + (A[1] - '1') * 8;
        iB = B[0] - 'a' + (B[1] - '1') * 8;

        cout << "To get from " << A << " to " << B << " takes " << busca_em_largura(grafo, iA, iB) << " knight moves." << endl;
    }

    return 0;
}