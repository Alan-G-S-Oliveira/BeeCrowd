#include <iostream>
#include <string>

using namespace std;

int main() {

    bool espaco = false;
    int cont = 1;
    string A, S;

    while(cin >> A && A != "0") {
        cin >> S;

        if(espaco)
            cout << endl;
        espaco = true;
        
        cout << "Instancia " << cont++ << endl;
        cout << (S.find(A) != string::npos? "verdadeira": "falsa") << endl;
    }

    return 0;
}