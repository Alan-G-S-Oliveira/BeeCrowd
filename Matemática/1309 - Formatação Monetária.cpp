#include <iostream>

using namespace std;

int main() {

    string dolar, centavos;

    while(cin >> dolar) {
        cin >> centavos;
        cin.ignore();

        unsigned int virgula = dolar.size() % 3;
        cout << '$';
        for(unsigned int i = 0; i < dolar.size(); i++) {

            if(i == virgula) {
                if(i != 0)
                    cout << ',';
                virgula += 3;
            }
            cout << dolar[i];

        }
        cout << '.';
        cout << ((centavos.size() == 2)? centavos: "0" + centavos) << endl;
    }

    return 0;
}