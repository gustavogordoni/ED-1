#ifndef JOGADOR_H_INCLUDED
#define JOGADOR_H_INCLUDED
#include <iostream>

using namespace std;

struct Jogador{
    string nome, posicao;
    int gol, jogo;
};

void preencherCadastro(Jogador *cad, int qnt);
void exibirCadastro(Jogador *cad, int qnt);
void totalGols(Jogador *cad, int qnt);


#endif // JOGADOR_H_INCLUDED
