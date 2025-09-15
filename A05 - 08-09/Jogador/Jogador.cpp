#include <iostream>
#include "Jogador.h"

using namespace std;

void preencherCadastro(Jogador *cad, int qnt){
    cout << "--------------------"
         << "\nCADASTRO\n\n";

    for(int i=0; i < qnt; i++){
        cout << "Cadastro do " << i+1 << "° jogador: ";

        cout << "\nNome: ";
        getline(cin, cad[i].nome);

        cout << "\nPosição: ";
        getline(cin, cad[i].posicao);

        do{
            cout << "\nPartidas jogadas: ";
            cin >> cad[i].jogo;
        }while(cad[i].jogo < 0);

        cin.ignore(); // depois que coleta um valor inteiro.

        if(cad[i].jogo > 0){
            do{
                cout << "\nGols marcados: ";
                cin >> cad[i].gol;
                cin.ignore(); // depois que coleta um valor inteiro.
            }while(cad[i].gol < 0);
        }else cad[i].gol = 0;

        cout << "\n--------------------" << endl;
    }
}

void exibirCadastro(Jogador *cad, int qnt){
    cout << "EXIBIÇÃO\n";
    for(int i=0; i < qnt; i++){
        cout << "\nInformações do " << i+1 << "° jogador: ";
        cout << "\nNome: " << cad[i].nome
             << "\nPosição: " << cad[i].posicao
             << "\nPartidas: " << cad[i].jogo
             << "\nGols: " << cad[i].gol
             << "\n--------------------" << endl;
    }
}

void totalGols(Jogador *cad, int qnt){
    for(int i=0; i < qnt; i++){

    }
}
