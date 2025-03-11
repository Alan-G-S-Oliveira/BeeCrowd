#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct competidor {
    int id;
    int tempo =  0;
};

bool comparar(competidor a, competidor b) {
    return a.tempo < b.tempo;
}

int main() {

    int N, M, X;

    cin >> N >> M;
    vector<competidor> corrida(N); 

    for(int i = 0; i < N; i++) {
        corrida[i].id = i + 1;
        for(int j = 0; j < M; j++) {
            cin >> X;
            corrida[i].tempo += X;
        }
    }
    sort(corrida.begin(), corrida.end(), comparar);

    cout << corrida[0].id << endl;

    return 0;
}