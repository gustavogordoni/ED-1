#ifndef PILHADINAMICA_H_INCLUDED
#define PILHADINAMICA_H_INCLUDED
// #include <iostream>
// using namespace std;

struct PILHA{
    int valor;
    PILHA *prox;
};

typedef struct PILHA *Pilha;
typedef struct PILHA No;

Pilha* criarPilha();
bool pilhaVazia(Pilha *pilha);
void inserirElemento (Pilha *topo);
void exibirElemento (Pilha *topo);
void removerElemento(Pilha *topo);
void excluirPilha(Pilha *pilha);
#endif // PILHADINAMICA_H_INCLUDED
