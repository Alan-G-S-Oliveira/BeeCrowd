#include <iostream>

using namespace std;

int main() {

    int N, K;
    int aluno, total = 0;

    cin >> N >> K;
    for(int i = 0; i < N; i++) {
        cin >> aluno;
        if(aluno <= 0)
            total++;
    }

    cout << (total >= K? "YES": "NO") << endl;

    return 0;
}