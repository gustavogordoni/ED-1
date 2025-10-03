#include <iostream>
#include "filaEstatica.h"
#include <locale>

using namespace std;

char menuInicial();

int main()
{
    char menu;
    setlocale(LC_ALL, "Portuguese");

    FILA *Fila = new FILA;
    criarFila(Fila);

    do{
        menu = menuInicial();

        switch(menu){
            case '1':
                inserirElemento(Fila);
                break;
            case '2':
                if(!filaVazia(Fila)){ // Não está vazia
                    exibirElemento(Fila->dados[Fila->inicio]);
                }
                break;
            case '3':
                if(!filaVazia(Fila)){ // Não está vazia
                    exibirElemento(Fila->dados[Fila->fim]);
                }
                break;
            case '4':
                removerElemento(Fila);
                break;
            case '5':
                exibirFila(Fila);
                break;
            case '6':
                exibirFilaReversa(Fila);
                break;
            case '7':
                maioresZero(Fila);
                break;
            case 'S':
                cout << "Saindo do sistema...\n\n";
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }
    }while(menu != 'S');

    return 0;
}

char menuInicial(){
    char menu;
    cout << "\n========= MENU =========\n"
            "\n1 - Inserir elemento na Fila"
            "\n2 - Exibir o primeiro elemento da Fila"
            "\n3 - Exibir o último elemento da Fila"
            "\n4 - Remover elemento da Fila"
            "\n5 - Exibir elementos da Fila"
            "\n6 - Exibir inversamente os elementos da Fila"
            "\n7 - Exibir elementos maiores que zero"
            "\nS - Sair do programa"
            "\n--> ";
    //cin.ignore();
    cin >> menu;

    menu = toupper(menu);

    return menu;
}
