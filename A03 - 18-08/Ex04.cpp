#include <iostream>
#include <locale>
#define ANOATUAL 2025

using namespace std;

struct Funcionario{
    string nome;
    int anoInicial;
    string cargo;
    float salario;
};

void cadastrarFuncionario(Funcionario*);
void exibirFuncionario(Funcionario*);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Funcionario *func = new Funcionario;

    // Cadastrar
    cadastrarFuncionario(func);

    // Exibir
    exibirFuncionario(func);

    delete func;

    return 0;
}

void cadastrarFuncionario(Funcionario *func){
    cout << "Informe o nome do funcionário: ";
    cin >> func->nome;

    do{
        cout << "Informe o ano inicial do funcionário: ";
        cin >> func->anoInicial;
    }while(func->anoInicial > ANOATUAL);

    cout << "Informe o cargo do funcionário: ";
    cin >> func->cargo;

    do{
        cout << "Informe o salário do funcionário: ";
        cin >> func->salario;
    }while(func->salario < 0);
}


void exibirFuncionario(Funcionario *func){
    cout << "\n\n--- FUNCIONÁRIO: ---------";
    cout << "\nNome: "<< func->nome;
    cout << "\nAno inicial: "<< func->anoInicial;
    cout << "\nCargo: "<< func->cargo;
    cout << "\nSalário: R$"<< func->salario;
    cout << "\n\n";
}
