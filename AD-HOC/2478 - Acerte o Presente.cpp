#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {

    int X;
    string N, P1, P2, P3;
    unordered_map<string, vector<string>> presentes;

    cin >> X;
    for(int i = 0; i < X; i++) {
        cin >> N >> P1 >> P2 >> P3;
        presentes[N] = {P1, P2, P3};
    }

    while(cin >> N >> P1) {

        bool achou = false;
        for(string S: presentes[N]) {
            if(S == P1) {
                achou = true;
                break;
            }
        }

        cout << (achou? "Uhul! Seu amigo secreto vai adorar o/": "Tente Novamente!") << endl;
    }


    return 0;
}