#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

using namespace std;

int main() {

    string X, Y, N = "";
    set<string> alunos;
    vector<string> sim, nao;

    while(cin >> X && X != "FIM") {
        cin >> Y;
        if(Y == "YES") {
            if(alunos.count(X) == 0) {
                alunos.insert(X);
                sim.push_back(X);
            }
            if(X.size() > N.size())
                N = X;
        } else {
            if(alunos.count(X) == 0) {
                alunos.insert(X);
                nao.push_back(X);
            }
        }
    }

    sort(sim.begin(), sim.end());
    sort(nao.begin(), nao.end());

    for(string s: sim)
        cout << s << endl;
    for(string s: nao)
        cout << s << endl;
    cout << "\nAmigo do Habay:\n" << N << endl;

    return 0;
}