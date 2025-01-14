#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct jogador {
    int id;
    int pontos;
};

bool compara(jogador x, jogador y) {
    if(x.pontos != y.pontos)
        return x.pontos > y.pontos;
    return x.id < y.id;
}

int main() {

    int N, M, aux;
    vector<jogador> ranking(10000);


    while(cin >> N >> M) {
        if(N == M && M == 0)
            break;

        for(int i = 0; i < 10000; i++) {
            ranking[i].id = i + 1;
            ranking[i].pontos = 0;
        }

        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                cin >> aux;
                ranking[aux - 1].pontos++;
            }
        }

        sort(ranking.begin(), ranking.end(), compara);

        aux = ranking[1].pontos;
        cout << ranking[1].id << ' ';
        for(int i = 2; i < 10000; i++) {
            if(ranking[i].pontos != aux)
                break;
            cout << ranking[i].id << ' ';
        }
        cout << endl;
    }


    return 0;
}