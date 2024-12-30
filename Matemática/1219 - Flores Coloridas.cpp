#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int a, b, c;

    while(cin >> a >> b >> c) {
        cin.ignore();
        double p = (a + b + c) / 2.0;

        double triangulo = sqrt(p * (p - a) * (p - b) * (p - c));
        double circulo_maior = M_PI * pow((a * b * c) / (4 * triangulo), 2);
        double circulo_menor = M_PI * pow(triangulo / p, 2);

        cout.precision(4);
        cout << fixed;
        cout << circulo_maior - triangulo << " " << triangulo - circulo_menor << " " << circulo_menor << endl;
    }

    return 0;
}