#include <iostream>
#include <sstream>

using namespace std;

char lower(char x) {
    if(x >= 'A' && x <= 'Z')
        return x + 32;
    return x;
}

int main() {

    string entrada, aux, cobol = "cobol";
    while(cin >> entrada) {
        bool bug = false;
        stringstream ss(entrada);
        int i = 0;
        while(getline(ss, aux, '-')) {
            if(lower(aux[0]) != cobol[i] && lower(aux[aux.size() - 1]) != cobol[i]) {
                bug = true;
                break;
            }
            i++;
        }
        if(bug)
            cout << "BUG" << endl;
        else
            cout << "GRACE HOPPER" << endl;
    }

    return 0;
}