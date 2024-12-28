#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct camisa {

    char tamanho;
    string dono;
    string cor;

};

bool compara(camisa x, camisa y) {
    if(x.cor != y.cor)
        return x.cor < y.cor;
    else if(x.tamanho != y.tamanho)
        return x.tamanho > y.tamanho;
    else
        return x.dono < y.dono;
}

int main() {

    int N;
    bool espaco = false;

    while(true) {
        cin >> N;
        cin.ignore();
        if(N == 0)
            break;

        if(espaco)
            cout << endl;
        else
            espaco = true;

        vector<camisa> camisas(N);

        for(int i = 0; i < N; i++) {
            camisa aux;
            getline(cin, aux.dono);
            cin >> aux.cor >> aux.tamanho;
            cin.ignore();

            camisas[i] = aux;
        }
        sort(camisas.begin(), camisas.end(), compara);

        for(camisa i: camisas)
            cout << i.cor << " " << i.tamanho << " " << i.dono << endl;

    }

    return 0;
}
