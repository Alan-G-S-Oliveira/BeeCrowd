#include <iostream>

using namespace std;

int main() {

    int N, M, A, B;
    string *vetor;
    
    while(true) {
        cin >> N >> M;
        if(N == M && N == 0)
            break;

        vetor = new string[N];
        for(int i = 0; i < N; i++)
            cin >> vetor[i];

        cin >> A >> B;
        int L = A / N;
        int C = B / M;

        for(int i = 0; i < A; i++) {
            for(int j = 0; j < B; j++) {
                cout << vetor[i / L][j / C];
            }
            cout << endl;
        }
        cout << endl;
        delete[] vetor;
    }

    return 0;
}