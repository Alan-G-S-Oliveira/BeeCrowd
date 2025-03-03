#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

    int N;

    cin >> N;
    vector<int> vetor(N);

    for(int i = 0; i < N; i++)
        cin >> vetor[i];

    sort(vetor.begin(), vetor.end());

    if(vetor[0] > 8)
        cout << 'N' << endl;
    else {
        bool valido = true;
        for(int i = 1; i < N; i++) {
            if(vetor[i] - vetor[i - 1] > 8) {
                valido = false;
                break;
            }
        }
        cout << (valido? 'S': 'N') << endl; 
    }

    return 0;
}