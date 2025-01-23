#include <iostream>
#include <queue>

using namespace std;

struct no {
    int chave;
    no *esquerdo = nullptr;
    no *direito = nullptr;
};

struct arvore {
    no *raiz = nullptr;
};

void add(arvore *arv, int n) {
    no **aux = &(arv -> raiz);

    while(*(aux) != nullptr) {
        if(n < (*aux) -> chave)
            aux = &((*aux)) -> esquerdo;
        else
            aux = &((*aux)) -> direito;
    }

    *aux = new no;
    (*aux) -> chave = n;
}

void apaga(no *raiz) {
    if(raiz == nullptr)
        return;

    apaga(raiz -> esquerdo);
    apaga(raiz -> direito);

    delete raiz;
    raiz = nullptr;
}

void busca_em_largura(arvore *arv) {
    if(arv -> raiz == nullptr)
        return;

    queue<no *> fila;
    no *aux = arv -> raiz;
    fila.push(aux);

    bool espaco = false;
    while(!fila.empty()) {
        aux = fila.front();
        fila.pop();

        if(espaco)
            cout << ' ';
        else
            espaco = true;
        cout << aux -> chave;

        if(aux -> esquerdo)
            fila.push(aux -> esquerdo);
        if(aux -> direito)
            fila.push(aux -> direito);
    }
    cout << endl;
}

int main() {

    arvore arv;
    int C, N, aux;

    cin >> C;
    for(int i = 0; i < C; i++) {
        cin >> N;
        for(int j = 0; j < N; j++) {
            cin >> aux;
            add(&arv, aux);
        }

        cout << "Case " << i + 1 << ":" << endl;
        busca_em_largura(&arv);
        cout << endl;

        apaga(arv.raiz);
        arv.raiz = nullptr;
    }

    return 0;
}