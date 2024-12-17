#include <iostream>

using namespace std;

int main() {

    int N;
    int **matriz = new int*[9];
    for(int i = 0; i < 9; i++)
        matriz[i] = new int[i + 1]();
    
    cin >> N;
    for(int i = 0; i < N; i++) {

        for(int j = 0; j < 9; j++) {
            for(int k = 0; k <= j; k++)
                matriz[j][k] = -1;
        }

        cin >> matriz[0][0];
        cin >> matriz[2][0] >> matriz[2][2];
        cin >> matriz[4][0] >> matriz[4][2] >> matriz[4][4];
        cin >> matriz[6][0] >> matriz[6][2] >> matriz[6][4] >> matriz[6][6];
        cin >> matriz[8][0] >> matriz[8][2] >> matriz[8][4] >> matriz[8][6] >> matriz[8][8];
        cin.ignore();

        int aux;
        for(int j = 0; j < 9; j++) {
            for(int k = 0; k <= j; k++) {
                if(matriz[j][k] == -1) {
                    if(k % 2 == 0) {
                        aux = (matriz[j - 1][k] - (matriz[j + 1][k] + matriz[j + 1][k + 2])) / 2;
                        matriz[j + 1][k + 1] = aux;
                    }
                    matriz[j][k] = matriz[j + 1][k] + matriz[j + 1][k + 1];
                }
                cout << matriz[j][k];
                if(k != j)
                    cout << " ";
            }
            cout << endl;
        }

    }

    for(int i = 0; i < 9; i++)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}