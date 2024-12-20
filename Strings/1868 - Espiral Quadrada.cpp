#include <iostream>

using namespace std;

int main() {

    int N, x, y;
    while(true) {
        cin >> N;
        cin.ignore();
        if(N == 0)
            break;

        x = N / 2;
        y = N / 2;
        int direcao = 0, passos = 0, limite = 1, mudar = 0;
        while(true) {
            for(int i = 0; i < N; i++) {
                for(int j = 0; j < N; j++) {
                    if(i == x && j == y)
                        cout << 'X';
                    else
                        cout << 'O';
                }
                cout << endl;
            }
            cout << '@' << endl;

            if(x == N - 1 && y == N - 1)
                break;
                
            if(direcao == 0)
                y++;
            else if(direcao == 1)
                x--;
            else if(direcao == 2)
                y--;
            else
                x++;
            passos++;

            if(passos == limite) {
                passos = 0;
                direcao = (direcao + 1) % 4;
                mudar++;
                if(mudar == 2) {
                    mudar = 0;
                    limite++;
                }
            }
        }

    }

    return 0;
}