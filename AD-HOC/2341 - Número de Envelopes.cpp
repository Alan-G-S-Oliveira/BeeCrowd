#include <iostream>

using namespace std;

int main() {

    int N, K, aux;
    int *balas;

    cin >> N >> K;
    balas = new int[K];

    for(int i = 0; i < K; i++)
        balas[i] = 0;

    for(int i = 0; i < N; i++) {
        cin >> aux;
        balas[aux - 1]++;
    }

    int menor = balas[0];
    for(int i = 1; i < K; i++) {
        if(balas[i] < menor)
            menor = balas[i];
    }

    cout << menor << endl;

    delete[] balas;

    return 0;
}