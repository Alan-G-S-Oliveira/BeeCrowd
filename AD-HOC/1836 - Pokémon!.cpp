#include <iostream>
#include <cmath>

using namespace std;

inline int S(int B, int IV, int EV, int L) {
    return (((IV + B + sqrt(EV) / 8) * L) / 50) + 5;
}

inline int HP(int B, int IV, int EV, int L) {
    return (((IV + B + 50 + sqrt(EV) / 8) * L) / 50) + 10;
}

int main() {

    int T, L, B, I, E;
    string P, saida;

    cin >> T;

    for(int i = 1; i <= T; i++) {
        cin >> P >> L;
        cin.ignore();
        
        saida = "Caso #" + to_string(i) + ": " + P + " nivel " + to_string(L);
        
        cin >> B >> I >> E;
        saida += "\nHP: " + to_string(HP(B, I, E, L));

        cin >> B >> I >> E;
        saida += "\nAT: " + to_string(S(B, I, E, L));

        cin >> B >> I >> E;
        saida += "\nDF: " + to_string(S(B, I, E, L));

        cin >> B >> I >> E;
        saida += "\nSP: " + to_string(S(B, I, E, L));

        cout << saida << endl;
    }

    return 0;
}