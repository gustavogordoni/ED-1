/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: gordoni
 *
 * Created on 17 de novembro de 2025, 15:26
 */

#include <cstdlib>
#include <iostream>
#include <locale>

#include "listaSimplesmenteEncadeada.h"

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
        int dado = 0;

        switch (menu) {
            case '1': // Inserir
                cout << "Informe o valor a ser INSERIDO: ";
                cin >> dado;
                inserirElementoLista(lista, dado);

                break;
            case '2': // Remover
                if (!listaVazia(lista, true)) {
                    cout << "Informe o valor a ser REMOVIDO: ";
                    cin >> dado;
                    removerElementoLista(lista, dado);
                }
                break;
            case '3': // Exibir lista
                exibirLista(lista);
                break;
            case '4': // Pesquisar elemento
                if (!listaVazia(lista, true)) {
                    cout << "Informe o valor a ser PESQUISADO: ";
                    cin >> dado;
                    pesquisarElementoLista(lista, dado);
                }
                break;
            case '5': // Quantidade de elementos
                //if(!listaVazia(lista, true)){
                qtdElementosLista(lista);
                //}
                break;
            case 'S':
                cout << "Saindo do sistema...\n\n";
                break;
            default:
                cout << "\nOpção INVÁLIDA!";
                break;
        }
    } while (menu != 'S');

    excluirLista(lista);
    return 0;
}

char menuInicial() {
    char menu;
    cout << "\n\n========= MENU =========\n"
            "\n1 - Inserir elemento na Lista"
            "\n2 - Remover elemento da Lista"
            "\n3 - Exibir elementos da Lista"
            "\n4 - Pesquisar elemento na Lista"
            "\n5 - Quantidade de elementos na Lista"
            "\nS - Sair do sistema"
            "\n--> ";

    cin >> menu;
    menu = toupper(menu);

    return menu;
}