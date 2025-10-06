/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   filaDinamica.h
 * Author: gordoni
 *
 * Created on 6 de outubro de 2025, 07:49
 */

#ifndef FILADINAMICA_H
#define FILADINAMICA_H

// #include <iostream>
// using namespace std;

struct No{
    int dados;    
    No *prox;
};

struct Fila{
    No *inicio;
    No *fim;    
};

Fila* criarFila();
bool inserirElemento(Fila *fila);
bool removerElemento(Fila *fila);
bool exibirPrimeiroElemento(Fila *fila);
bool exibirFila(Fila *fila);
void excluirFila(Fila *fila);
bool exibirUltimoElemento(Fila *fila);
bool exibirFilaInversa(Fila *fila);
bool quantidadeElementos(Fila *fila);


#endif /* FILADINAMICA_H */

