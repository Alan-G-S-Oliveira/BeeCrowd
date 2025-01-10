#include <iostream>

using namespace std;

int potencia(int x, int y) {
    int saida = 1;
    for(int i = 0; i < y; i++)
        saida *= x;
    return saida;
}

int main() {

    int N, cont = 1;
     while(cin >> N) {
        if(N == 0)
            break;
        
        cout << "Teste " << cont << endl;
        cout << potencia(2, N) - 1 << '\n' << endl;
        cont++;

     }

    return 0;
}