#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N;
    cin >> N;
    for(int i = 0; i < N; i++) {
        int M;
        cin >> M;
        vector<char> letras(M);
        string aux;
        cin >> aux;
        for(int j = 0; j < M; j++) 
            letras[j] = aux[j];

        sort(letras.begin(), letras.end());
        int diferenca = 0;

        for(int j = 0; j < M; j++) {
            if(letras[j] != aux[j])
                diferenca++;
        }

        if(diferenca == 2)
            cout << "There are the chance." << endl;
        else
            cout << "There aren't the chance." << endl;

    }

    return 0;
}