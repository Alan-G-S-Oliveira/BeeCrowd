#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct ponto {
    int inicio;
    int fim;
};

bool compara(ponto x, ponto y) {
    if(x.inicio != y.inicio)
        return x.inicio < y.inicio;
    return x.fim > y.fim;
}

int main() {

    int N, A, B;
    int qtd;

    while(cin >> N) {

        vector<ponto> P(N);
        for(int i = 0; i < N; i++) 
            cin >> P[i].inicio >> P[i].fim;

        sort(P.begin(), P.end(), compara);

        qtd = 1;
        A = P[0].inicio;
        B = P[0].fim;
        for(int i = 1; i < N; i++) {
            A = max(A, P[i].inicio);
            B = min(B, P[i].fim);

            if(A > B) {
                A = P[i].inicio;
                B = P[i].fim;
                qtd++;
            }
        }

        cout << qtd << endl;
    }

    return 0;
}