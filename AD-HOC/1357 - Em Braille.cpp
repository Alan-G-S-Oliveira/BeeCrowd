#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {

    map<string, int> dicionario_1;
    map<int, string> dicionario_2;

    dicionario_2[0] = ".***..";
    dicionario_2[1] = "*.....";
    dicionario_2[2] = "*.*...";
    dicionario_2[3] = "**....";
    dicionario_2[4] = "**.*..";
    dicionario_2[5] = "*..*..";
    dicionario_2[6] = "***...";
    dicionario_2[7] = "****..";
    dicionario_2[8] = "*.**..";
    dicionario_2[9] = ".**...";

    dicionario_1[".***.."] = 0;
    dicionario_1["*....."] = 1;
    dicionario_1["*.*..."] = 2;
    dicionario_1["**...."] = 3;
    dicionario_1["**.*.."] = 4;
    dicionario_1["*..*.."] = 5;
    dicionario_1["***..."] = 6;
    dicionario_1["****.."] = 7;
    dicionario_1["*.**.."] = 8;
    dicionario_1[".**..."] = 9;

    int D;
    char X;
    string entrada_1;

    while(cin >> D) {
        if(D == 0)
            break;

        cin >> X;
        if(X == 'S') {
            cin >> entrada_1;
            for(int j = 0; j < 5; j += 2){
                for(int k = 0; k < D; k++) {
                    for(int i = 0; i < 2; i++)
                        cout << dicionario_2[entrada_1[k] - '0'][i + j];
                    if(k != D - 1)
                        cout << ' ';
                }
                cout << endl;
            }
        } else {
            vector<string> entrada_2(D);
            for(int i = 0; i < 3; i++) {
                for(int j = 0; j < D; j++) {
                    string aux;
                    cin >> aux;
                    entrada_2[j] += aux;
                }
            }
            for(string s: entrada_2)
                cout << dicionario_1[s];
            cout << endl;
        }
    }

    return 0;
}