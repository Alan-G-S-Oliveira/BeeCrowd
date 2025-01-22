#include <iostream>

using namespace std;

int main() {

    int Am, Rm, Em;
    int Av, Rv, Ev;
    int tempM, tempV;
    string S;

    cin >> Am >> Rm >> Em;
    cin >> Av >> Rv >> Ev;
    cin.ignore();

    getline(cin, S);

    tempM = Am * 2 + Rm + S.size() * Em;
    tempV = Av * 2 + Rv + S.size() * Ev;

    if(tempM < tempV)
        cout << "Matheus" << endl;
    else if(tempM > tempV)
        cout << "Vinicius" << endl;
    else
        cout << "Empate" << endl;

    return 0;
}