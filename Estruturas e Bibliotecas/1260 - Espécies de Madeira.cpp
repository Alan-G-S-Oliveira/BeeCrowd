#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {

    int N;
    double total;
    bool espaco = false;
    string aux;

    cout.precision(4);
    cout << fixed;

    cin >> N;
    cin.ignore();
    cin.ignore();

    while(N--) {
        
        map<string, int> proporcao;
        vector<string> arvores;

        if(espaco)
            cout << endl;
        espaco = true;

        total = 0;
        while(getline(cin, aux)) {

            if(aux.size() == 0)
                break;

            if(proporcao.count(aux) != 0)
                proporcao[aux]++;
            else {
                proporcao[aux] = 1;
                arvores.push_back(aux);
            }
            total++;
        }

        sort(arvores.begin(), arvores.end());
        
        for(string s: arvores)
            cout << s << ' ' << proporcao[s] / static_cast<double>(total) * 100 << endl;

    }

    return 0;
}