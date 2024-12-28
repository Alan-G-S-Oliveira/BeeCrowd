#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {

    int N;
    string aux, produto;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {

        set<string> conjunto;
        vector<string> lista;
        getline(cin, aux);
        istringstream ss(aux);

        while(ss >> produto) {
            if(!conjunto.count(produto)) {
                conjunto.insert(produto);
                lista.push_back(produto);
            }
        }

        sort(lista.begin(), lista.end());

        bool espaco = false;
        for(string i: lista) {
            if(espaco)
                cout << " ";
            else
                espaco = true;
            cout << i;
        }
        cout << endl;
    }

    return 0;
}