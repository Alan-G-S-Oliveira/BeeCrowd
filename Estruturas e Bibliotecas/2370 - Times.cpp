#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct aluno {
    string nome;
    int habilidade;
};

bool compara(aluno x, aluno y) {
    return x.habilidade > y.habilidade;
}

int main() {

    int N, T, H;
    string nome;

    cin >> N >> T;

    vector<aluno> pessoas(N);
    vector<vector<string>> times(T);

    for(int i = 0; i < N; i++)
        cin >> pessoas[i].nome >> pessoas[i].habilidade;

    sort(pessoas.begin(), pessoas.end(), compara);

    for(int i = 0; i < N; i++)
        times[i % T].push_back(pessoas[i].nome);

    for(int i = 0; i < T; i++)
        sort(times[i].begin(), times[i].end());

    for(int i = 0; i < T; i++) {
        cout << "Time " << i + 1 << '\n';
        for(string s: times[i])
            cout << s << '\n';
        cout << endl;
    }

    return 0;
}