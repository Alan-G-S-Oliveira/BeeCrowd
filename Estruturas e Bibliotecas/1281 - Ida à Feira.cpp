#include <iostream>
#include <map>

using namespace std;

int main() {

    int N, M, P, qtd;
    string produto;
    double preco;

    cin >> N;
    cin.ignore();

    for(int i = 0; i < N; i++) {

        map<string, double> produtos;

        cin >> M;
        cin.ignore();

        for(int j = 0; j < M; j++) {
            cin >> produto >> preco;
            cin.ignore();
            produtos[produto] = preco;
        }

        cin >> P;
        cin.ignore();

        double total = 0;
        for(int j = 0; j < P; j++) {
            cin >> produto >> qtd;
            total += (produtos[produto] * qtd);
        }

        cout.precision(2);
        cout << fixed;
        cout << "R$ " << total << endl;
    }

    return 0;
}