#include <iostream>

using namespace std;

int main() {

    int n;

    while(cin >> n) {
        cin.ignore();

        int candidato = 1;
        int cont = 1;

        while(candidato % n != 0) {
            candidato = (candidato % n) * 10 + 1;
            cont++;
        }
        
        cout << cont << endl;
    }

    return 0;
}