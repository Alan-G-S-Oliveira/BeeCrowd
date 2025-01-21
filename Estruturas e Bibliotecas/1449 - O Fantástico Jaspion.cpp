#include <iostream>
#include <sstream>
#include <map>

using namespace std;

int main() {

    int T, N, M;
    string aux1, aux2;

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> N >> M;
        cin.ignore();

        map<string, string> dicionario;
        for(int i = 0; i < N; i++) {
            getline(cin, aux1);
            getline(cin, aux2);

            dicionario[aux1] = aux2;
        }

        for(int i = 0; i < M; i++) {
            getline(cin, aux1);

            istringstream ss(aux1);

            ss >> aux2;

            cout << (dicionario.count(aux2) != 0? dicionario[aux2]: aux2);
            while(ss >> aux2)
                cout << ' ' << (dicionario.count(aux2) != 0? dicionario[aux2]: aux2);
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}