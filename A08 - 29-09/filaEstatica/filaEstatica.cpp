#include <iostream>
#include <stdlib.h>
#include "filaEstatica.h"

using namespace std;

void criarFila(FILA *Fila){
    Fila->qnt = 0;
    Fila->inicio = 0;
    Fila->fim = -1; // pois p/ add � sempre fim+1
}

bool filaVazia(FILA *Fila){ // Verifica se a fila est� VAZIA

    if(Fila->qnt == 0){
        cout << "A Fila est� vazia!";
        return true;
    }

    return false;
}

bool filaCheia(FILA *Fila){ // Verifica se a fila est� CHEIA

    if(Fila->qnt == MAX){
        cout << "A Fila est� cheia!";
        return true;
    }

    return false;
}

void inserirElemento(FILA *Fila){
    if(!filaCheia(Fila)){ // N�o est� cheia
        Fila->fim++;
        if(Fila->fim == MAX){ // Verificar se n�o est� no FIM do Vetor
            Fila->fim = 0;
        }
        cout << "Informe um valor para ser inserido na Fila: ";
        cin >> Fila->dados[Fila->fim];

        Fila->qnt++; // Atualiza a informa��o de dados cadastrados na fila
    }else{
        cout << " N�o foi poss�vel realizar a inser��o!";
    }
}

void removerElemento(FILA *Fila){
    if(!filaVazia(Fila)){ // N�o est� vazia
        cout  << "Removendo o elemento: " << Fila->dados[Fila->inicio];
        Fila->inicio++;
        Fila->qnt--;

        if(Fila->inicio == MAX){ // Verificar se n�o est� no FIM do Vetor
            Fila->inicio = 0;
        }

        if(filaVazia(Fila)){
            Fila->inicio = 0;
            Fila->fim = -1;
        }
    }else{
        cout << " N�o foi poss�vel realizar a exclus�o!";
    }
}

void exibirElemento(int elemento){
    cout << "O valor da Fila �: " << elemento;
}

void exibirFila(FILA *Fila){
    if(!filaVazia(Fila)){ // N�o est� vazia
        for(int i=0, j=Fila->inicio; i < Fila->qnt; i++){
            if(j == MAX){
                j = 0;
            }
            cout << Fila->dados[j] << "\t";
            j++;
        }
    }else{
        cout << " N�o foi poss�vel realizar a exibi��o!";
    }
}

void exibirFilaReversa(FILA *Fila) {
    if (!filaVazia(Fila)) { // N�o est� vazia
        for (int i = 0, j = Fila->fim; i < Fila->qnt; i++) {
            cout << Fila->dados[j] << "\t";
            j = (j - 1 + MAX) % MAX; // Controla para volta ao final da fila
        }
    }else{
        cout << " N�o foi poss�vel realizar a exibi��o!";
    }
}

void maioresZero(FILA *Fila){
    if(!filaVazia(Fila)){ // N�o est� vazia
        for(int i=0, j=Fila->inicio; i < Fila->qnt; i++){
            if(j == MAX){
                j = 0;
            }
            if(Fila->dados[j] > 0) cout << Fila->dados[j] << "\t";
            j++;
        }
    }else{
        cout << " N�o foi poss�vel realizar a exibi��o!";
    }
}
