#include <iostream>
#include <vector>

using namespace std;

int main() {

    int A, V, X, Y;
    int cont = 1;

    while(cin >> A >> V) {
        cin.ignore();
        if(A == 0)
            break;

        vector<int> avioes(A, 0);

        for(int i = 0; i < V; i++) {
            cin >> X >> Y;
            cin.ignore();

            avioes[X - 1]++;
            avioes[Y - 1]++;
        }

        int maior = avioes[0];
        for(int i = 1; i < A; i++) {
            if(avioes[i] > maior)
                maior = avioes[i];
        }

        cout << "Teste " << cont << endl;
        for(int i = 0; i < A; i++) {
            if(avioes[i] == maior) 
                cout << i + 1 << ' ';
        }
        cout << "\n\n";
        cont++;
    }

    return 0;
}