#include <iostream>

using namespace std;

int main() {

    string P;

    while(cin >> P) {
        int x = 0;
        for(char c: P) {
            if(c == 'x')
                x++;
        }

        int qtd = 0;
        int cont = 0;
        int maior = 0;
        for(char c: P) {
            if(c == 'o')
                qtd++;
            else {
                if(cont != 0 && cont != x) {
                    if(maior < qtd / 2)
                        maior = qtd / 2;
                } else {
                    if(maior < qtd)
                        maior = qtd;
                }
                cont++;
                qtd = 0;
            }
        }

        if(maior < qtd)
            maior = qtd;

        cout << maior << endl;
    }

    return 0;
}