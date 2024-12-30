#include <iostream>

using namespace std;

int main() {

    int N, M;
    int *vetor, pos = -1;
    bool escada = true;

    cin >> N >> M;
    cin.ignore();

    vetor = new int[M];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++)
            cin >> vetor[j];
        

        for(int j = 0; j < M; j++) {
            if(vetor[j] != 0) {
                if(j <= pos)
                    escada = false;
                pos = j;
                break;
            }
            if(j == M - 1)
                pos = M;
        }
    }

    cout << (escada? 'S': 'N') << endl;

    return 0;
}