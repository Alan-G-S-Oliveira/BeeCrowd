#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N;
    string texto, subtexto, aux;

    cin >> N;
    cin.ignore();

    while(N--) {
        getline(cin, texto);
        cin >> subtexto;
        cin.ignore();

        istringstream ss(texto);

        int comeco = 0;
        bool achou = false;
        while(ss >> aux) {
            if(aux == subtexto) {

                if(achou)
                    cout << ' ';
                achou = true;

                cout << comeco;
            }
            comeco += aux.size() + 1;
        }

        if(!achou)
            cout << -1;
        cout << endl;
    }

    return 0;
}