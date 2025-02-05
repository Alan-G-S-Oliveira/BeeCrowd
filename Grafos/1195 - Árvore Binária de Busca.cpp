#include <iostream>

using namespace std;

struct no {
    int chave;
    no *esquerda = nullptr;
    no *direita = nullptr;
};

void add(no *&raiz, int n) {

    if(raiz == nullptr) {
        raiz = new no{n, nullptr, nullptr};
        return;
    }

    no *aux = raiz;
    no *pai = nullptr;

    while(aux != nullptr) {
        pai = aux;
        if(n > aux -> chave)
            aux = aux -> direita;
        else
            aux = aux -> esquerda;
    }

    if(n > pai -> chave)
        pai -> direita = new no{n , nullptr, nullptr};
    else
        pai -> esquerda = new no{n, nullptr, nullptr};
}

void apaga(no *&raiz) {
    if(raiz == nullptr)
        return;

    apaga(raiz -> esquerda);
    apaga(raiz -> direita);

    delete raiz;
    raiz = nullptr;
}

void pre_ordem(no *&raiz) {
    if(raiz == nullptr)
        return;

    cout << ' ' << raiz -> chave;
    pre_ordem(raiz -> esquerda);
    pre_ordem(raiz -> direita);
}

void em_ordem(no *&raiz) {
    if(raiz == nullptr)
        return;

    em_ordem(raiz -> esquerda);
    cout << ' ' << raiz -> chave;
    em_ordem(raiz -> direita);
}

void pos_ordem(no *&raiz) {
    if(raiz == nullptr)
        return;

    pos_ordem(raiz -> esquerda);
    pos_ordem(raiz -> direita);
    cout << ' ' << raiz -> chave;
}

int main() {

    int C, N, M;

    cin >> C;
    for(int i = 1; i <= C; i++) {
        no *arvore = nullptr;
        cin >> N;
        while(N--) {
            cin >> M;
            add(arvore, M);
        }

        cout << "Case " << i << ':' << endl;
        cout << "Pre.:";
        pre_ordem(arvore);
        cout << endl;
        cout << "In..:";
        em_ordem(arvore);
        cout << endl;
        cout << "Post:";
        pos_ordem(arvore);
        cout << "\n\n";

        apaga(arvore);
    }

    return 0;
}