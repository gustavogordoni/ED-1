#include <iostream>
#include <locale>

using namespace std;

/*
Elabore um programa que receba informações do exercício
anterior (nome, idade e cpf) e armazene em uma struct chamada Pessoa.
Crie uma função cadastrarPessoa(Pessoa *cadPessoa) para receber
os dados e uma função exibirCadastro(Pessoa *cadPessoa) para exibir os dados.
O programa deve cadastrar 4 pessoas.
*/

struct Pessoa {
    string nome;
    string cpf;
    int idade;
};

void cadastrarPessoa(Pessoa *cadPessoa);
void exibirCadastro(Pessoa *cadPessoa);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qnt = 4;
    Pessoa pessoas[qnt];

    for (int i=0; i<qnt; i++) {
        cout << "\n--- Cadastro da pessoa " << i+1 << " ---" <<endl;
        cadastrarPessoa(&pessoas[i]);
    }

    cout << "\n--- Exibindo cadastros: ---" << endl;
    for (int i=0; i<qnt; i++) {
        exibirCadastro(&pessoas[i]);
    }

    return 0;
}

void cadastrarPessoa(Pessoa *cadPessoa) {
    cout << "Digite o nome: ";
    getline(cin, cadPessoa->nome);
    cout << "Digite o CPF: ";
    getline(cin, cadPessoa->cpf);
    cout << "Digite a idade: ";
    cin >> cadPessoa->idade;
    cin.ignore();
}

void exibirCadastro(Pessoa *cadPessoa) {
    cout << "Nome: " << cadPessoa->nome
         << ", CPF: " << cadPessoa->cpf
         << ", Idade: " << cadPessoa->idade << endl;
}
