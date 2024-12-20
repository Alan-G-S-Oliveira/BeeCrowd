#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int A, D;
    string aux, num1, num2;

    while(true) {
        cin >> A >> D;
        cin.ignore();

        if(A == D && D == 0)   
            break;

        getline(cin, aux);
        istringstream s1(aux);
        s1 >> num1;
        int menor1 = stoi(num1);
        while(s1 >> num1) {
            if(stoi(num1) < menor1)
                menor1 = stoi(num1);
        }

        getline(cin, aux);
        istringstream s2(aux);
        s2 >> num1,
        s2 >> num2;

        int menor2, menor3;
        menor2 = min(stoi(num1), stoi(num2));
        menor3 = max(stoi(num1), stoi(num2));
        while(s2 >> num1) {
            if(stoi(num1) < menor2) {
                menor3 = menor2;
                menor2 = stoi(num1);
            } else if(stoi(num1) < menor3)
                menor3 = stoi(num1);
        }

        if(menor1 >= menor3)
            cout << 'N' << endl;
        else
            cout << 'Y' << endl;

    }

    return 0;
}