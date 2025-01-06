#include <iostream>
#include <vector>

using namespace std;

int main() {

    int T, N, M;
    int aux;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> M;
        cin.ignore();

        vector<int> candidatos(N, 0);
        for(int i = 0; i < M; i++) {
            cin >> aux;
            candidatos[aux - 1]++;
        }

        int vencedor = -1;
        for(int i = 0; i < N; i++) {
            if(candidatos[i] > (M / 2))
                vencedor = i + 1;
        }

        cout << vencedor << endl;

    }    

    return 0;
}