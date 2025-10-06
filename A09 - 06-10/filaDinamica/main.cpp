/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: gordoni
 *
 * Created on 6 de outubro de 2025, 07:18
 */

#include <iostream>
#include <cstdlib>
#include <locale.h>
#include "filaDinamica.h"

using namespace std;

char menuInicial();

/*
 * 
 *//* 
 * File:   filaDinamica.cpp
 * Author: gordoni
 *
 * Created on 6 de outubro de 2025, 07:19
 */

int main(int argc, char** argv) {

    char menu;
    setlocale(LC_ALL, "Portuguese");

    Fila *fila = criarFila();

    do {
        menu = menuInicial();

        switch (menu) {
            case '1': // Inserir
                inserirElemento(fila);
                break;
            case '2': // Remover
                removerElemento(fila);
                break;
            case '3': // Exibir o primeiro
                exibirPrimeiroElemento(fila);
                break;
            case '4': // Exibir todos
                exibirFila(fila);
                break;
            case '5': // Exibir o ultimo
                exibirUltimoElemento(fila);
                break;
            case '6': // Exibir o primeiro
                exibirFilaInversa(fila);
                break;
            case '7': // Quantidade elemetos
                quantidadeElementos(fila);
                break;
            case 'S':
                cout << "Saindo do sistema...\n\n";
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }
    } while (menu != 'S');

    excluirFila(fila);
    return 0;
}

char menuInicial() {
    char menu;
    cout << "\n========= MENU =========\n"
            "\n1 - Inserir elemento na Fila"
            "\n2 - Remover elemento da Fila"
            "\n3 - Exibir o primeiro elemento da Fila"
            "\n4 - Exibir elementos da Fila"
            "\n5 - Exibir último elemento"
            "\n6 - Exibir fila inversa"
            "\n7 - Exibir quantidade de elementos da Fila"
            "\nS - Sair do programa"
            "\n--> ";
    //cin.ignore();
    cin >> menu;

    menu = toupper(menu);

    return menu;
}
