#include <iostream>

using namespace std;

struct jogador {
    int id;
    int posicao;
    bool armadilha = false;
};

int main() {

    int P, S, T1, T2, T3, N, D1, D2;
    jogador *players;
    int vencedor;

    while(cin >> P >> S && P != 0 && S != 0) {
        cin >> T1 >> T2 >> T3;
        cin >> N;

        vencedor = -1;
        players = new jogador[P];
        for(int i = 0; i < P; i++) {
            players[i].id = i + 1;
            players[i].posicao = 0;
        }

        int atual = 0;
        for(int i = 0; i < N; i++) {
            cin >> D1 >> D2;
            
            while(players[atual].armadilha) {
                players[atual].armadilha = false;
                atual = (atual + 1) % P;
            }
            players[atual].posicao += (D1 + D2);

            if(players[atual].posicao == T1 || players[atual].posicao == T2 || players[atual].posicao == T3)
                players[atual].armadilha = true;
            if(players[atual].posicao > P)
                vencedor = players[atual].id;
            
            atual = (atual + 1) % P;
        }

        cout << vencedor << endl;

        delete[] players;
    }

    return 0;
}