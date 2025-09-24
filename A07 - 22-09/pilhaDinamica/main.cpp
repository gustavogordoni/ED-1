#include <iostream>
#include "pilhaDinamica.h"

using namespace std;

int main()
{
    char opc;

    Pilha *topo = criarPilha();

    do{
        cout << "\n\n";
        cout << "Informe a opção desejada:"
             << "\n1 - Inserir um elemento na pilha."
             << "\n2 - Exibir o valor do topo da pilha."
             << "\n3 - Remover um elemento do topo da pilha."
             << "\n0 - Sair do menu."
             << "\n--> ";
        //cin.ignore();
        cin >> opc;

        switch(opc){
            case '1':
                inserirElemento(topo);
                break;
            case '2':
                exibirElemento(topo);
                break;
            case '3':
                removerElemento(topo);
                break;
            case '0':
                cout << "Saindo do programa...";
                excluirPilha(topo);
                break;
            default:
                cout << "Opção inválida!";
                break;
        }
        cout << "\n---------------------";
    }while(opc != '0');

    return 0;
}
