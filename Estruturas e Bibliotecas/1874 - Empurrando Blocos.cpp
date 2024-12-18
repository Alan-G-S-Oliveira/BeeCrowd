#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int H, P, F;
    int **matriz;
    string aux, num;
    
    while(true) {
        cin >> H >> P >> F;
        cin.ignore();
        if(H == P && P == F && F == 0)
            break;

        matriz = new int*[H];

        for(int i = 0; i < H; i++) {
            matriz[i] = new int[P];
            getline(cin, aux);
            istringstream ss(aux);
            int j = 0;
            while(ss >> num) {
                matriz[i][j] = stoi(num);
                j++;
            }
        }

        getline(cin, aux);
        istringstream ss(aux);
        ss >> num;
        for(int j = P - 1; j >= 0; j--) {
            for(int i = H - 1; i >= 0; i--) {
                if(matriz[i][j] == 0) {
                    matriz[i][j] = stoi(num);
                    if(!(ss >> num)) {
                        i = -1;
                        j = -1;
                    }
                }
            }
        }

        for(int i = 0; i < H; i++) {
            for(int j = 0; j < P; j++) {
                cout << matriz[i][j];
                if(j != P - 1)
                    cout << " ";
            }
            cout << endl;
        }

        for(int i = 0; i < H; i++)
            delete[] matriz[i];
        delete[] matriz;
    }


    return 0;
}