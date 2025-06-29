#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {

    int T;
    string S;

    while(cin >> T) {
        for(int i = 0; i < 2 * T - 1; i++) {
            cin >> S;
            if(S.size() != 1) {
                stringstream ss(S);
                string aux1, aux2;

                getline(ss, aux1, 'x');
                getline(ss, aux2, 'x');

                cout << stoi(aux1) * stoi(aux2) << 'x';
                if(aux2 != "2")
                    cout << stoi(aux2) - 1;
            } else 
                cout << " + ";
        }
        cout << endl;
    }

}