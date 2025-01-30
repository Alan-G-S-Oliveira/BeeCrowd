#include <iostream>

using namespace std;

int main() {

    int N, K;
    int *casas;

    cin >> N;

    casas = new int[N];
    for(int i = 0; i < N; i++)
        cin >> casas[i];

    cin >> K;

    int i = 0;
    int j = N - 1;

    while(i < j) {
        if(casas[i] + casas[j] == K) {
            cout << casas[i] << ' ' << casas[j] << endl;
            break;
        } else if(casas[i] + casas[j] > K)
            j--;
        else
            i++;
    }

    delete[] casas;

    return 0;
}