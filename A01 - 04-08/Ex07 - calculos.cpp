#include <iostream>
using namespace std;

/*
Programa que exibe o seguinte menu para o usuário: A - para receber e somar
dois números e exibir o resultado. B – para receber três números, calcular e exibir
a multiplicação entre eles. C – para receber dois números e calcular e exibir a
divisão entre eles (valide o divisor). S – para sair do menu e finalizar o programa.
O programa só deverá ser finalizado ao informar a opção S. Todos os cálculos
(soma, multiplicação e divisão) devem ser elaborados através de
função/procedimento. Utilize estrutura de repetição para poder voltar ao menu.
*/

float soma(float, float);
float multiplicacao(float, float, float);
float divisao(float, float);
void parametros(float&, float&);

int main()
{
    char opcao;
    float numA, numB, numC;

    do {
        cout << "\n--- MENU --------------------------------------------------------";
        cout << "\nA - para receber e somar dois números e exibir o resultado.";
        cout << "\nB - para receber três números, calcular e exibir a multiplicação entre eles.";
        cout << "\nC - para receber dois números e calcular e exibir a divisão entre eles (valide o divisor).";
        cout << "\nS - para sair do menu e finalizar o programa.\n";
        cout << "\nInforme a opção: ";
        cin >> opcao;

        // & - endereço de memória
        // * - valor de
        //

        switch(toupper(opcao)) {
            case 'A':
                parametros(numA, numB);
                cout << "Resultado da soma: " << soma(numA, numB) << endl;
                break;
            case 'B':
                cout << "\nInforme o primeiro valor: ";
                cin >> numA;
                cout << "Informe o segundo valor: ";
                cin >> numB;
                cout << "Informe o terceiro valor: ";
                cin >> numC;
                cout << "\nResultado da multiplicação: " << multiplicacao(numA, numB, numC) << endl;
                break;
            case 'C':
                parametros(numA, numB);
                if (numB != 0)
                    cout << "Resultado da divisão: " << divisao(numA, numB) << endl;
                else
                    cout << "Divisão por zero não permitida!" << endl;
                break;
            case 'S':
                cout << "Saindo da aplicação..." << endl;
                break;
            default:
                cout << "Informe uma opção válida!" << endl;
        }
    } while (toupper(opcao) != 'S');

    return 0;
}

void parametros(float &a, float &b) {
    cout << "\nInforme o primeiro valor: ";
    cin >> a;
    cout << "Informe o segundo valor: ";
    cin >> b;
}

float soma(float a, float b) {
    return a + b;
}

float multiplicacao(float a, float b, float c) {
    return a * b * c;
}

float divisao(float a, float b) {
    return a / b;
}
