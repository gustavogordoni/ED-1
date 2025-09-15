#ifndef PILHAESTATICA_H_INCLUDED
#define PILHAESTATICA_H_INCLUDED
// #include <iostream>
// using namespace std;

struct Pilha{
    int dados[5];
    int topo = 0;
};

// pilha->pessoa->nome
// pilha[1]->pessoa->nome
// pilha->pessoa[1]->nome

void criarPilha(Pilha *pilha);
void preencherElemento(Pilha *pilha, int qnt);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);

#endif // PILHAESTATICA_H_INCLUDED
