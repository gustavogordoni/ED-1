#include <iostream>
#include "listaDupla.h"

using namespace std;

Lista* criarLista(){
    Lista *lista = new (std::nothrow) Lista;
    if(lista==nullptr){
        cout << "Erro na alocação de memória da lista!\n";
        exit(0);
    }
    lista->inicioLista=nullptr;
    lista->qtd=0;
    return lista;
}

int listaEhVazia(Lista *lista){
    if(lista->inicioLista==nullptr){
        cout <<"Lista está vazia!!\n";
        return 0;
    }
    return 1;
}

void inserirElementoListaDupla(Lista* lista, int inf){
    No *novoNo = new (std::nothrow) No;
    if(novoNo==nullptr)
        cout << "Erro de alocação! Não há espaço para o novoNo!\n";
    else{
        novoNo->info= inf;
        novoNo->ant=nullptr;
        novoNo->prox=nullptr;
        if(lista->inicioLista==nullptr){ // if(listaEhVazia(lista)==0)
            lista->inicioLista=novoNo;
        }
        else{
            No *aux = lista->inicioLista;
            while(aux!=nullptr && novoNo->info > aux->info){
                aux=aux->prox;
            }
            if(aux == lista->inicioLista){
                novoNo->prox = aux;
                aux->ant = novoNo;
                lista->inicioLista = novoNo;
            }
            else {
                novoNo->ant = aux->ant;
                novoNo->prox = aux;
                aux->ant->prox=novoNo;
                aux->ant=novoNo;
            }
        }
        lista->qtd++;
    }
}

void removerElementoListaDupla(Lista *lista, int inf){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr && inf > aux->info){
            aux=aux->prox;
        }
        if(aux==nullptr || inf!=aux->info){
            cout<<"Elemento não está presente na lista!\n";
        }
        else{ // que o elemento está na lista
            if(aux==lista->inicioLista){
                lista->inicioLista = aux->prox;
                aux->prox->ant = aux ->ant;
                cout << "Elemento " << aux->info << " removido com sucesso!\n";
                delete aux;

            }
            else{
                aux->ant->prox = aux->prox;
                aux->prox->ant = aux->ant;
                cout << "Elemento " << aux->info << " removido com sucesso!\n";
                delete aux;
            }
            lista->qtd--;
        }
    }
}

void consultarElementoListaDupla(Lista *lista, int inf){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr && inf > aux->info)
            aux=aux->prox;

        if(aux==nullptr || inf!=aux->info)
            cout<<"Elemento não está presente na lista!\n";
        else
            cout <<"Elemento " << aux->info << " encontrado com sucesso!\n";
    }
}

void exibirElementosListaDupla(Lista *lista){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;

        while(aux!=nullptr){
            cout << aux->info << " -> ";
            aux=aux->prox;
        }
        cout << "nulo.\n";
    }
}

void excluirListaDupla(Lista *lista){
    if(listaEhVazia(lista)!=0){
        No *aux = lista->inicioLista;
        while(aux!=nullptr){
            lista->inicioLista=aux->prox;
            aux->prox->ant = nullptr;
            delete aux;
            aux=lista->inicioLista;
        }
    }
    delete lista;
}
