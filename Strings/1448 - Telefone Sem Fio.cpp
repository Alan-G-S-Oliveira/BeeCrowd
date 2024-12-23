#include <iostream>

using namespace std;

int main() {

    int N;
    string R, C1, C2;

    cin >> N;
    cin.ignore();

    for(int i = 1; i <= N; i++) {
        getline(cin, R);
        getline(cin, C1);
        getline(cin, C2);

        cout << "Instancia " << i << endl;
        if(C1 == C2)
            cout << "empate" << endl;
        else {
            int desempate = 0;
            int A1 = 0, A2 = 0;
            for(unsigned long int i = 0; i < R.size(); i++) {
                if(R[i] == C1[i])
                    A1++;
                if(R[i] == C2[i])
                    A2++;
                if(R[i] != C1[i] && R[i] == C2[i] && desempate == 0)
                    desempate = -1;
                if(R[i] != C2[i] && R[i] == C1[i] && desempate == 0)
                    desempate = 1;
            }
            if(A1 > A2)
                cout << "time 1" << endl;
            else if(A1 < A2)
                cout << "time 2" << endl;
            else {
                if(desempate == -1)
                    cout << "time 2" << endl;
                else if (desempate == 1)
                    cout << "time 1" << endl;
                else
                    cout << "empate" << endl;
            }
        }
        cout << endl;
    }

    return 0;
}