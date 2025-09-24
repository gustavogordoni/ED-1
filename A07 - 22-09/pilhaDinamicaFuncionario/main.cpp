#include <iostream>
#include "funcionario.h"

using namespace std;

char menuInicial();
char menuSaida();

int main()
{
    Pilha *topo = criarPilha();
    char menu;

    do{
        menu = menuInicial();

        switch(menu){
            case '1':
                if(!inserirPilha(topo)) cout << "\nErro ao cadastrar Funcionário!.\n";
                break;
            case '2':
                consultarTopo(topo);
                break;
            case '3':
                removerElemento(topo);
                break;
            case '0':
                cout << "Saindo do sistema...\n\n";
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }
    }while(menu != '0');

    liberarPilha(topo);

    return 0;
}

char menuInicial(){
    char menu;
    cout << "\n========= MENU =========\n"
            "\n1 - Inserir Funcionário na Pilha"
            "\n2 - Exibir Topo da Pilha"
            "\n3 - Remover Funcionário da Pilha"
            "\n0 - Sair do programa"
            "\n--> ";
    //cin.ignore();
    cin >> menu;

    menu = toupper(menu);

    return menu;
}
