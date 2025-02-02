#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {

    int N;
    string aux;
    set<int> tamanhos;
    map<int, queue<string>> nomes;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> aux;

        nomes[aux.size()].push(aux);
        tamanhos.insert(aux.size());
    }

    while(N--) {
        bool imprime = false;
        bool espaco = false;
        for(int j: tamanhos) {
            if(!nomes[j].empty()) {
                if(espaco)
                    cout << ", ";
                espaco = true;

                cout << nomes[j].front();
                nomes[j].pop();
                imprime = true;
            }
        }
        if(imprime)
            cout << endl;
    }

    return 0;
}