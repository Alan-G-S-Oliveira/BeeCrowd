#include <iostream>
#include <cmath>

using namespace std;

inline string completa(string S) {
    while(S.size() < 4)
        S = "0" + S;

    return S;
}

inline bool compara(string &S1, string &S2, int n) {
    int tam1 = S1.size();
    int tam2 = S2.size();

    for(int i = 1; i <= n; i++) {
        if(S1[tam1 - i] != S2[tam2 - i])
            return false;
    }

    return true;
}

inline int converter(string &S) {
    string saida = "";
    saida.push_back(S[S.size() - 2]);
    saida.push_back(S[S.size() - 1]);

    return stoi(saida);
}

int main() {
    double V, saida;
    string N, M;

    cout.precision(2);
    cout << fixed;

    while(cin >> V >> N >> M && (V != 0.0 ||  N != "0" || M != "0")) {
        N = completa(N);
        M = completa(M);

        if(compara(N, M, 4))
            saida = V * 3000;
        else if(compara(N, M, 3))
            saida = V * 500;
        else if(compara(N, M, 2))
            saida = V * 50;
        else {
            int Ni = converter(N), Mi = converter(M);
            if(Ni != 0 && Mi != 0) {
                if(ceil(Ni / 4.0) == ceil(Mi / 4.0))
                    saida = 16 * V;
                else
                    saida = 0;
            } else if((Ni == 0 && Mi >= 97) || (Mi == 0 && Ni >= 97))
                saida = 16 * V;
            else
                saida = 0;;
        }

        cout << saida << endl;
    }

    return 0;
}