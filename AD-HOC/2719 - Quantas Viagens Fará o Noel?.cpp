#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int T, N, M, P;
    int soma, qtd;

    cin >> T;
    while(T--) {

        soma = qtd = 0;
        cin >> N >> M;
        while(N--) {
            cin >> P;
            if(soma + P <= M)
                soma += P;
            else {
                soma = P;
                qtd++;
            }
        }

        cout << qtd + 1 << endl;
    }

    return 0;
}