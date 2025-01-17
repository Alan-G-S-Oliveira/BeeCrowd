#include <iostream>

using namespace std;

int main() {

    int T, N, P;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N;

        int cont, soma = 0, saida = 0;
        double media, maior;
        for(int j = 0; j < N; j++) {
            cin >> P;
            
            soma += P;
            if(j == 0) {
                cont = 1;
                media = P;
                maior = P;
            } else {
                media = soma / (cont + 1.0);
                if(media == maior) 
                    cont++;
                else {

                    if(P > maior) {
                        maior = P;
                        saida = 1;
                    } else
                        saida = max(saida, cont);

                    cont = 1;
                    soma = P;
                    media = soma;
                }
            }
        }

        saida = max(saida, cont);

        cout << "Caso #" << i + 1 << ": ";
        cout << saida << endl;
    }

    return 0;
}