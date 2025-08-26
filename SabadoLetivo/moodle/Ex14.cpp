#include <iostream>
#include <locale>

using namespace std;

/*
A partir do exercício anterior, elabore um programa que
permita o cadastro de 7 funcionários. E Elabore uma
terceira função para que seja exibido o nome do
funcionário que recebe o menor salário, e qual seu cargo.
*/

struct Funcionario {
    string nome;
    string cargo;
    double salario;
};

void cadastrar(Funcionario *f);
void exibir(Funcionario *f);
void menorSalario(Funcionario *f, int N);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N = 7;
    Funcionario *funcs = new Funcionario[N];

    for (int i=0; i<N; i++) {
        cout << "\n--- Cadastro funcionario " << i+1 << " ---\n";
        cadastrar(&funcs[i]);
    }

    cout << "\n--- Funcionarios cadastrados ---\n";
    for (int i=0; i<N; i++)
        exibir(&funcs[i]);

    cout << "\n--- Menor funcionário ---\n";
    menorSalario(funcs, N);

    delete[] funcs;

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

     cin.ignore();
}

void exibir(Funcionario *f) {
    cout << "Nome: " << f->nome
         << ", Cargo: " << f->cargo
         << ", Salário: " << f->salario << endl;
}

void menorSalario(Funcionario *f, int N) {
    Funcionario menor = f[0];
    for (int i=1; i<N; i++) {
        if (f[i].salario < menor.salario) menor = f[i];
    }
    cout << "Menor salário: " << menor.nome
         << " (" << menor.cargo << "), R$ " << menor.salario << endl;
}
