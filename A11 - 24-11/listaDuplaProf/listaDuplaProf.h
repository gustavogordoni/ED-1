/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   listaDuplaProf.h
 * Author: gordoni
 *
 * Created on 24 de novembro de 2025, 09:30
 */

#ifndef LISTADUPLAPROF_H
#define LISTADUPLAPROF_H

struct No{
    int info;
    No *prox, *ant;
};

struct Lista{
    No *inicioLista;
    int qtd;
};

Lista* criarLista();
int listaEhVazia(Lista *lista);
void inserirElementoListaDupla(Lista* lista, int inf);
void removerElementoListaDupla(Lista *lista, int inf);
void consultarElementoListaDupla(Lista *lista, int inf);
void exibirElementosListaDupla(Lista *lista);
void excluirListaDupla(Lista *lista);


#endif /* LISTADUPLAPROF_H */

