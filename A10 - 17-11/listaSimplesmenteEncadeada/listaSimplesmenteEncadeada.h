/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   listaSimplesmenteEncadeada.h
 * Author: gordoni
 *
 * Created on 17 de novembro de 2025, 15:27
 */

#ifndef LISTASIMPLESMENTEENCADEADA_H
#define LISTASIMPLESMENTEENCADEADA_H

struct Node{
    int dados;
    Node *prox;
};

struct Lista{
    Node *inicio;
    int qtd;
};

Lista* criarLista();
bool inserirElementoLista(Lista *lista, int dado);
bool removerElementoLista(Lista *lista, int dado);
bool exibirLista(Lista *lista);
int qtdElementosLista(Lista *lista);
bool listaVazia(Lista *lista, bool showMessage);
bool pesquisarElementoLista(Lista *lista, int dado);
bool excluirLista(Lista *lista);

#endif /* LISTASIMPLESMENTEENCADEADA_H */

