#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int N, K, J;
    string linha;
    
    cin >> N;
    while(N--) {
        cin >> K >> J;

        int x1 = -1, y1 = -1, x2 = -1, y2 = -1;
        for(int i = 0; i < J; i++) {
            cin >> linha;

            if(x1 == -1) {
                for(unsigned int j = 0; j < linha.size(); j++) {
                    if(linha[j] == 'F'){
                        x1 = i;
                        y1 = j;
                        break;
                    }
                }
            }

            if(x2 == -1) {
                for(unsigned int j = 0; j < linha.size(); j++) {
                    if(linha[j] == 'J') {
                        x2 = i;
                        y2 = j;
                        break;
                    }
                }
            }
        }

        int x = (x1 - x2) * 10;
        int y = (y1 - y2) * 10;

        cout << (int)(K / (pow(0.99, (int)sqrt(x * x + y * y)))) << " dBs" << endl;
    }

    return 0;
}