#include <iostream>
#include <set>

using namespace std;

struct ponto {
    int x;
    int y;

    bool operator<(const ponto &p) const {
        if(x != p.x)
            return x < p.x;
        return y < p.y;
    }

    bool operator==(const ponto &p) const {
        return x == p.x && y == p.y; 
    }
};

int main() {

    int N;
    set<ponto> raios;
    bool achou = false;

    cin >> N;
    for(int i = 0; i < N; i++) {
        ponto aux;
        cin >> aux.x >> aux.y;
        cin.ignore();

        if(raios.count(aux) != 0)
            achou = true;
        raios.insert(aux);
        
    }

    cout << achou << endl;

    return 0;
}
