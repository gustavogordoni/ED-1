#include <iostream>
#include <locale>

using namespace std;

struct Funcionario {
    string nome;
    string cargo;
    double salario;
};

void cadastrar(Funcionario *f);
void exibir(Funcionario *f);

/*
Elabore um programa em C++ que crie uma struct para um
funcionário contendo nome, cargo e salário (válido).
Crie dinamicamente um registro para um funcionário.
Utilize funções para preencher as informações de cadastro
e outra para exibir as informações cadastradas.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Funcionario *f = new Funcionario;

    cadastrar(f);
    exibir(f);

    delete f;

    return 0;
}

void cadastrar(Funcionario *f) {
    cout << "Digite o nome: ";
    getline(cin, f->nome);

    cout << "Digite o cargo: ";
    getline(cin, f->cargo);

    do {
        cout << "Digite o salário: ";
        cin >> f->salario;
    } while (f->salario <= 0);
}

void exibir(Funcionario *f) {
    cout << "\nNome: " << f->nome
         << ", Cargo: " << f->cargo
         << ", Salário: " << f->salario << endl;
}
