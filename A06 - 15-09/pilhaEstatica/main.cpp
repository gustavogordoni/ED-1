#include <iostream>
#include "pilhaEstatica.h"

using namespace std;

int main()
{
    int opc, qnt = 5;

    Pilha pilha;
    criarPilha(&pilha);

    do{
        cout << "\n\n";
        cout << "Informe a opção desejada:"
             << "\n1 - Inserir um elemento na pilha."
             << "\n2 - Exibir o valor do topo."
             << "\n3 - Remover um elemento da pilha."
             << "\n0 - Sair do menu."
             << "\n--> ";
        cin >>  opc;

        switch(opc){
            case 1:
                preencherElemento(&pilha, qnt);
                break;
            case 2:
                exibirElemento(&pilha);
                break;
            case 3:
                removerElemento(&pilha);
                break;
            case 0:
                cout << "Saindo do programa...";
                break;
            default:
                cout << "Opção inválida!";
                break;
        }
    }while(opc != 0);

    return 0;
}
