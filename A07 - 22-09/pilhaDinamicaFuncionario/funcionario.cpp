#include <iostream>
#include "funcionario.h"

using namespace std;

bool pilhaVazia(Pilha *topo){

    if(*topo == nullptr){
        cout << "\nAtenção: A Pilha está vazia!"
                "\nCadastre um Funcionário primeiro.\n";
        return false;
    }
    return true;
}


Pilha* criarPilha(){
    Pilha *topo = new (std::nothrow) Pilha;

    if(topo == nullptr){
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
    }

    *topo = nullptr;

    cout << "Pilha criada com sucesso!\n";

    return topo;
}

void liberarPilha(Pilha *topo){
    if(pilhaVazia(topo)){
        No *noAuxiliar;

        while((*topo) != nullptr){
            noAuxiliar = *topo;
            *topo = noAuxiliar->prox;

            delete noAuxiliar;
        }
        delete topo;
    }
}

bool consultarTopo(Pilha *topo){ // ou exibirTopo
     if(pilhaVazia(topo)){
        No *noAuxiliar = *topo;
        cout << "\nNome: " << noAuxiliar->dados.nome;
        cout << "\nCargo: " << noAuxiliar->dados.cargo;
        cout << "\nSalário: " << noAuxiliar->dados.salario;
        cout << "\n";
        return true;
     }else {
        return false;
     }
}

bool removerElemento(Pilha *topo){
    if(pilhaVazia(topo)){
        No *noAuxiliar = *topo;
        *topo = noAuxiliar->prox;
        delete noAuxiliar;

        cout << "\nExclusão realizada com sucesso!\n";

        return true;
    }else{
        return false;
    }
}

bool inserirPilha (Pilha *topo){
    No *novoNo = new (std::nothrow) No;

    if(novoNo == nullptr){
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        return false;
    }else{

        // Dados
        Funcionario funcionario;
        cadastroFuncionario(&funcionario);

        novoNo->dados = funcionario;
        // End Dados

        novoNo->prox = nullptr;

        if(*topo == nullptr){
            *topo = novoNo;
        }else{
            novoNo->prox = *topo;
            *topo = novoNo;
        }
        cout << "\nInserção realizada com sucesso!\n";

        return true;
    }
}

void cadastroFuncionario(Funcionario *funcionario){
    cin.ignore();
    cout << "\nCadastro de Funcionário:\n";
    cout << "Nome: ";
    cin.getline(funcionario->nome, 50);

    cout << "Cargo: ";
    cin.getline(funcionario->cargo, 50);

    cout << "Salário: ";
    cin >> funcionario->salario;
}
