/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.h to edit this template
 */

/* 
 * File:   listaDuplamenteEncadeada.h
 * Author: gordoni
 *
 * Created on 24 de novembro de 2025, 07:22
 */

#ifndef LISTADUPLAMENTEENCADEADA_H
#define LISTADUPLAMENTEENCADEADA_H

struct Node{
    int info;
    Node *prox, *ant;
};

struct Lista{
    Node *inicio;
    int qtd;
};

Lista* criarLista();
bool listaVazia(Lista *lista, bool showMessage);
bool inserirElementoLista(Lista *lista, int info);
bool removerElementoLista(Lista *lista, int info);
bool exibirLista(Lista *lista);
bool pesquisarElementoLista(Lista *lista, int info);
bool qtdPares(Lista *lista);

#endif /* LISTADUPLAMENTEENCADEADA_H */

