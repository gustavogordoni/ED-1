/*

* Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

/* 
 * File:   filaDinamica.cpp
 * Author: gordoni
 *
 * Created on 6 de outubro de 2025, 07:50
 */

#include <iostream>
#include <cstdlib>
#include <optional>
#include "filaDinamica.h"

using namespace std;

Fila* criarFila() {
    Fila *fila = new (std::nothrow) Fila;

    if (fila == nullptr) {
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        exit(0);
    }

    fila->inicio = nullptr;
    fila->fim = nullptr;

    cout << "Fila criada com sucesso!";

    return fila;
}

bool filaVazia(Fila *fila) { // Verifica se a fila está VAZIA
    if (fila->inicio == nullptr) { // O início aponta para nulo, caso esteja vazia
        cout << "A Fila está vazia!";
        return true;
    }

    return false;
}

bool inserirElemento(Fila *fila) {
    No *novoNo = new (std::nothrow) No;

    if (novoNo == nullptr) {
        cout << "Erro no processo de alocação na memória. Não existe espaço na memória suficiente!";
        return false;
    }

    cout << "Informe o valor a ser INSERIDO: ";
    cin >> novoNo->dados;
    novoNo->prox = nullptr;

    if (filaVazia(fila)) { // Para caso esteja vazia
        fila->inicio = novoNo;
        //        fila->fim = novoNo;
    } else { // Para caso já estiver com ao menos um elemento
        fila->fim->prox = novoNo;
        //        fila->fim = fila->fim->prox;
    }
    fila->fim = novoNo; // Alterantiva seria as duas linhas comentadas na Condicional
    cout << "Elemento " << novoNo->dados << " inserido com sucesso!";

    return true;
}

bool removerElemento(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        No *noAuxiliar;
        noAuxiliar = fila->inicio;

        fila->inicio = fila->inicio->prox;

        if (fila->inicio == nullptr) {
            fila->fim = nullptr; // ou fila->fim = fila->inicio;
        }

        cout << "Elemento: " << noAuxiliar->dados << " removido com sucesso!";
        delete noAuxiliar;
        return true;

    } else {
        cout << " Não foi possível realizar a EXCLUSÃO.";
        return false;
    }
}

bool exibirPrimeiroElemento(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        cout << "Primeiro elemento: " << fila->inicio->dados;
        return true;
    } else {
        cout << " Não foi possível realizar a EXIBIÇÃO.";
        return false;
    }
}

bool exibirFila(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        No *noAuxiliar = fila->inicio;

        while (noAuxiliar != nullptr) {
            cout << noAuxiliar->dados << " - ";
            noAuxiliar = noAuxiliar->prox;
        }

        return true;
    } else {
        cout << " Não foi possível realizar a EXIBIÇÃO.";
        return false;
    }
}

void excluirFila(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        No *noAuxiliar;

        while (noAuxiliar != nullptr) {
            noAuxiliar = fila->inicio;
            fila->inicio = fila->inicio->prox;
            delete noAuxiliar;
        }
    }

    delete fila;
}

bool exibirUltimoElemento(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        cout << "Último elemento: " << fila->fim->dados;
        return true;
    } else {
        cout << " Não foi possível realizar a EXIBIÇÃO.";
        return false;
    }
}

bool exibirFilaInversa(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        No *noAuxiliar = fila->inicio;        
        
        int *vet = new int;
        
        int i = 0;
        for(i; noAuxiliar != nullptr; i++){            
            vet[i] = noAuxiliar->dados;
            noAuxiliar = noAuxiliar->prox;
        }
        
        for(int y = i - 1; y >= 0; y--){
            cout << vet[y] << " - ";
        }

        return true;
    } else {
        cout << " Não foi possível realizar a EXIBIÇÃO.";
        return false;
    }
}

bool quantidadeElementos(Fila *fila) {
    if (!filaVazia(fila)) { // Para caso já estiver com ao menos um elemento
        No *noAuxiliar = fila->inicio;

        int qnt = 0;
        while (noAuxiliar != nullptr) {
            qnt++;
            noAuxiliar = noAuxiliar->prox;
        }
        
        cout << "Existem " << qnt << " de elementos cadastrados na Fila.";

        return true;
    } else {
        cout << " Não foi possível realizar a CONTABILIZAÇÃO.";
        return false;
    }
}