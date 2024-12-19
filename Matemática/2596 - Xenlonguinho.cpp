#include <iostream>

using namespace std;

int divisores(int n) {
    int qtd;
    int saida  = 0;
    for(int i = 1; i <= n; i++) {
        qtd = 0;
        for(int j = 1; j <= i; j++) {
            if(i % j == 0)
                qtd++;
        }
        if(qtd % 2 == 0)
            saida++;
    }
    return saida;
}

int main() {

    int C, N;
    cin >> C;
    for(int i = 0; i < C; i++) {
        cin >> N;
        cout << divisores(N) << endl;
    }

    return 0;
}