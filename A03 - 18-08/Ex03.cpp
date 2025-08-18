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


int main()
{
    setlocale(LC_ALL, "Portuguese");
    Funcionario *func = new Funcionario;

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

    cout << "\n\n--- FUNCIONÁRIO: ---------";
    cout << "\nNome: "<< func->nome;
    cout << "\nAno inicial: "<< func->anoInicial;
    cout << "\nCargo: "<< func->cargo;
    cout << "\nSalário: R$"<< func->salario;
    cout << "\n\n";

    delete func;

    return 0;
}
