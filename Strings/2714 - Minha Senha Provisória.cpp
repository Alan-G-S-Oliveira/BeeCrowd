#include <iostream>

using namespace std;

int main() {

    int N;
    string X;
    cin >> N;

    for(int i = 0; i < N; i++) {
        cin >> X;

        if(X.size() != 20)
            cout << "INVALID DATA" << endl;
        else if(X[0] != 'R' || X[1] != 'A')
            cout << "INVALID DATA" << endl;
        else {
            bool achou_0 = false;
            for(long unsigned int j = 2; j < X.size(); j++) {
                if(X[j] != '0')
                    achou_0 = true;

                if(achou_0)
                    cout << X[j];
            }
            cout << endl;
        }
    }

    return 0;
}