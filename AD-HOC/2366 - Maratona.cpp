#include <iostream>

using namespace std;

int main() {

    int N, M, maior;
    int *P;

    cin >> N >> M;
    P = new int[N];
    for(int i = 0; i < N; i++)
        cin >> P[i];

    maior = P[1] - P[0];
    bool consegue = maior <= M;

    if(consegue) {
        for(int i = 2; i < N; i++) {
            if(P[i] - P[i - 1] > M) {
                consegue = false;
                break;
            }
        }
    }

    if(consegue)
        consegue = 42195 - P[N - 1] <= M;

    cout << (consegue? 'S': 'N') << endl;

    delete[] P;

    return 0;
}