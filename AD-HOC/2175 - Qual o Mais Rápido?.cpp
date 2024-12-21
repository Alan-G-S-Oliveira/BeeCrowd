#include <iostream>

using namespace std;

int main() {

    double O, B, I;
    cin >> O >> B >> I;

    if(O < B && O < I)
        cout << "Otavio" << endl;
    else if(B < O && B < I)
        cout << "Bruno" << endl;
    else if(I < O && I < B)
        cout << "Ian" << endl;
    else
        cout << "Empate" << endl;

    return 0;
}