#include <iostream>

using namespace std;

inline bool primo(int n) {

    for(int i = 2; i < n; i++) {
        if(n % i == 0)
            return false;
    }
    return true;

}

int main() {

    int N, M;
    bool primoN = false, primoM = false;
    cin >> N >> M;
    
    while(true) {
        if(!primoN)
            primoN = primo(N);
        if(!primoM)
            primoM = primo(M);

        if(primoN && primoM)
            break;
        if(!primoN)
            N--;
        if(!primoM)
            M--;
    }

    cout << N * M << endl;

    return 0;
}