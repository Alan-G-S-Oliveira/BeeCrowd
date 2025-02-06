#include <iostream>

using namespace std;

int main() {

    int n;
    long long int *vetor;

    while(cin >> n && n != 0) {

        vetor = new long long int[n];
        for(int i = 0; i < n; i++)
            cin >> vetor[i];

        long long int saida = 0;
        for(int i = n - 1; i >= 0; i--) {
            saida += vetor[i];
            for(int j = 0; j < i; j++) {
                vetor[j] += vetor[i];
            }
        }

        cout << saida << endl;

        delete[] vetor;
    }

    return 0;
}