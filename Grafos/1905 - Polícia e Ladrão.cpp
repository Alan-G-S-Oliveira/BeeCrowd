#include <iostream>
#include <vector>
#include <queue>

using namespace std;

bool busca(vector<vector<int>> &grafo) {
    queue<pair<int, int>> fila;

    grafo[0][0] = 1;
    fila.push({0, 0});
    while(!fila.empty()) {
        pair<int, int> x = fila.front();
        fila.pop();

        if(x.first - 1 >= 0 && grafo[x.first - 1][x.second] == 0) {
            fila.push({x.first - 1, x.second});
            grafo[x.first - 1][x.second] = 1;
        }

        if(x.first + 1 < (int)grafo.size() && grafo[x.first + 1][x.second] == 0) {
            fila.push({x.first + 1, x.second});
            grafo[x.first + 1][x.second] = 1;
        }

        if(x.second - 1 >= 0 && grafo[x.first][x.second - 1] == 0) {
            fila.push({x.first, x.second - 1});
            grafo[x.first][x.second - 1] = 1;
        }

        if(x.second + 1 < (int)grafo.size() && grafo[x.first][x.second + 1] == 0) {
            fila.push({x.first, x.second + 1});
            grafo[x.first][x.second + 1] = 1;
        }
    }

    return grafo[grafo.size() - 1][grafo.size() - 1] == 1;
}

int main() {

    int T;
    vector<vector<int>> grafo(5, vector<int>(5));

    cin >> T;

    while(T--) {
        cin.get();
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++)
                cin >> grafo[i][j];
        }

        cout << (busca(grafo)? "COPS": "ROBBERS") << endl;
    }

    return 0;
}