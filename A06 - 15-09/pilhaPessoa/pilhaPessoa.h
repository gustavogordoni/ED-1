#ifndef PILHAPESSOA_H_INCLUDED
#define PILHAPESSOA_H_INCLUDED

#include <iostream>
using namespace std;

struct Pessoa{
    string nome;
    string identidade;
};

struct Pilha{
    Pessoa pessoa[5];
    int topo;
};

void criarPilha(Pilha *pilha);
void preencherElemento(Pilha *pilha);
void exibirElemento(Pilha *pilha);
void removerElemento(Pilha *pilha);

#endif // PILHAPESSOA_H_INCLUDED
