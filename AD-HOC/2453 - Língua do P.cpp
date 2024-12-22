#include <iostream>

using namespace std;

int main() {

    string frase;
    bool impresso = false;

    getline(cin, frase);
    for(unsigned long int i = 1; i < frase.size(); i++) {
        if(frase[i] == 'p') {
            if(frase[i - 1] == 'p') {
                if(impresso) {
                    impresso = false;
                    continue;
                } else
                    impresso = true; 
            } else
                continue;
        }
        cout << frase[i];
    }
    cout << endl;

    return 0;
}