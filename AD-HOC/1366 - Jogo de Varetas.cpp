#include <iostream>

using namespace std;

int main() {

    int N, C, V;
    while(true) {
        cin >> N;
        if(N == 0)
            break;

        int soma = 0, resto = 0;
        for(int i = 0; i < N; i++) {
            cin >> C >> V;
            soma += V / 4;
            if(V % 4 >= 2)
                resto += 2;
        }
        soma += resto / 4;
        cout << soma << endl; 
    }

    return 0;
}