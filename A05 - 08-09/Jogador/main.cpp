#include <iostream>
#include "Jogador.h"

using namespace std;

int main()
{
    int qnt = 7; // 7
    Jogador *cad = new Jogador[qnt];

    preencherCadastro(cad, qnt);
    exibirCadastro(cad, qnt);

    delete[] cad;

    return 0;
}
