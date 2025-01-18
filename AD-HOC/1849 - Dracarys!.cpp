#include <iostream>
#include <cmath>

using namespace std;

int main() {

    int Ld, Cd, Lv, Cv;
    int aux1, aux2, aux3;
    double area;

    cin >> Ld >> Cd >> Lv >> Cv;

    aux1 = Ld + Lv;
    aux2 = Cd;
    aux3 = Cv;

    if(Ld + Cv < aux1) {
        aux1 = Ld + Cv;
        aux3 = Lv;
    }
    if(Cd + Lv < aux1) {
        aux1 = Cd + Lv;
        aux2 = Ld;
        aux3 = Cv;
    }
    if(Cd + Cv < aux1) {
        aux1 = Cd + Cv;
        aux2 = Ld;
        aux3 = Lv;
    }

    if(aux2 == aux3) {
        area = pow(min(aux1, aux2), 2);
    } else {
        if(max(aux2, aux3) < aux1)
            area = pow(max(aux2, aux3), 2);
        else if(min(aux2, aux3) < aux1)
            area = pow(min(aux2, aux3), 2);
        else
            area = pow(aux1, 2);
    }

    area = max(area, max(pow(min(Ld, Cd), 2), pow(min(Lv, Cv), 2)));

    cout << static_cast<int>(area) << endl;

    return 0;
}