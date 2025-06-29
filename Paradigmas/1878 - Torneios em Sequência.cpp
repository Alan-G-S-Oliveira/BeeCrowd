#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {

    int N, M;

    while(cin >> N >> M) {
        vector<int> c(N);

        for(int i = 0; i < N; i++)
            cin >> c[i];

        set<long long int> valores;
        bool aceita = true;

        if(N == 1) {
            for(int i = 1; i <= M; i++) {
                long long int aux = c[0] * i;
                if(valores.count(aux)) {
                    aceita = false;
                    break;
                }
                valores.insert(aux);
            }
        } else if(N == 2) {
            for(int i = 1; i <= M; i++) {
                for(int j = 1; j <= M; j++) {
                    long long int aux = c[0] * i + c[1] * j;
                    if(valores.count(aux)) {
                        aceita = false;
                        break;
                    }
                    valores.insert(aux);
                }
            }
        } else {
            for(int i = 1; i <= M; i++) {
                for(int j = 1; j <= M; j++) {
                    for(int k = 1; k <= M; k++) {
                        long long int aux = c[0] * i + c[1] * j + c[2] * k;
                        if(valores.count(aux)) {
                            aceita = false;
                            break;
                        }
                        valores.insert(aux);
                    }
                }
            }
        }

        cout << (aceita? "Lucky Denis!": "Try again later, Denis...") << endl;
    }

    return 0;
}