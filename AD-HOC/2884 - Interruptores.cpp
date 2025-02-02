#include <iostream>
#include <vector>

using namespace std;

inline bool compara(vector<bool> &v1, vector<bool> &v2) {
    int tam = v1.size();
    for(int i = 0; i < tam; i++) {
        if(v1[i] != v2[i])
            return false;
    }

    return true;
}

int main() {

    int N, M, L, X, K, Y;
    int qtd = 0;

    cin >> N >> M;

    vector<vector<int>> interruptores(N);
    vector<bool> lampadas(M, false);
    vector<bool> atual(M);

    cin >> L;
    while(L--) {
        cin >> X;
        lampadas[X - 1] = true;
    }

    for(int i = 0; i < M; i++)
        atual[i] = lampadas[i];

    for(int i = 0; i < N; i++) {
        cin >> K;
        while(K--) {
            cin >> Y;
            interruptores[i].push_back(Y - 1);
        }
    }

    int cont = 0;
    do {
        for(int i: interruptores[cont])
            atual[i] = !atual[i];

        bool achou = true;
        for(bool b: atual) {
            if(b) {
                achou = false;
                break;
            }
        }
        if(!achou)
            qtd++;
        else
            break;

        cont = (cont + 1) % N;

    } while(!compara(lampadas, atual) || cont != 0);

    if(compara(lampadas, atual))
        cout << -1 << endl;
    else
        cout << qtd + 1 << endl;

    return 0;
}