#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N, X, Y;
    string aux, temp;

    cin >> N;
    while(N--) {

        cin >> aux;
        stringstream ss(aux);

        getline(ss, temp, 'x');
        X = stoi(temp);
        getline(ss, temp, 'x');
        Y = stoi(temp);

        for(int i = 5; i <= 10; i++) {
            cout << X << " x " << i << " = " << X * i;
            if(X != Y)
                cout << " && " << Y << " x " << i << " = " << Y * i;
            cout << endl;
        }

    }

    return 0;
}