#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {

    unordered_map<string, int> variaveis;

    string comando, aux, atual;
    while(getline(cin, comando)) {
        
        istringstream ss(comando);
        vector<string> comandos;

        while(ss >> aux)
            comandos.push_back(aux);

        if(comandos.size() == 3)
            variaveis[comandos[0]] = stoi(comandos[2]);
        else
            variaveis[comandos[0]] = variaveis[comandos[2]] + variaveis[comandos[4]];
        atual = comandos[0];
    }

    cout << variaveis[atual] << endl;

    return 0;
}