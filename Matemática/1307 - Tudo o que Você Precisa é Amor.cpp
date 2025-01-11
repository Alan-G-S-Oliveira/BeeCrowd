#include <iostream>
#include <string>
#include <cmath>

using namespace std;

long long int converter(string N) {
    long long int saida = 0;

    unsigned int tamanho = N.size();
    for(unsigned int i = 0; i < tamanho; i++) 
        saida += (N[tamanho - (i + 1)] - '0') * pow(2, i);

    return saida;
}

long long int mdc(long long int X1, long long int X2) {
    
    while(X2 != 0) {
        long long int aux = X2;
        X2 = X1 % X2;
        X1 = aux;
    }

    return X1;
}

int main() {

    int N;
    string S1, S2;
    long long int N1, N2;

    cin >> N;

    for(int i = 1; i <= N; i++) {
        cin >> S1;
        cin >> S2;

        N1 = converter(S1);
        N2 = converter(S2);

        cout << "Pair #" << i << ": ";
        if(mdc(max(N1, N2), (min(N1, N2))) != 1)
            cout << "All you need is love!" << endl;
        else
            cout << "Love is not all you need!" << endl;
    }

    return 0;
}