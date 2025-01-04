#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<char> alfabeto(26);

    int N, aux, cont = 1;

    while(cin >> N) {
        cin.ignore();
        if(N == 0)
            break;

        for(int i = 0; i < 26; i++)
            alfabeto[i] = 'A' + i;

        cout << "Instancia " << cont << endl;
        string saida = "";
        for(int i = 0; i < N; i++) {
            cin >> aux;

            char temp = alfabeto[aux - 1];
            saida.push_back(temp);

            alfabeto.erase(alfabeto.begin() + aux - 1);
            alfabeto.insert(alfabeto.begin(), temp);

        }

        cout << saida << "\n" << endl;
        cont++;
    }

    return 0;
}