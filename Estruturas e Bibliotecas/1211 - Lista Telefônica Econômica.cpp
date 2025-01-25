#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N, total, T;
    string S, X;

    while(cin >> N) {
        vector<string> palavras(N);

        for(int i = 0; i < N; i++)
            cin >> palavras[i];

        sort(palavras.begin(), palavras.end());

        total = 0;
        S = palavras[0];
        T = S.size();

        for(int i = 1; i < N; i++) {
            X = palavras[i];
            for(int j = 0; j < T; j++) {
                if(S[j] == X[j])
                    total++;
                else
                    break;
            }
            S = X;
        }

        cout << total << endl;
    }

    return 0;
}