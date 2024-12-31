#include <iostream>
#include <set>

using namespace std;

int main() {

    int N, V;
    set<int> alunos;

    cin >> N;
    for(int i = 0; i < N; i++) {
        cin >> V;
        alunos.insert(V);
    }

    cout << alunos.size() << endl;

    return 0;
}