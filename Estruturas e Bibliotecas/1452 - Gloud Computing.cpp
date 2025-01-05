#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    int N, M, Q;
    string aux;

    while(cin >> N >> M) {
        cin.ignore();

        if(N == M && M == 0)
            break;

        vector<set<string>> provedores;

        for(int i = 0; i < N; i++) {
            cin >> Q;
            set<string> temp;
            for(int j = 0; j < Q; j++) {
                cin >> aux;
                temp.insert(aux);
            }
            provedores.push_back(temp);
        }

        int qtd = 0;
        for(int i = 0; i < M; i++) {
            cin >> Q;
            vector<string> clientes;

            for(int j = 0; j < Q; j++) {
                cin >> aux;
                clientes.push_back(aux);
            }

            for(int j = 0; j < N; j++) {
                for(string s: clientes) {
                    if(provedores[j].count(s) != 0) {
                        qtd++;
                        break;
                    }
                }
            }
        }

        cout << qtd << endl;
    }

    return 0;
}