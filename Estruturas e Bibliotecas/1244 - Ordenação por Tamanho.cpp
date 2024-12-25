#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

bool ordena(string X, string Y) {
    return X.size() > Y.size();
}


int main() {

    int N;
    string aux, palavra;
    
    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {
        vector<string> frase;
        getline(cin, aux);
        istringstream ss(aux);
        while(ss >> palavra)
            frase.push_back(palavra);
        stable_sort(frase.begin(), frase.end(), ordena);
        
        bool inicio = true;
        for(string &j: frase) {
            if(inicio)
                inicio = false;
            else
                cout << " ";
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
