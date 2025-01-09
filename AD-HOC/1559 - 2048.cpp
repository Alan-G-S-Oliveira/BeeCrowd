#include <iostream>

using namespace std;

int main() {

    int N;
    int matriz[4][4];

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {

        bool baixo = false, cima = false;
        bool direita = false, esquerda = false;
        bool venceu = false;

        for(int j = 0; j < 4; j++) {
            for(int k = 0; k < 4; k++) {
                cin >> matriz[j][k];
                if(matriz[j][k] == 2048)
                    venceu = true;
            }
            cin.ignore();
        }

        if(venceu)
            cout << "NONE" << endl;
        else {
            for(int j = 0; j < 3; j++) {
                for(int k = 0; k < 4; k++) {
                    if(matriz[j][k] == 0 && matriz[j + 1][k] != 0)
                        cima = true;
                    else if(matriz[j][k] == matriz[j + 1][k] && matriz[j][k] != 0)
                        baixo = true;
                }
            }
            for(int j = 3; j > 0; j--) {
                for(int k = 0; k < 4; k++) {
                    if(matriz[j][k] == 0 && matriz[j - 1][k] != 0)
                        baixo = true;
                    else if(matriz[j][k] == matriz[j - 1][k] && matriz[j][k] != 0)
                        cima = true;
                }
            }
            for(int j = 0; j < 4; j++) {
                for(int k = 0; k < 3; k++) {
                    if(matriz[j][k] == 0 && matriz[j][k + 1] != 0)
                        esquerda = true;
                    else if(matriz[j][k] == matriz[j][k + 1] && matriz[j][k] != 0)
                        direita = true;
                }
            }
            for(int j = 0; j < 4; j++) {
                for(int k = 3; k > 0; k--) {
                    if(matriz[j][k] == 0 && matriz[j][k - 1] != 0)
                        direita = true;
                    else if(matriz[j][k] == matriz[j][k - 1] && matriz[j][k] != 0)
                        esquerda = true;
                }
            }

            bool espaco = false;

            if(baixo) {
                cout << "DOWN";
                espaco = true;
            }
            if(esquerda) {
                if(espaco)
                    cout << " ";
                else
                    espaco = true;
                cout << "LEFT";
            }
            if(direita) {
                if(espaco)
                    cout << " ";
                else
                    espaco = true;
                cout << "RIGHT";
            }
            if(cima) {
                if(espaco)
                    cout << " ";
                else
                    espaco = true;
                cout << "UP";
            } else if(!baixo && !esquerda && !direita)
                cout << "NONE";
            cout << endl;
        }

    }

    return 0;
}