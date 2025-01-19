#include <iostream>

using namespace std;

void maiores(int A1, int A2, int A3, int &X1, int &X2) {
    if(A1 >= A2 && A1 >= A3) {
        X1 = A1;
        X2 = (A2 >= A3)? A2: A3;
    } else if(A2 >= A1 && A2 >= A3) {
        X1 = A2;
        X2 = (A1 >= A3)? A1: A3;
    } else {
        X1 = A3;
        X2 = (A1 >= A2)? A1: A2;
    }
}

void menores(int A1, int A2, int A3, int &X1, int &X2) {
    if(A1 <= A2 && A1 <= A3) {
        X1 = A1;
        X2 = (A2 <= A3)? A2: A3;
    } else if(A2 <= A1 && A2 <= A3) {
        X1 = A2;
        X2 = (A1 <= A3)? A1: A3;
    } else {
        X1 = A3;
        X2 = (A1 <= A2)? A1: A2;
    }
}

int main() {

    int N;
    int A1, A2, A3, B1, B2, B3;
    int X1, X2, Y1, Y2;
    string saida = "";

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;

        menores(A1, A2, A3, X1, X2);
        maiores(B1, B2, B3, Y1, Y2);

        bool hip_1, hip_2;

        hip_1 = (X1 < Y2 && X2 < Y1);

        maiores(A1, A2, A3, X1, X2);
        menores(B1, B2, B3, Y1, Y2);   

        hip_2 = (X1 > Y2 && X2 > Y1);

        if(hip_1 && hip_2)
            saida += "3\n";
        else if(hip_1)
            saida += "1\n";
        else if(hip_2)
            saida += "2\n";
        else
            saida += "0\n"; 
    }

    cout << saida;

    return 0;
}