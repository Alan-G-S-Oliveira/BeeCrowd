#include <iostream>
#include <sstream>
#include <vector>
#include <tuple>
#include <stack>
#include <map>

using namespace std;

int busca_em_profundidade(vector<vector<tuple<int, int, bool>>> &arvore, pair<int, int> &n) {
    int T = arvore.size();
    stack<pair<int, int>> pilha;

    vector<bool> visitados(T, false);
    visitados[n.first] = true;
    pilha.push(n);

    int saida = n.second;

    while(!pilha.empty()) {
        pair<int, int> X = pilha.top();
        int aux = X.first;

        bool ok = false;
        for(auto &a: arvore[aux]) {
            if(!visitados[get<0>(a)]) {

                pair<int, int> aux = {get<0>(a), get<1>(a)};
                pilha.push(aux);
                visitados[get<0>(a)] = true;

                if(get<2>(a))
                    saida += get<1>(a);
                else
                    saida += 2;

                ok = true;
                break;
            }
        }

        if(ok)
            saida++;
        else
            pilha.pop();
    }

    return saida;
}

int main() {

    int N, iterador = 1;
    string S;

    vector<vector<tuple<int, int, bool>>> arvore(1);
    map<string, pair<int, int>> mapa;

    mapa["raiz"] = {0, 0};

    cin >> N;
    while(N--) {
        cin >> S;
        istringstream ss(S);

        vector<tuple<int, int, bool>> temp;

        string aux_1, aux_2;
        getline(ss, aux_1, '/');

        if(mapa.find(aux_1) == mapa.end()) {
            mapa[aux_1] = {iterador, aux_1.size()};
            arvore.push_back(temp);
            iterador++;
        }

        arvore[0].push_back(make_tuple(mapa[aux_1].first, aux_1.size(), true));
        arvore[mapa[aux_1].first].push_back(make_tuple(0, 0, false));

        while(getline(ss, aux_2, '/')) {
            vector<tuple<int, int, bool>> temp;

            if(mapa.find(aux_2) == mapa.end()) {
                mapa[aux_2] = {iterador, aux_2.size()};
                arvore.push_back(temp);
                iterador++;
            }

            arvore[0].push_back(make_tuple(mapa[aux_2].first, aux_2.size(), true));
            arvore[mapa[aux_2].first].push_back(make_tuple(mapa[aux_1].first, aux_1.size(), false));

            aux_1 = aux_2;
        }

    }

    string a = "Rock/AngraCarryOn.mp3MPB/Caetano/Sampa.mp3MPB/Cartola/Alvorada.mp3";
    cout << a.size() << endl;
    cout << busca_em_profundidade(arvore, mapa["raiz"]) << endl;

    return 0;
}