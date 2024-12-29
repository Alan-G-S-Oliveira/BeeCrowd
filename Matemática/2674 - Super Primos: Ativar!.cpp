#include <iostream>
#include <cmath>

using namespace std;

bool eh_primo(int n) {
    if(n < 2)
        return false;

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main() {

    string num_string;

    while(cin >> num_string) {
        cin.ignore();

        if(eh_primo(stoi(num_string))) {
            bool super = true;
            for(char i: num_string) {
                if(i != '2' && i != '3' && i != '5' && i != '7') {
                    super = false;
                    break;
                }
            }

            if(super)
                cout << "Super" << endl;
            else
                cout << "Primo" << endl;
        } else
            cout << "Nada" << endl;
    }


    return 0;
}