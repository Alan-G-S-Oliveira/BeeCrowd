#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main() {

    string palavra, atual, copia;

    while(cin >> palavra) {
        cin.ignore();

        vector<string> saida = {palavra};
        set<string> aux = {palavra};

        unsigned int i = 0;
        while(i < saida.size()) {
            atual = saida[i];

            for(unsigned int j = 0; j < atual.size(); j++) {
                copia = atual;
                copia.erase(j, 1);

                if(copia != "" && !aux.count(copia)) {
                    aux.insert(copia);
                    saida.push_back(copia);
                }
            }
            i++;
        }

        sort(saida.begin(), saida.end());

        for(string i: saida)
            cout << i << endl;
        cout << endl;

    }

    return 0;
}