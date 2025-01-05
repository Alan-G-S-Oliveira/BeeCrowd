#include <iostream>

using namespace std;

int main() {

    double x, y;

    cin >> x >> y;

    cout.precision(5);
    cout << fixed;
    cout << "Concluimos que, dado o limite da entrada, a resposta seria:  y = f(x) = " << (x * y) / 2 << "." << endl;

    return 0;
}