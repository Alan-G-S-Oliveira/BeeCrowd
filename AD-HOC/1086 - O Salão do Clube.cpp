#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int qtd_tabuas(vector<int> &tabuas, int total, int comprimento, int n) {
    int saida1 = 0, saida2 = 0;
    int ini = 0, fim = n - 1;

    while(ini <= fim) {
        if(tabuas[fim] >= comprimento) {
            if(tabuas[fim] == comprimento) {
                saida1++;
                saida2++;
            }
            fim--;
        } else {
            if(ini != fim) {
                if(tabuas[ini] + tabuas[fim] == comprimento) {
                    saida1++;
                    saida2 += 2;
                    ini++;
                    fim--;
                } else if(tabuas[ini] + tabuas[fim] > comprimento)
                    fim--;
                else
                    ini++;
            } else
                break;
        }

        if(saida1 == total)
            break;
    }

    if(saida1 >= total)
        return saida2;
    return -1;
}

int main() {

    int M, N, L, K;

    while(cin >> M >> N) {
        cin.ignore();
        if(M == N && N == 0)
            break;

        cin >> L;
        cin >> K;
        cin.ignore();

        vector<int> tabuas(K);
        for(int i = 0; i < K; i++)
            cin >> tabuas[i];

        sort(tabuas.begin(), tabuas.end());

        int X = -1, Y = -1;

        if((N * 100) % L == 0)
            X = qtd_tabuas(tabuas, (N * 100) / L, M, K);
        if((M * 100) % L == 0)
            Y = qtd_tabuas(tabuas, (M * 100) / L, N, K);

        if(X == -1 && Y == -1)
            cout << "impossivel" << endl;
        else {
            if(X != -1 && Y != -1)
                cout << min(X, Y) << endl;
            else
                cout << max(X, Y) << endl;
        }
    }

    return 0;
}