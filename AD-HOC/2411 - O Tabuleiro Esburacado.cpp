#include <iostream>

using namespace std;

int main() {

    int N, M, passos = 0;
    int X = 4, Y = 3;
    bool caiu = false;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> M;

        if(!caiu) {
            switch(M) {
                case 1:
                    Y += 2;
                    X++;
                    break;
                case 2:
                    X += 2;
                    Y++;
                    break;
                case 3:
                    X += 2;
                    Y--;
                    break;
                case 4:
                    Y -= 2;
                    X++;
                    break;
                case 5:
                    Y -= 2;
                    X--;
                    break;
                case 6:
                    X -= 2;
                    Y--;
                    break;
                case 7:
                    X -= 2;
                    Y++;
                    break;
                case 8:
                    Y += 2;
                    X--;
                    break;
            }
            passos++;
        }
        if((X == 1 && Y == 3) || (X == 2 && Y == 3) || (X == 2 && Y == 5) || (X == 5 && Y == 4))
            caiu = true;
    }

    cout << passos << endl;

    return 0;
}