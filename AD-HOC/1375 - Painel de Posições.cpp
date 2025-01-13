#include <iostream>

using namespace std;

struct carro {
    int id;
    int ultrapassagem;
};

int main() {

    int N;
    carro *painel;
    bool valido;

    while(cin >> N) {
        if(N == 0)
            break;

        valido = true;
        painel = new carro[N];

        int temp1, temp2;
        for(int i = 0; i < N; i++) {
            cin >> temp1 >> temp2;
            painel[i].id = temp1;
            painel[i].ultrapassagem = temp2;

            if(temp2 < -(N - 1) || temp2 > (N - 1))
                valido = false;
        }

        if(valido) {
            for(int i = 0; i < N; i++) {
                while(painel[i].ultrapassagem != 0) {
                    int aux = painel[i].ultrapassagem;

                    if(painel[i + aux].ultrapassagem == 0) {
                        valido = false;
                        i = N;
                        break;
                    }

                    int aux_1 = painel[i].id;

                    painel[i].id = painel[i + aux].id;
                    painel[i].ultrapassagem += painel[i + aux].ultrapassagem;

                    painel[i + aux].id = aux_1;
                    painel[i + aux].ultrapassagem = 0;
                }
            }
        }

        if(valido) {
            bool espaco = false;
            for(int i = 0; i < N; i++) {
                if(espaco)
                    cout << ' ';
                else
                    espaco = true;
                cout << painel[i].id;
            }
            cout << endl;
        } else
            cout << -1 << endl;

        delete[] painel;
    }

    return 0;
}