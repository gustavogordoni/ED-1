#include <iostream>
#include "pilhaPessoa.h"

using namespace std;

void criarPilha(Pilha *pilha){
    pilha->topo = 0;
}

void preencherElemento(Pilha *pilha){
    if(pilha->topo < 5){
        cin.ignore();
        cout << "Informe um nome: ";
        getline(cin, pilha->pessoa[pilha->topo].nome);

        cout << "Informe um identidade: ";
        getline(cin, pilha->pessoa[pilha->topo].identidade);

        pilha->topo++;
    }else{
        cout << "A pilha já está cheia!";
    }
}

void exibirElemento(Pilha *pilha){
    if(pilha->topo > 0){
        cout << "O elemento do topo da pilha é: "
        << "\nNome: " << pilha->pessoa[pilha->topo - 1].nome
        << "\nIdentidade: " << pilha->pessoa[pilha->topo - 1].identidade;
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
