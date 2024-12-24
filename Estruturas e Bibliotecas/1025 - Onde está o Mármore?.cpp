#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int busca_linear(vector<int> vetor, int x) {
    for(int i = 0; i < vetor.size(); i++) {
        if(vetor[i] == x)
            return i;
    }
    return -1;
}

int main() {

    int N, Q, X, cont = 1;

    while(true) {
        cin >> N >> Q;
        cin.ignore();
        if(N == Q && Q == 0)
            break;

        vector<int> marbles;
        for(int i = 0; i < N; i++) {
            cin >> X;
            cin.ignore();
            marbles.push_back(X);
        }
        sort(marbles.begin(), marbles.end());

        cout << "CASE# " << cont << ":" << endl;
        for(int i = 0; i < Q; i++) {
            cin >> X;
            cin.ignore();
            int aux = busca_linear(marbles, X);
            if(aux != -1)
                cout << X << " found at " << aux + 1 << endl;
            else
                cout << X << " not found" << endl;
        }
        cont++;
    }

    return 0;
}