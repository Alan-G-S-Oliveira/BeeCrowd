#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct aluno {
    string nome;
    char direcao;
    int distancia;
};

bool comparar(aluno a1, aluno a2) {
    if(a1.distancia != a2.distancia)
        return a1.distancia < a2.distancia;
    if(a1.direcao != a2.direcao)
        return a1.direcao < a2.direcao;
    
    return a1.nome < a2.nome;
} 

int main() {

    int Q;

    while(cin >> Q && Q != 0) {
        vector<aluno> turma(Q);

        while(Q--)
            cin >> turma[Q].nome >> turma[Q].direcao >> turma[Q].distancia;

        sort(turma.begin(), turma.end(), comparar);

        for(aluno a: turma)
            cout << a.nome << endl;
    }

    return 0;
}