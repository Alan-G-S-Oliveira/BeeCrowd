#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool numero(string S) {
    for(char c: S) {
        if(c < '0' || c > '9')
            return false;
    }
    return true;
}

int main() {

    int N, W;
    string S, aux1, aux2;

    cin >> N >> W;
    cin.ignore();
    while(N--) {
        getline(cin, aux1);
        
        istringstream ss(aux1);

        S = "";
        bool espaco = false;
        while(ss >> aux2) {
            if(!numero(aux2)) {
                if(espaco)
                    S.push_back(' ');
                espaco = true;
                S += aux2;
            } else {
                if(stoi(aux2) > W)
                    cout << S << endl;
            }
        }
    }

    return 0;
}