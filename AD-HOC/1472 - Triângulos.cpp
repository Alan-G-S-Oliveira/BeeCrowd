#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int N, aux;
    
    while (cin >> N) {
        vector<int> circulo(N + 1, 0);
        int total = 0;

        for (int i = 1; i <= N; i++) {
            cin >> aux;
            total += aux;
            circulo[i] = total;
        }

        unordered_map<int, int> angulos;
        int qtd = 0;
        int salto = total / 3;

        for (int i = 0; i < N; i++) {
            int angulo1 = circulo[i];
            int angulo2 = (angulo1 + salto) % total;  
            int angulo3 = (angulo1 + 2 * salto) % total;  

            if (angulos[angulo2] > 0 && angulos[angulo3] > 0) {
                qtd++;
            }

            angulos[angulo1]++;
        }

        cout << qtd << endl;
    }

    return 0;
}
