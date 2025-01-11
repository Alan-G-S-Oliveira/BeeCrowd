#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compara(int x, int y) {
    return x > y;
}

int main() {

    int N[5], aux, K, total = 0;
    vector<vector<int>> colecao(5);
    vector<int> livros;

    for(int i = 0; i < 5; i++) {
        cin >> N[i];
        for(int j = 0; j < N[i]; j++) {
            cin >> aux;
            colecao[i].push_back(aux);
        }
    }

    cin >> K;

    for(int i = 0; i < N[0]; i++) {
        for(int j = 0; j < N[1]; j++) {
            for(int k = 0; k < N[2]; k++) {
                for(int l = 0; l < N[3]; l++) {
                    for(int m = 0; m < N[4]; m++)
                        livros.push_back(colecao[0][i] + colecao[1][j] + colecao[2][k] + colecao[3][l] + colecao[4][m]);
                }
            }
        }
    }

    sort(livros.begin(), livros.end(), compara);

    for(int i = 0; i < K; i++)
        total += livros[i];

    cout << total << endl;

    return 0;
}