#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

struct times {
    string nome;
    int vitorias = 0;
    int pontos = 0;
    int gols = 0;
};

bool compara(times x, times y) {
    if(x.pontos != y.pontos)
        return x.pontos > y.pontos;
    if(x.vitorias != y.vitorias)
        return x.vitorias > y.vitorias;

    return x.gols > y.gols;
}

int main() {

    int T, N, M;
    int gols1, gols2;
    string time1, time2;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> M;

        vector<times> equipes(N);
        unordered_map<string, int> map_aux;

        for(int i = 0; i < N; i++) {
            cin >> time1;
            equipes[i].nome = time1;
            map_aux[time1] = i;
        }

        for(int i = 0; i < M; i++) {
            cin >> gols1 >> time1 >> gols2 >> time2;
            if(gols1 > gols2) {
                equipes[map_aux[time1]].pontos += 3;
                equipes[map_aux[time1]].vitorias++;
            } else if(gols1 < gols2) {
                equipes[map_aux[time2]].pontos += 3;
                equipes[map_aux[time2]].vitorias++;
            } else {
                equipes[map_aux[time1]].pontos++;
                equipes[map_aux[time2]].pontos++;
            }

            equipes[map_aux[time1]].gols += gols1;
            equipes[map_aux[time2]].gols+= gols2;
        }
        stable_sort(equipes.begin(), equipes.end(), compara);
        for(times t: equipes)
            cout << t.nome << endl;
    }

    return 0;
}