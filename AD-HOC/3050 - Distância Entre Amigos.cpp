#include <iostream>

using namespace std;

int main() {

    int N;
    int *A;

    cin >> N;
    A = new int[N];

    for(int i = 0; i < N; i++)
        cin >> A[i];

    int max1 = A[0];
    int max2 = A[0];
    int saida = 0;

    for(int i = 1; i < N; i++) {
        saida = max(saida, A[i] + i + max2);
        saida = max(saida, A[i] - i + max1);

        max1 = max(max1, A[i] + i);
        max2 = max(max2, A[i] - i);
    }

    cout << saida << endl;

    delete[] A;

    return 0;
}