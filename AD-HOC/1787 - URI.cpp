#include <iostream>

using namespace std;

int potencia_de_dois(int numero) {

    int resto = 0;

    while(numero != 1) {
        resto = numero % 2;
        numero /= 2;

        if(resto == 1)
            return 0;
    }
    return 1;
}

int main() {

    int N;
    int U, R, I;

    while(cin >> N) {
        if(N == 0)
            break;

        int Pu = 0, Pr = 0, Pi = 0;

        for(int i = 0; i < N; i++) {
            cin >> U >> R >> I;
            Pu += potencia_de_dois(U);
            Pr += potencia_de_dois(R);
            Pi += potencia_de_dois(I);

            if(U > R && U > I && potencia_de_dois(U) == 1)
                Pu++;
            else if(R > U && R > I && potencia_de_dois(R) == 1)
                Pr++;
            else if(I > U && I > R && potencia_de_dois(I) == 1)
                Pi++;
        }

        if(Pu > Pr && Pu > Pi)
            cout << "Uilton" << endl;
        else if(Pr > Pi && Pr > Pu)
            cout << "Rita" << endl;
        else if(Pi > Pu && Pi > Pr)
            cout << "Ingred" << endl;
        else
            cout << "URI" << endl;
    }

    return 0;
}