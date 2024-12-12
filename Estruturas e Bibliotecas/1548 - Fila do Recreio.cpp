#include <iostream>
#include <algorithm>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    cin >> N;

    for(int i = 0; i < N; i++) {

        cin >> M;
        cin.ignore();
        vector<int> vetor(M);
        string aux, x;
        getline(cin, aux);
        istringstream ss(aux);
        int j = 0;
        while(ss >> x) {
            vetor[j] = stoi(x);
            j++;
        }
        
        vector<int> vetor_aux = vetor;
        sort(vetor_aux.begin(), vetor_aux.end(), greater<int>());

        int cont = 0;
        for(int j = 0; j < M; j++) {
            if(vetor[j] == vetor_aux[j])
                cont++;
        }
        cout << cont << endl;

    }

    return 0;
}