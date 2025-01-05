#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N;

    while(cin >> N) {
        vector<int> vetor(N);

        for(int i = 0; i < N; i++)
            cin >> vetor[i];

        sort(vetor.begin(), vetor.end());
        int total = 0;
        for(int i = 0; i < N / 2; i++)
            total += (vetor[(N - 1) - i] - vetor[i]);

        cout << total << endl;
    }    

    return 0;
}