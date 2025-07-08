#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, P;

    while(cin >> N && N != 0) {
        cin >> P;

        vector<int> peso(N + 1);
        vector<int> utilidade(N + 1);

        for(int i = 1; i <= N; i++)
            cin >> utilidade[i] >> peso[i];

        vector<vector<int>> matriz(N + 1, vector<int>(P + 1, 0));
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= P; j++) {
                if (peso[i] <= j)
                    matriz[i][j] = max(matriz[i - 1][j], utilidade[i] + matriz[i - 1][j - peso[i]]);
                else
                    matriz[i][j] = matriz[i - 1][j];
            }
        }

        cout << matriz[N][P] << " min.\n";
    }

    return 0;
}