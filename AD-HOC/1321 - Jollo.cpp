#include <iostream>

using namespace std;

int main() {

    int A, B, C, X, Y;
    string saida = "";

    while(cin >> A >> B >> C >> X >> Y && (A != 0 || B != 0 || C != 0 || X != 0 || Y != 0)) {
        int Z = 1;
        bool achou = false;

        while(Z <= 52) {
            if(Z == A || Z == B || Z == C || Z == X || Z == Y) {
                Z++;
                continue;
            }
            
            int vitorias = 0;
            vitorias += ((X > A) + (Y > B) + (Z > C)) >= 2;
            vitorias += ((X > A) + (Y > C) + (Z > B)) >= 2;
            vitorias += ((X > B) + (Y > A) + (Z > C)) >= 2;
            vitorias += ((X > B) + (Y > C) + (Z > A)) >= 2;
            vitorias += ((X > C) + (Y > A) + (Z > B)) >= 2;
            vitorias += ((X > C) + (Y > B) + (Z > A)) >= 2;

            if(vitorias == 6) {
                achou = true;
                break;
            }

            Z++;
        }

        saida += (achou? to_string(Z): "-1") + "\n";
    }

    cout << saida;

    return 0;
}