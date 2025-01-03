#include <iostream>
#include <map>

using namespace std;

int main() {

    int N, M;
    string aux1, aux2;
    map<string, string> saudacao;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> aux1;
        cin.ignore();
        getline(cin, aux2);

        saudacao[aux1] = aux2;
    }

    cin >> M;
    cin.ignore();
    for(int i = 0; i < M; i++) {
        getline(cin, aux1);
        cin >> aux2;
        cin.ignore();

        cout << aux1 << "\n" << saudacao[aux2] << "\n" << endl;
    }

    return 0;
}