#include <iostream>

using namespace std;

int main() {

    int W1, W2, R, total = 0;
    double media, soma = 0.0;
    
    while(cin >> W1 >> W2 >> R) {
        cin.ignore();

        if(W1 == W2 && W2 == R && R == 0)
            break;

        media = (W1 * (1 + R / 30.0) + W2 * (1 + R / 30.0)) / 2.0;
        soma += media;
        total += 1;

        if(media < 13)
            cout << "Nao vai da nao" << endl;
        else if(media < 14)
            cout << "E 13" << endl;
        else if(media < 40)
            cout << "Bora, hora do show! BIIR!" << endl;
        else if(media < 60)
            cout << "Ta saindo da jaula o monstro!" << endl;
        else
            cout << "AQUI E BODYBUILDER!!" << endl;
    }

    if(soma / total > 40)
        cout << "\nAqui nois constroi fibra rapaz! Nao e agua com musculo!" << endl;

    return 0;
}