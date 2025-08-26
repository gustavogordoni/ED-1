#include <iostream>
#include <locale>

using namespace std;

/*
Implemente um programa em C++ que demonstre o uso de ponteiros com strings.
Declare um nome e receba um nome e um ponteiro para esse nome.
Explique a diferença entre cout << nPtr; e cout << *nPtr; para um ponteiro de char.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[50] = {};
    cout << "Digite seu nome: ";
    cin.getline(nome, 50);

    char *nPtr = nome;

    cout << "\nnPtr (endereco de nome) = " << nPtr << endl;
    cout << "*nPtr (primeiro caractere) = " << *nPtr << endl;

    cout << "\nnPtr: exibe a string inteira\n";
    cout << "*nPtr: exibe apenas o primeiro caractere.\n";

    return 0;
}
