#include <iostream>

using namespace std;

int main() {

    int n, *vetor1, *vetor2;
    bool permutacao;

    while(cin >> n) {
        if(n == 0)
            break;

        vetor1 = new int[n];
        vetor2 = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> vetor1[i];
            vetor2[vetor1[i] - 1] = i + 1;
        }

        permutacao = true;
        for(int i = 0; i < n; i++) {
            if(vetor1[i] != vetor2[i]) {
                permutacao = false;
                break;
            }
        }

        cout << (permutacao? "ambiguous": "not ambiguous") << endl;

        delete[] vetor1;
        delete[] vetor2;

    }

    return 0;
}