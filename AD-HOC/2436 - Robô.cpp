#include <iostream>

using namespace std;

int main() {

    int L, C, A, B;
    int **matriz;

    cin >> L >> C;
    cin.ignore();

    cin >> A >> B;
    cin.ignore();

    matriz = new int*[L];
    for(int i = 0; i < L; i++) {
        matriz[i] = new int[C];
        for(int j = 0; j < C; j++)
            cin >> matriz[i][j];
    }

    A--;
    B--;

    while(true) {
        matriz[A][B] = 0;
        bool moveu = false;

        if(A > 0 && matriz[A - 1][B] == 1) {
            A--;
            moveu = true;
        } else if(A <  L - 1 && matriz[A + 1][B] == 1) {
            A++;
            moveu = true;
        } else if(B > 0 && matriz[A][B - 1] == 1) {
            B--;
            moveu = true;
        } else if(B < C - 1 && matriz[A][B + 1] == 1) {
            B++;
            moveu = true;
        }

        if(!moveu)
            break;
    }

    cout << A + 1 << " " << B + 1 << endl;

    for(int i = 0; i < L; i++)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}