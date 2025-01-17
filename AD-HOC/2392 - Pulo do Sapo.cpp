#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M, P, D;

    cin >> N >> M;
    vector<bool> sapos(N, false);

    for(int i = 0; i < M; i++) {
        cin >> P >> D;
        for(int j = P - 1; j < N; j += D)
            sapos[j] = true;
        for(int j = P - 1; j >= 0; j -= D)
            sapos[j] = true;
    }

    for(bool b: sapos)
        cout << b << endl;

    return 0;
}