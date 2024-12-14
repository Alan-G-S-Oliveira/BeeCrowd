#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    string numeros, aux;
    int N;

    while(cin >> N) {
        cin.ignore();

        vector<int> M(N);

        getline(cin, numeros);;

        istringstream ss(numeros);
        int cont = 0;
        while(ss >> aux) {
            M[cont] = stoi(aux);
            cont++;
        }

        sort(M.begin(), M.end());
        cout << N / 2 << " " << M[N / 2] - M[N / 2 - 1] << endl;

    }

    return 0;
}