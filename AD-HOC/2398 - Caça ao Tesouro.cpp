#include <iostream>
#include <set>

using namespace std;

struct ponto {
    int x;
    int y;

    bool operator==(const ponto &outro) const {
        return x == outro.x && y == outro.y;
    }

    bool operator<(const ponto &outro) const {
        return x < outro.x || (x == outro.x && y < outro.y);
    }
};

int main() {

    int N, K, X, Y, D;
    int i, j;

    set<ponto> conjunto1, conjunto2;

    cin >> N >> K;
    K--;

    cin >> X >> Y >> D;
    i = D;
    j = 0;
    while(j <= D) {
        ponto aux1 = {X + i, Y + j};
            ponto aux2 = {X + i, Y - j};
            ponto aux3 = {X - i, Y + j};
            ponto aux4 = {X - i, Y - j};

            i--;
            j++;

            if(aux1.x >= 0 && aux1.x < N && aux1.y >= 0 && aux1.y < N)
                conjunto1.insert(aux1);
            if(aux2.x >= 0 && aux2.x < N && aux2.y >= 0 && aux2.y < N)
                conjunto1.insert(aux2);
            if(aux3.x >= 0 && aux3.x < N && aux3.y >= 0 && aux3.y < N)
                conjunto1.insert(aux3);
            if(aux4.x >= 0 && aux4.x < N && aux4.y >= 0 && aux4.y < N)
                conjunto1.insert(aux4);
    }

    while(K--) {
        cin >> X >> Y >> D;
        i = D;
        j = 0;
        while(j <= D) {
            ponto aux1 = {X + i, Y + j};
            ponto aux2 = {X + i, Y - j};
            ponto aux3 = {X - i, Y + j};
            ponto aux4 = {X - i, Y - j};

            i--;
            j++;

            if(aux1.x >= 0 && aux1.x < N && aux1.y >= 0 && aux1.y < N)
                conjunto2.insert(aux1);
            if(aux2.x >= 0 && aux2.x < N && aux2.y >= 0 && aux2.y < N)
                conjunto2.insert(aux2);
            if(aux3.x >= 0 && aux3.x < N && aux3.y >= 0 && aux3.y < N)
                conjunto2.insert(aux3);
            if(aux4.x >= 0 && aux4.x < N && aux4.y >= 0 && aux4.y < N)
                conjunto2.insert(aux4);
        }

        set<ponto> intersecao;
        for(const ponto &p: conjunto1) {
            if(conjunto2.count(p) != 0)
                intersecao.insert(p);
        }

        conjunto1 = intersecao;
        conjunto2.clear();
    }

    if(conjunto1.size() != 1)
        cout << -1 << ' ' << -1 << endl;
    else {
        for(ponto p: conjunto1)
            cout << p.x << ' ' << p.y << endl;
    }

    return 0;
}