#include <iostream>

using namespace std;

int main() {

    int oitavas[16];
    int quartas[8];
    int semi[4];

    for(int i = 0; i < 16; i++)
        cin >> oitavas[i];

    for(int i = 1; i < 16; i += 2) {
        if(oitavas[i] == 9 || oitavas[i] == 1) {
            if(oitavas[i - 1] == 9 || oitavas[i - 1] == 1) {
                cout << "oitavas" << endl;
                return 0;
            }

            quartas[i / 2] = oitavas[i];
        } else {
            if(oitavas[i - 1] == 9 || oitavas[i - 1] == 1)
                quartas[i / 2] = oitavas[i - 1];
        }
    }

    for(int i = 1; i < 8; i += 2) {
        if(quartas[i] == 9 || quartas[i] == 1) {
            if(quartas[i - 1] == 9 || quartas[i - 1] == 1) {
                cout << "quartas" << endl;
                return 0;
            }

            semi[i / 2] = quartas[i];
        } else {
            if(quartas[i - 1] == 9 || quartas[i - 1] == 1)
                semi[i / 2] = quartas[i - 1];
        }
    }

    for(int i = 1; i < 4; i += 2) {
        if(semi[i] == 9 || semi[i] == 1) {
            if(semi[i - 1] == 9 || semi[i - 1] == 1) {
                cout << "semifinal" << endl;
                return 0;
            }
        }
    }

    cout << "final" << endl;

    return 0;
}