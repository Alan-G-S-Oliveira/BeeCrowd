#include <iostream>
#include <vector>

using namespace std;

int main() {

    string N;

    while(cin >> N) {
        vector<int> frequencia(10);

        for(char c: N)
            frequencia[c - '0']++;

        int maior = frequencia[0];
        int indice = 0;
        for(int i = 1; i < 10; i++) {
            if(frequencia[i] >= maior) {
                maior = frequencia[i];
                indice = i;
            }
        }
        cout << indice << endl;
    }

    return 0;
}