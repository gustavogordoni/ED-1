#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED
// #include <iostream>
// using namespace std;

struct FUNCIONARIO{
    char nome[50], cargo[50];
    float salario;
};

typedef struct FUNCIONARIO Funcionario;

struct PILHA{
    Funcionario dados;
    struct PILHA *prox;
};

typedef struct PILHA *Pilha;
typedef struct PILHA No;

Pilha* criarPilha();
void liberarPilha(Pilha *topo);
bool consultarTopo(Pilha *topo);
bool removerElemento(Pilha *topo);
bool inserirPilha (Pilha *topo);
void cadastroFuncionario(Funcionario *funcionario);
#endif // FUNCIONARIO_H_INCLUDED
