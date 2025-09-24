#include <iostream>
#include "pilhaDinamica.h"

using namespace std;

Pilha* criarPilha(){
    Pilha *topo = new (std::nothrow) Pilha;

    if(topo == nullptr){
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        //exit();
    }

    *topo = nullptr;

    cout << "Pilha criada com sucesso!";

    return topo;
}

bool pilhaVazia(Pilha *topo){

    if(*topo == nullptr){ // se o conteudo que está dentro da pilha for igual a nulo
        cout << "Pilha está vazia!\n";
        return false;
    }

    return true;
}


void inserirElemento (Pilha *topo){
    No *novoNo = new (std::nothrow) No;

    if(novoNo == nullptr){
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
    }else{
        cout << "Informe o valor a ser inserido: ";
        cin >> novoNo->valor;

        novoNo->prox = nullptr;

        if(*topo == nullptr){ // se a pilha estiver vazia, o topo aponta para nulo.
            *topo = novoNo;
        }else{
            novoNo->prox = *topo;
            *topo = novoNo;
        }
    }
}

void exibirElemento (Pilha *topo){
     if(pilhaVazia(topo)){
        No *noAuxiliar = *topo;
        cout << "Último valor da pilha: " << noAuxiliar->valor;
     }

    /*
    if(pilhaVazia(topo)){ // pilha está vazia ou não
        cout << "Último valor da pilha: " << (*topo)->valor;
    }
    */
}

void removerElemento(Pilha *topo){

    if(pilhaVazia(topo)){
        No *noAuxiliar = *topo;
        *topo = noAuxiliar->prox;
cout << "delete topo";
        delete noAuxiliar;
    }

    /*
    if(pilhaVazia(topo)){
        *topo = (*topo)->prox;
    }
    */
}

void excluirPilha(Pilha *topo){
    if(pilhaVazia(topo)){
        No *noAuxiliar;

        while((*topo) != nullptr){
            //removerElemento(topo)

            // OU

            noAuxiliar = *topo;
            *topo = noAuxiliar->prox;
            // *topo = topo->prox;

            delete noAuxiliar;
        }
        delete topo;
    }
}
