#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {

    int N, M, X, Y, K;
    int A, B, qtd = 0;

    cin >> N >> M >> X >> Y >> K;

    vector<vector<int>> matriz(N, vector<int>(M, -1));

    for(int i = 0; i < K; i++) {
        cin >> A >> B;

        matriz[A - 1][B - 1] = 0;
    }

    queue<pair<int, int>> pintados;
    pintados.push({X - 1, Y - 1});
    matriz[X - 1][Y - 1] = 1;
    
    while(!pintados.empty()) {

        pair<int, int> aux = pintados.front();
        pintados.pop();

        for(int i = -1; i < 2; i++) {
            for(int j = -1; j < 2; j++) {

                int auxI = aux.first + i;
                int auxJ = aux.second + j;

                if((auxI) >= 0 && (auxI) < N) {
                    if((auxJ) >= 0 && (auxJ) < M) {
                        if(matriz[auxI][auxJ] == -1) {
                            matriz[auxI][auxJ] = 1;
                            pintados.push({auxI, auxJ});
                        }
                    }
                }
            }
        }
        qtd++;
    }

    cout << qtd << endl;

    return 0;
}