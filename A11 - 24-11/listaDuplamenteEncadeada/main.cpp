/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: gordoni
 *
 * Created on 24 de novembro de 2025, 07:22
 */

#include <cstdlib>
#include <iostream>
#include <locale>

#include "listaDuplamenteEncadeada.h"

using namespace std;

char menuInicial();

/*
 * 
 */
int main(int argc, char** argv) {
    char menu;
    setlocale(LC_ALL, "Portuguese");

    Lista *lista = criarLista();

    do {
        menu = menuInicial();
        int info = 0;

        switch (menu) {
            case '1': // Inserir
                cout << "Informe o valor a ser INSERIDO: ";
                cin >> info;
                inserirElementoLista(lista, info);

                break;
            case '2': // Remover
                if (!listaVazia(lista, true)) {
                    cout << "Informe o valor a ser REMOVIDO: ";
                    cin >> info;
                    removerElementoLista(lista, info);
                }
                break;
            case '3': // Exibir lista
                exibirLista(lista);
                break;
            case '4': // Pesquisar elemento
                if (!listaVazia(lista, true)) {
                    cout << "Informe o valor a ser PESQUISADO: ";
                    cin >> info;
                    pesquisarElementoLista(lista, info);
                }
                break;
            case '5': // Quantidade de elementos pares
                qtdPares(lista);
                break;
            case 'S':
                cout << "Saindo do sistema...\n\n";
                break;
            default:
                cout << "\nOpção INVÁLIDA!";
                break;
        }
    } while (menu != 'S');

    //    excluirLista(lista);    

    return 0;
}

char menuInicial() {
    char menu;
    cout << "\n\n========= MENU =========\n"
            "\n1 - Inserir elemento na Lista"
            "\n2 - Remover elemento da Lista"
            "\n3 - Exibir elementos da Lista"
            "\n4 - Pesquisar elemento na Lista"
            "\n5 - Quantidade de elementos pares na Lista"
            "\nS - Sair do sistema"
            "\n--> ";

    cin >> menu;
    menu = toupper(menu);

    return menu;
}