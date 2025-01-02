#include <iostream>
#include <vector>

using namespace std;

int main() {

    int N, M;
    vector<int> notas(101);

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> M;
        notas[M]++;
    }

    int maior = notas[0];
    int indice = 0;

    for(int i = 1; i < 101; i++) {
        if(notas[i] >= maior) {
            maior = notas[i];
            indice = i;
        }
    } 

    cout << indice << endl;

    return 0;
}