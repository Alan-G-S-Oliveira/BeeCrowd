#include <iostream>
#include <map>

using namespace std;

bool vogal(char x) {
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u';
}

string editar_string(string entrada) {
    string saida = entrada;
    int tam = saida.size();
    if(saida[tam - 1] == 'y' && !vogal(saida[tam - 2])){
        saida.erase(tam - 1);
        saida.append("ies");
    } else if(saida[tam - 1] == 'x' || saida[tam - 1] == 's' || saida[tam - 1] == 'o')
        saida.append("es");
    else if(saida[tam - 1] == 'h' && (saida[tam - 2] == 's' || saida[tam - 2] == 'c'))
        saida.append("es");
    else
        saida.push_back('s');

    return saida;
        
}

int main() {

    int L, N;
    map<string, string> irregular;
    string key, value, aux;

    cin >> L >> N;
    for(int i = 0; i < L; i++) {
        cin >> key >> value;
        irregular[key] = value;
    }
    
    for(int i = 0; i < N; i++) {
        cin >> aux;
        if(irregular.count(aux))
            cout << irregular[aux] << endl;
        else {
            cout << editar_string(aux) << endl;
        }
    }

    return 0;
}