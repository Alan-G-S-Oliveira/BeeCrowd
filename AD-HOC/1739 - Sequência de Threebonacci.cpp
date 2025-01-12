#include <iostream>

using namespace std;

inline bool tem_tres(long long int N) {
    while(N > 0) {
        if(N % 10 == 3)
            return true;
        N /= 10;
    }
    return false;
}

inline long long int threebonacci(int N) {

    long long int atual = 1, ant = 1;
    int i = 0;

    while(i < N) {
        long long int aux = atual;
        atual += ant;
        ant = aux;

        if(atual % 3 == 0 || tem_tres(atual))
            i++;
    }
    return atual;
}

int main() {

    int N;

    while(cin >> N)
        cout << threebonacci(N) << endl;

    return 0;
}