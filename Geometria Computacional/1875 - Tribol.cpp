#include <iostream>

using namespace std;

int main() {

    int C, P;
    char M, S;

    cin >> C;
    for(int i = 0; i < C; i++) {
        cin >> P;
        
        int R = 0, G = 0, B = 0;
        for(int j = 0; j < P; j++) {
            cin >> M >> S;
            if(M == 'R') {
                if(S == 'G')
                    R += 2;
                else
                    R++;
            } else if(M == 'G') {
                if(S == 'B')
                    G += 2;
                else
                    G++;
            } else {
                if(S == 'R')
                    B += 2;
                else
                    B++;
            }
        }

        if(R == G && G == B)
            cout << "trempate" << endl;
        else if(R > G && R > B)
            cout << "red" << endl;
        else if(G > R && G > B)
            cout << "green" << endl;
        else if(B > R && B > G)
            cout << "blue" << endl;
        else
            cout << "empate" << endl;
    }

    return 0;
}