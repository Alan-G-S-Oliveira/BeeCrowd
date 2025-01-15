#include <iostream>
#include <string>

using namespace std;

int main() {

    int N;
    int A, B, C, D;
    string resultado, saida = "";

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> A >> B >> C >> D;
        resultado = to_string(static_cast<double>(D - B) / (C - A));

        int ponto = 0;

        for(char c: resultado) {
            if(c == '.') {
                ponto = 1;
                saida.push_back(',');
            } else {
                saida.push_back(c);
                if(ponto != 0)
                    ponto++;
                if(ponto == 3)
                    break;
            }
        }

        for(int i = ponto; i < 3; i++)
            saida.push_back('0');
        cout << saida << endl;
        saida.clear();
    }
    

    return 0;
}