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

void cadastrarFuncionario(Funcionario*, int);
void exibirFuncionario(Funcionario*, int);
void maiorSalario(Funcionario*, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int qntFunc;

    do{
        cout << "Informe a quantidade de funcionários: ";
        cin >> qntFunc;

    }while(qntFunc < 0);

    Funcionario *func = new Funcionario[qntFunc];

    // Cadastrar
    cadastrarFuncionario(func, qntFunc);

    // Exibir
    exibirFuncionario(func, qntFunc);

    // Maior salário
    maiorSalario(func, qntFunc);

    delete[] func;

    return 0;
}

void cadastrarFuncionario(Funcionario *func, int qntFunc){
    for (int i=0; i < qntFunc; i++){
        cout << "\n\nInforme o nome do funcionário "<< i+1 << ": ";
        cin >> func[i].nome;

        do{
            cout << "Informe o ano inicial do funcionário "<< i+1 << ": ";
            cin >> func[i].anoInicial;
        }while(func[i].anoInicial > ANOATUAL);

        cout << "Informe o cargo do funcionário "<< i+1 << ": ";
        cin >> func[i].cargo;

        do{
            cout << "Informe o salário do funcionário "<< i+1 << ": ";
            cin >> func[i].salario;
        }while(func[i].salario < 0);
    }
}

void exibirFuncionario(Funcionario *func, int qntFunc){
    for (int i=0; i < qntFunc; i++){
        cout << "\n\n--- FUNCIONÁRIO "<< i+1 <<": ---------";
        cout << "\nNome: "<< func[i].nome;
        cout << "\nAno inicial: "<< func[i].anoInicial;
        cout << "\nCargo: "<< func[i].cargo;
        cout << "\nSalário: R$"<< func[i].salario;
        cout << "\n\n";
    }
}

void maiorSalario(Funcionario *func, int qntFunc){
    Funcionario maiorSal = {"", 0, "", 0.0};

    for (int i=0; i < qntFunc; i++){
        if(func[i].salario > maiorSal.salario){
            maiorSal = func[i];
        }
    }
    cout << "\n\nO funcionário com o maior salário é: " << maiorSal.nome << " com R$"<< maiorSal.salario << endl << endl;
}

