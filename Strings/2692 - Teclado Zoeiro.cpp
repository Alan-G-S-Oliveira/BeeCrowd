#include <iostream>
#include <map>

using namespace std;

int main() {

    int N, M;
    char E, S;
    string entrada, saida;

    map<char, char> mapa;

    cin >> N >> M;
    for(int i = 0; i < N; i++) {

        cin >> E >> S;
        mapa[E] = S;
        mapa[S] = E;

    }

    cin.ignore();
    while(getline(cin, entrada)) {

        saida = "";
        for(char c: entrada) {
            if(mapa.find(c) != mapa.end())
                saida.push_back(mapa[c]);
            else
                saida.push_back(c);
        }
        cout << saida << endl;
    }

    return 0;
}