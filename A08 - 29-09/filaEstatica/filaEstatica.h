#ifndef FILAESTATICA_H_INCLUDED
#define FILAESTATICA_H_INCLUDED
#define MAX 5

// #include <iostream>
// using namespace std;

struct FILA{
    int dados[MAX];
    int qnt, inicio, fim;
};

void criarFila(FILA *Fila);
bool filaVazia(FILA *Fila);
bool filaCheia(FILA *Fila);
void inserirElemento(FILA *Fila);
void removerElemento(FILA *Fila);
void exibirElemento(int elemento);
void exibirFila(FILA *Fila);
void exibirFilaReversa(FILA *Fila);
void maioresZero(FILA *Fila);

#endif // FILAESTATICA_H_INCLUDED


/*
a) If qt = 0{inicio = 0 e fim = 0}

b) IF inicio / fim != MAX: inicio++ ou fim ++;
ELSE inicio / fim = 0

c)

*/
