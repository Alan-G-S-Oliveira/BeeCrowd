#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int media, maior, menor;
    int N, M, cont = 1;
    int *vetor;

    while(cin >> N >> M) {
        if(N == M && M == 0)
            break;

        vetor = new int[N];
        for(int i = 0; i < N; i++)
            cin >> vetor[i];

        for(int i = 0; i <= N - M; i++) {
            int soma = 0;
            for(int j = 0; j < M; j++)
                soma += vetor[i + j];
            media = soma / M;
            if(i == 0) {
                maior = media;
                menor = media;
            } else {
                if(media > maior)
                    maior = media;
                if(media < menor)
                    menor = media;
            }
        }

        cout << "Teste " << cont << endl;
        cout << floor(menor) << " " << floor(maior) << '\n' << endl;
        cont++;

        delete[] vetor;
    }

    return 0;
}