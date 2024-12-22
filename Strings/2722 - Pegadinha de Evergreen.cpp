#include <iostream>

using namespace std;

int main() {

    int N;
    string nome, sobrenome;

    cin >> N;
    cin.ignore();
    for(int i = 0; i < N; i++) {
        getline(cin, nome);
        getline(cin, sobrenome);

        unsigned long int cont_1 = 0, cont_2 = 0;
        while(cont_1 < nome.size() || cont_2 < sobrenome.size()) {
            for(int i= 0; i < 2 && cont_1 < nome.size(); i++) {
                cout << nome[cont_1];
                cont_1++;
            }

            for(int i= 0; i < 2 && cont_2 < sobrenome.size(); i++) {
                cout << sobrenome[cont_2];
                cont_2++;
            }
        }
        cout << endl;

    }

    return 0;
}