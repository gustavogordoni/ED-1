#include <iostream>
#include "listaDuplaProf.h"

using namespace std;
char menuInicial();
char menuSaida();

int main(){    
    char menu;
    int inf;
    Lista* lista = criarLista();
    
    do{
        menu=menuInicial();
        switch(menu){
        case '1':
            cout << "Informe o elemento a ser inserido na lista: ";
            cin >> inf;
            inserirElementoListaDupla(lista, inf);
            break;
        case '2':
            cout << "Informe o elemento a ser removido da lista: ";
            cin >> inf;
            removerElementoListaDupla(lista, inf);
            break;
       case '3':
            exibirElementosListaDupla(lista);
            break;
        case '4':
           // verificar se um determinado elemento est� na lista
            cout << "Informe o elemento a ser verificado na lista: ";
            cin >> inf;
            consultarElementoListaDupla(lista,inf);
            break;
        case 'S': cout <<"Saindo do programa!\n"; break;
        default: cout<< "Op��o inv�lida!";
        }
        cout<<"\n-------------------\n\n";
    }while(menu!='S');
    excluirListaDupla(lista);
    return 0;
}
char menuInicial(){
    char menu;
    cout <<"\n --------- Menu --------\n"
            "1 - para inserir um elemento na lista ordenada dupla\n"
            "2 - para remover um elemento da lista ordenada dupla\n"
            "3 - exibir elementos cadastrados\n"
            "4 - verificar se uma informa��o est� na lista dupla.\n"
            "S - sair do menu.\n"
            "--> ";
    fflush(stdin);
    cin>>menu;
    menu = toupper(menu);
    return menu;
}