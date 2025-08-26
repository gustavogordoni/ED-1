#include <iostream>
#include <locale>

using namespace std;

/*
Escreva um programa em C++ que declare uma struct Pessoa (com nome, cpf e idade).
Crie uma instância dessa struct e um ponteiro para ela. Utilize o ponteiro para
preencher os dados da pessoa e exiba-os de ambas as formas de acesso (com * e  . , e com ->).
Modifique a idade via ponteiro e verifique a alteração na struct original.
*/

struct Pessoa {
    string nome;
    string cpf;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa pessoa;
    Pessoa *ptr = &pessoa;

    cout << "Digite o nome: ";
    getline(cin, ptr->nome);
    cout << "Digite o CPF: ";
    getline(cin, ptr->cpf);
    cout << "Digite a idade: ";
    cin >> ptr->idade;

    cout << "\nExibindo (via .): " << endl;
    cout << "Nome: " << pessoa.nome << ", CPF: " << pessoa.cpf << ", Idade: " << pessoa.idade << endl;

    cout << "\nExibindo (via ->): " << endl;
    cout << "Nome: " << ptr->nome << ", CPF: " << ptr->cpf << ", Idade: " << ptr->idade << endl;

    ptr->idade += 1;
    cout << "\nIdade após alteração via ponteiro: " << pessoa.idade << endl;

    return 0;
}
