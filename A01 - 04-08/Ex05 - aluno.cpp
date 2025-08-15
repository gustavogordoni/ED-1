#include <iostream>
#define ANOATUAL 2025

using namespace std;

/*
Escreva um programa em C++ que receba do usu�rio informa��es a respeito de
um aluno (nome do aluno, ano de nascimento v�lido, prontu�rio) � utilize struct.
Exiba as informa��es desse aluno. Calcule e exiba a idade do aluno em 2025
*/

int main()
{
    struct Aluno{
        string nome;
        int anoNascimento;
        string prontuario;
    }strAluno;

    cout << "Informe o nome do aluno: ";
    cin >> strAluno.nome;

    do{
        cout << "Informe o ano de nascimento do aluno: ";
        cin >> strAluno.anoNascimento;
    }while(strAluno.anoNascimento > ANOATUAL);

    cout << "Informe o prontu�rio do aluno: ";
    cin >> strAluno.prontuario;

    cout << "\nInforma��es do aluno: ";
    cout << "\nNome: " << strAluno.nome;
    cout << "\nData de nascimento: " << strAluno.anoNascimento;
    cout << "\nProntu�rio: " << strAluno.prontuario;
    cout << "\nIdade: " << (ANOATUAL - strAluno.anoNascimento) << " anos.";

    cout << endl << endl;

    return 0;
}
