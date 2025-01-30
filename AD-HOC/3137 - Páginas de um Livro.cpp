#include <iostream>

using namespace std;

inline int tamanho(int N) {
    int saida = 1;

    while(N / 10 != 0) {
        saida++;
        N /= 10;
    }

    return saida;
}

int main() {

    int N, saida = 0;

    cin >> N;

    for(int i = 1; i <= N; i++)
        saida += tamanho(i);

    cout << saida << endl;

    return 0;
}