#include <iostream>
#include <set>

using namespace std;

int main() {

    int N, X, Y;
    int **floresta;
    set<int> borboletas;

    cin >> N;
    cin.ignore();

    floresta = new int*[N];
    for(int i = 0; i < N; i++)
        floresta[i] = new int[N];

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++)
            cin >> floresta[i][j];
    }

    for(int i = 0; i < 2 * N; i++) {
        cin >> X >> Y;
        cin.ignore();

        borboletas.insert(floresta[X - 1][Y - 1]);
    }

    cout << borboletas.size() << endl;

    for(int i = 0; i < N; i++)
        delete[] floresta[i];
    delete[] floresta;

    return 0;
}