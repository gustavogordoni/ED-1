#include <iostream>
#include <stdlib.h>
#include "filaEstatica.h"

using namespace std;

void criarFila(FILA *Fila){
    Fila->qnt = 0;
    Fila->inicio = 0;
    Fila->fim = -1; // pois p/ add é sempre fim+1
}

bool filaVazia(FILA *Fila){ // Verifica se a fila está VAZIA

    if(Fila->qnt == 0){
        cout << "A Fila está vazia!";
        return true;
    }

    return false;
}

bool filaCheia(FILA *Fila){ // Verifica se a fila está CHEIA

    if(Fila->qnt == MAX){
        cout << "A Fila está cheia!";
        return true;
    }

    return false;
}

void inserirElemento(FILA *Fila){
    if(!filaCheia(Fila)){ // Não está cheia
        Fila->fim++;
        if(Fila->fim == MAX){ // Verificar se não está no FIM do Vetor
            Fila->fim = 0;
        }
        cout << "Informe um valor para ser inserido na Fila: ";
        cin >> Fila->dados[Fila->fim];

        Fila->qnt++; // Atualiza a informação de dados cadastrados na fila
    }else{
        cout << " Não foi possível realizar a inserção!";
    }
}

void removerElemento(FILA *Fila){
    if(!filaVazia(Fila)){ // Não está vazia
        cout  << "Removendo o elemento: " << Fila->dados[Fila->inicio];
        Fila->inicio++;
        Fila->qnt--;

        if(Fila->inicio == MAX){ // Verificar se não está no FIM do Vetor
            Fila->inicio = 0;
        }

        if(filaVazia(Fila)){
            Fila->inicio = 0;
            Fila->fim = -1;
        }
    }else{
        cout << " Não foi possível realizar a exclusão!";
    }
}

void exibirElemento(int elemento){
    cout << "O valor da Fila é: " << elemento;
}

void exibirFila(FILA *Fila){
    if(!filaVazia(Fila)){ // Não está vazia
        for(int i=0, j=Fila->inicio; i < Fila->qnt; i++){
            if(j == MAX){
                j = 0;
            }
            cout << Fila->dados[j] << "\t";
            j++;
        }
    }else{
        cout << " Não foi possível realizar a exibição!";
    }
}

void exibirFilaReversa(FILA *Fila) {
    if (!filaVazia(Fila)) { // Não está vazia
        for (int i = 0, j = Fila->fim; i < Fila->qnt; i++) {
            cout << Fila->dados[j] << "\t";
            j = (j - 1 + MAX) % MAX; // Controla para volta ao final da fila
        }
    }else{
        cout << " Não foi possível realizar a exibição!";
    }
}

void maioresZero(FILA *Fila){
    if(!filaVazia(Fila)){ // Não está vazia
        for(int i=0, j=Fila->inicio; i < Fila->qnt; i++){
            if(j == MAX){
                j = 0;
            }
            if(Fila->dados[j] > 0) cout << Fila->dados[j] << "\t";
            j++;
        }
    }else{
        cout << " Não foi possível realizar a exibição!";
    }
}
