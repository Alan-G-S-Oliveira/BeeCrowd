#include <iostream>

using namespace std;

int main() {

    int N, soma1, soma2, x, y, certo, aux;
    int **quadrado;
    int *linha, *coluna;

    cin >> N;

    quadrado = new int*[N];
    for(int i = 0; i < N; i++)
        quadrado[i] = new int[N];

    linha = new int[N];
    coluna = new int[N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cin >> quadrado[i][j];
    }

    for(int i = 0; i < N; i++) {
        soma1 = 0;
        soma2 = 0;
        for(int j = 0; j < N; j++) {
            soma1 += quadrado[i][j];
            soma2 += quadrado[j][i];
        }

        linha[i] = soma1;
        coluna[i] = soma2;
    }

    for(int i = 0; i < N - 2; i++) {
        if(linha[i] == linha[i + 1] && linha[i] != linha[i + 2]) {
            certo = linha[i];
            x = i + 2;
            break;
        } else if(linha[i] != linha[i + 1] && linha[i + 1] == linha[i + 2]) {
            certo = linha[i + 1];
            x = i;
            break;
        } else if(linha[i] == linha[i + 2] && linha[i] != linha[i + 1]) {
            certo = linha[i];
            x = i + 1;
            break;
        }
    }

    for(int i = 0; i < N; i++) {
        if(coluna[i] == linha[x]) {
            y = i;
            break;
        }
    }

    aux = 0;
    for(int i = 0; i < N; i++) {
        if(i != x)
            aux += quadrado[i][y];
    }

    cout << certo - aux << ' ' << quadrado[x][y] << endl;

    for(int i = 0; i < N; i++)
        delete[] quadrado[i];
    delete[] quadrado;

    return 0;
}