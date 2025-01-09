#include <iostream>

using namespace std;

int main() {

    int N, K;
    int *vetor;

    while(cin >> N) {
        if(N == 0)
            break;

        vetor = new int[N];
        for(int i = 0; i < N; i++)
            cin >> vetor[i];
        
        cin >> K;

        while(K != vetor[K - 1])
            K = vetor[K - 1];

        cout << K << endl;

        delete[] vetor;
    }

    return 0;
}