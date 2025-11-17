/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include "listaSimplesmenteEncadeada.h"

using namespace std;

Lista* criarLista() {
    Lista *lista = new (std::nothrow) Lista;

    if (lista == nullptr) {
        cout << "Erro no processo de aloca��o na mem�ria. Não existe espaço na memória suficiente!";
        exit(0);
    }

    lista->inicio = nullptr;
    lista->qtd = 0;

    cout << "Lista criada com sucesso!";
    cout << "\n\n";

    return lista;
}

bool listaVazia(Lista *lista, bool showMessage) {
    if (lista->inicio == nullptr) {
        if (showMessage) {
            cout << "\nA lista está vazia!\n";
        }
        return true;
    }

    return false;
}

bool inserirElementoLista(Lista *lista, int dado) {
    // bool inserirLista(Lista *lista){

    Node *novoNo = new (std::nothrow) Node;

    if (novoNo == nullptr) {
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        return false;
    }

    // cout << "Informe o valor a ser INSERIDO: ";
    // cin >> novoNo->dados;
    novoNo->dados = dado;
    novoNo->prox = nullptr;

    if (listaVazia(lista, false)) {
        // Primeiro elemento a ser inserido na Listas
        lista->inicio = novoNo;
    } else {
        // N�O � O primeiro elemento a ser inserido na Listas
        Node *noAux, *noAnt;
        noAux = lista->inicio;

        // Percorrer a lista para inserir de maneira ordenada
        while (noAux != nullptr && novoNo->dados > noAux->dados) {
            noAnt = noAux;
            noAux = noAux->prox;
        }

        if (noAux == lista->inicio) {
            // Valor inserido � inferior ao que est� no in�cio da lista

            novoNo->prox = noAux;
            //novoNo->prox = lista->inicio;

            lista->inicio = novoNo;
        } else {
            noAnt->prox = novoNo;
            novoNo->prox = noAux;
        }
    }
    lista->qtd++;
    cout << "\nElemento " << dado << " INSERIDO com sucesso!";

    return true;
}

bool removerElementoLista(Lista *lista, int dado) {
    if (!listaVazia(lista, true)) {
        if (lista->inicio->prox == nullptr) {
            // Cont�m um �nico elemento

            Node *noAux = lista->inicio;

            if (noAux->dados == dado) {
                lista->inicio = nullptr;
                lista->qtd = 0;
                delete noAux;
            } else {
                cout << "\nElemento NÃO está contido na lista";
                return false;
            }
        } else {
            // Cont�m MAIS de um �nico elemento
            Node *noAux = lista->inicio, *noAnt;

            // Percorrer a lista para inserir de maneira ordenada
            while (noAux != nullptr && dado > noAux->dados) {
                noAnt = noAux;
                noAux = noAux->prox;
            }

            // N�o est� na lista
            if (noAux == nullptr || noAux->dados != dado) {
                cout << "\nElemento NÃO está contido na lista";
                return false;

                // Existe e est� no in�cio
            } else if (noAux->dados == dado && noAux == lista->inicio) {
                lista->inicio = noAux->prox;
                lista->qtd--;

                cout << "\nO elemento " << noAux->dados << " foi EXCLUÍDO!";
                delete noAux;

                // Existe e N�O est� no in�cio
            } else {
                //}else if(noAux->dados == dado){
                noAnt->prox = noAux->prox;
                lista->qtd--;

                cout << "\nO elemento " << noAux->dados << " foi EXCLUÍDO!";
                delete noAux;
            }
        }

        return true;
    } else {
        return false;
    }
}

bool exibirLista(Lista *lista) {
    if (!listaVazia(lista, true)) {
        Node *noAux = lista->inicio;

        cout << "\n| ";

        // Percorrer a lista
        while (noAux != nullptr) {
            cout << noAux->dados << " | ";
            noAux = noAux->prox;
        }
    } else {
        return false;
    }
    return true;
}

int qtdElementosLista(Lista *lista) {
    int qtd = 0;
    if (!listaVazia(lista, true)) {
        Node *noAux = lista->inicio;

        cout << "\n";

        // Percorrer a lista
        while (noAux != nullptr) {
            qtd++;
            noAux = noAux->prox;
        }

        cout << "A QUANTIDADE de elementos na lista é: " << qtd;
    }

    return qtd;
}

bool pesquisarElementoLista(Lista *lista, int dado) {
    if (!listaVazia(lista, true)) {
        Node *noAux = lista->inicio;

        cout << "\n";

        // Percorrer a lista
        while (noAux != nullptr && dado > noAux->dados) {
            noAux = noAux->prox;
        }

        // Existe
        if (noAux->dados == dado) {
            cout << "\nO elemento " << dado << " ESTÁ contido na lista";

            // N�o est� na lista
        } else {
            // if(noAux == nullptr || noAux->dados != dado){
            cout << "\nO elemento " << dado << " NÃO ESTÁ contido na lista";
        }

    } else {
        return false;
    }
    return true;
}

bool excluirLista(Lista *lista) {
    if (!listaVazia(lista, true)) {
        Node *noAux;

        // Percorrer a lista
        while (noAux != nullptr) {
            noAux = lista->inicio;
            lista->inicio = noAux->prox;
            delete noAux;
        }
    }
    
    delete lista;
}
