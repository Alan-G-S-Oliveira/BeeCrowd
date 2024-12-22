#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N, M;

    cin >> N;
    vector<int> fila(N);
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        fila[i] = num;
    }

    cin >> M;
    vector<int> saiu(M);
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;
        saiu[i] = num;
    }

    sort(saiu.begin(), saiu.end());

    bool espaco = false;
    for(int i: fila) {
        if(!binary_search(saiu.begin(), saiu.end(), i)) {
            if(espaco)
                cout << " ";
            else
                espaco = true;
            cout << i;
        }
    }
    cout << endl;

    return 0;
}