#include <iostream>

using namespace std;

inline bool pitagoras(int x, int y, int z) {

    if(x * x + y * y == z * z)
        return true;
    if(x * x + z * z == y * y)
        return true;
    if(y * y + z * z == x * x)
        return true;

    return false;

}

inline int mdc(int x, int y, int z) {
    int inicio = min(x, y);
    inicio = min(inicio, z);

    for(int i = inicio; i >= 1; i--) {
        if(x % i == 0 && y % i == 0 && z % i == 0)
            return i;
    }
    return 1;
}

int main() {

    int x, y, z;

    while(cin >> x >> y >> z) {
        cin.ignore();

        if(pitagoras(x, y, z)) {
            if(mdc(x, y, z) == 1)
                cout << "tripla pitagorica primitiva" << endl;
            else
                cout << "tripla pitagorica" << endl;
        } else
            cout << "tripla" << endl;
    }

    return 0;
}