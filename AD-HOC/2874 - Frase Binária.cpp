#include <iostream>
#include <cmath>

using namespace std;

int converter(string S) {
    int tam = S.size();
    int saida = 0;

    for(int i = 0; i < tam; i++) 
        saida += pow(2, i) * (S[tam - i - 1] - '0');

    return saida;
}

int main() {

    int N;
    char S;
    string B;

    while(cin >> N) {

        for(int i = 0; i < N; i++) {
            cin >> B;
            S = converter(B);
            cout << S;
        }
        cout << endl;
    }

    return 0;
}