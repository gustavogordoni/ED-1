#include <iostream>
#include "pilhaEstatica.h"

using namespace std;

void criarPilha(Pilha *pilha){
    pilha->topo = 0;
}

void preencherElemento(Pilha *pilha, int qnt){
    if(pilha->topo < 5){
        cout << "Informe um valor para o topo da pilha: ";
        cin >> pilha->dados[pilha->topo];
        pilha->topo++;
    }else{
        cout << "A pilha já está cheia!";
    }
}

void exibirElemento(Pilha *pilha){
    if(pilha->topo > 0){
        cout << "O elemento do topo da pilha é: " << pilha->dados[pilha->topo - 1];
    }else{
        cout << "Não há elementos na pilha!";
    }
}

void removerElemento(Pilha *pilha){
    if(pilha->topo > 0){
        pilha->topo--;
    }else{
        cout << "Não há elementos na pilha!";
    }
}
