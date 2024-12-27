#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N, G, S, R;

    while(cin >> N >> G) {
        cin.ignore();

        int pontos = 0;
        vector<int> saldo_gols;
        for(int i = 0; i < N; i++) {
            cin >> S >> R;
            if(S <= R)
                saldo_gols.push_back(R - S);
            else
                pontos += 3;
        }
        sort(saldo_gols.begin(), saldo_gols.end());

        for(unsigned int i = 0; i < saldo_gols.size(); i++) {
            if(G >= saldo_gols[i] + 1) {
                pontos += 3;
                G -= (saldo_gols[i] + 1);
            } else if(G >= saldo_gols[i]) {
                pontos += 1;
                G -= saldo_gols[i];
            } else 
                G = 0;
        }

        cout << pontos << endl;
    }

    return 0;
}