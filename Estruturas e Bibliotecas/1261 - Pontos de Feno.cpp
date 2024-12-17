#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {

    map<string, int> cargos; 

    int M, N;
    string cargo, descricao, aux;
    int salario;

    cin >> M >> N;
    for(int i = 0; i < M; i++) {
        cin >> cargo >> salario;
        cargos[cargo] = salario;
    }

    for(int i = 0; i < N; i++) {

        int salario_total = 0;

        while(true) {
            getline(cin, descricao);

            if(descricao == ".")
                break;

            istringstream ss(descricao);
            while(ss >> aux) {
                if(cargos.count(aux))
                    salario_total += cargos[aux];
            }
        }
        cout << salario_total << endl;
    }

    return 0;
}