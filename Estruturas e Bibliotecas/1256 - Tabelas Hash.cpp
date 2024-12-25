#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M, C, aux;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        cin >> M >> C;
        cin.ignore();

        vector<int> *tabela_hash;
        tabela_hash = new vector<int>[M];

        for(int j = 0; j < C; j++) {
            cin >> aux;
            tabela_hash[aux % M].push_back(aux);
        }

        for(int j = 0; j < M; j++) {
            cout << j << " -> ";
            for(int k: tabela_hash[j]) 
                cout << k << " -> ";
            cout << "\\" << endl;
        }
        if(i != N - 1)
            cout << endl;

        delete[] tabela_hash;

    }

    return 0;
}