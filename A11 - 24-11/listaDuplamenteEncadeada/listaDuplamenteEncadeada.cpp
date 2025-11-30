/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include <optional>
#include "listaDuplamenteEncadeada.h"

using namespace std;

Lista* criarLista() {
    Lista *lista = new (std::nothrow) Lista;

    if (lista == nullptr) {
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
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

bool inserirElementoLista(Lista *lista, int info) {

    Node *novoNo = new (std::nothrow) Node;

    if (novoNo == nullptr) {
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        return false;
    }

    novoNo->info = info;
    novoNo->prox = nullptr;
    novoNo->ant = nullptr;

    if (listaVazia(lista, false)) {
        // Primeiro elemento a ser inserido na Listas
        lista->inicio = novoNo;

    } else {
        // NÃO É O primeiro elemento a ser inserido na Listas
        Node *noAux = lista->inicio;

        // Percorrer a lista para inserir de maneira ordenada
        while (noAux->prox != nullptr && novoNo->info > noAux->info) {
            noAux = noAux->prox;
        }

        if (noAux == lista->inicio && noAux->info > novoNo->info) {
            // Valor inserido é inferior ao que está no início da lista
            novoNo->prox = noAux;
            noAux->ant = novoNo;

            lista->inicio = novoNo;

        } else if (noAux->prox == nullptr && info > noAux->info) {
            novoNo->ant = noAux;
            noAux->prox = novoNo;
        } else {
            novoNo->prox = noAux;
            novoNo->ant = noAux->ant;

            noAux->ant->prox = novoNo;
            noAux->ant = novoNo;
        }
    }
    lista->qtd++;
    cout << "\nElemento " << info << " INSERIDO com sucesso!";

    return true;
}

bool removerElementoLista(Lista *lista, int info) {
    if (!listaVazia(lista, true)) {

        if (lista->inicio->prox == nullptr) {
            // Contém um único elemento

            Node *noAux = lista->inicio;

            if (noAux->info == info) {
                lista->inicio = nullptr;
                lista->qtd = 0;
                delete noAux;
            } else {
                cout << "\nElemento NÃO está contido na lista";
                return false;
            }
        } else {

            Node *noAux = lista->inicio;

            // Percorrer a lista para inserir de maneira ordenada
            while (noAux != nullptr && info > noAux->info) {
                noAux = noAux->prox;
            }

            // Não está na lista
            if (noAux == nullptr || noAux->info != info) {
                cout << "\nElemento NÃO está contido na lista";
                return false;

                // Existe e está no início
            } else if (noAux->info == info && noAux == lista->inicio) {
                lista->inicio = noAux->prox;
                noAux->prox->ant = noAux->ant;
                lista->qtd--;

                cout << "\nO elemento " << noAux->info << " foi EXCLUÍDO!";
                delete noAux;

                // Existe e NÃO está no início
            } else {
                noAux->prox->ant = noAux->ant;
                noAux->ant->prox = noAux->prox;
                lista->qtd--;

                cout << "\nO elemento " << noAux->info << " foi EXCLUÍDO!";
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
            cout << noAux->info << " | ";
            noAux = noAux->prox;
        }
    } else {
        return false;
    }
    return true;
}

bool pesquisarElementoLista(Lista *lista, int info) {
    if (!listaVazia(lista, true)) {
        Node *noAux = lista->inicio;

        cout << "\n";

        // Percorrer a lista
        while (noAux != nullptr && info > noAux->info) {
            noAux = noAux->prox;
        }

        // Existe
        if (noAux->info == info) {
            cout << "\nO elemento " << info << " ESTÁ contido na lista";

            // N�o est� na lista
        } else {
            // if(noAux == nullptr || noAux->dados != dado){
            cout << "\nO elemento " << info << " NÃO ESTÁ contido na lista";
        }

    } else {
        return false;
    }
    return true;
}

bool qtdPares(Lista *lista) {
    if (!listaVazia(lista, true)) {
        Node *noAux = lista->inicio;
        
        int qtd = 0;
        
        // Percorrer a lista
        while (noAux != nullptr) {
            if(noAux->info % 2 == 0){
                qtd++;
            }
            noAux = noAux->prox;
        }
        cout << "A quantidade de elementos PARES é: " << qtd;
    } else {
        return false;
    }
    return true;
}