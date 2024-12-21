#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int N, M;
    int **matriz;
    int soma, maior = -1;
    string aux, num;

    cin >> N >> M;
    cin.ignore();

    matriz = new int*[N];
    for(int i = 0; i < N; i++)
        matriz[i] = new int[M];

    for(int i = 0; i < N; i++) {
        getline(cin, aux);
        istringstream ss(aux);
        soma = 0;
        for(int j = 0; j < M; j++) {
            ss >> num;
            matriz[i][j] = stoi(num);
            soma += matriz[i][j];
        }
        maior = max(soma, maior);
    }

    for(int j = 0; j < M; j++) {
        soma = 0;
        for(int i = 0; i < N; i++)
            soma += matriz[i][j];
        maior = max(soma, maior); 
    }

    cout << maior << endl;

    for(int i = 0; i < N; i++)
        delete[] matriz[i];
    delete[] matriz;

    return 0;
}