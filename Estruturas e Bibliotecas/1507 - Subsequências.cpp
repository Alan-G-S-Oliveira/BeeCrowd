#include <iostream>

using namespace std;

int main() {

    int N, Q;
    string S, R;

    cin >> N;
    while(N--) {
        cin >> S;
        cin >> Q;
        
        while(Q--) {
            cin >> R;

            unsigned int i = 0;
            for(char c: S) {
                if(c == R[i])
                    i++;
                if(i == R.size())
                    break;
            }

            if(i == R.size())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;

        }
    }

    return 0;
}