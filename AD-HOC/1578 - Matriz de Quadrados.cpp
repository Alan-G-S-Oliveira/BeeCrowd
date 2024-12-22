#include <iostream>

using namespace std;

using num = unsigned long long int;

int qtd_digitos(num x) {
    int saida = 1;
    while((x /= 10) != 0)
        saida++;
    return saida;
}

int main() {

    int N, M;
    num X;
    num *maior;
    num **matriz;

    cin >> N;
    cin.ignore();
    for(int n = 0; n < N; n++) {
        cin >> M;
        cin.ignore();
        matriz = new num*[M];
        maior = new num[M];

        for(int i = 0; i < M; i++) {
            matriz[i] = new num[M];
            for(int j = 0; j < M; j++) {
                cin >> X;
                matriz[i][j] = X * X;
            }
        }

        for(int j = 0; j < M; j++) {
            maior[j] = 0;
            for(int i = 0; i < M; i++) {
                if(matriz[i][j] > maior[j])
                    maior[j] = matriz[i][j];
            }
        }

        cout << "Quadrado da matriz #" << n + 4 << ':' << endl;
        for(int i = 0; i < M; i++) {
            for(int j = 0; j < M; j++) {
                int espaco_maior = qtd_digitos(maior[j]);
                int espaco_atual = qtd_digitos(matriz[i][j]);
                for(int k = 0; k < espaco_maior - espaco_atual; k++)
                    cout << " ";
                cout << matriz[i][j];
                if(j != M - 1)
                    cout << " ";
            }
            cout << endl;
        }
        if(n != N - 1)
            cout << endl;

        for(int i = 0; i < M; i++)
            delete[] matriz[i];
        delete[] matriz;
    }

    return 0;
}