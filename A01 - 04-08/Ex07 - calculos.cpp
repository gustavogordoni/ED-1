#include <iostream>
using namespace std;

/*
Programa que exibe o seguinte menu para o usu�rio: A - para receber e somar
dois n�meros e exibir o resultado. B � para receber tr�s n�meros, calcular e exibir
a multiplica��o entre eles. C � para receber dois n�meros e calcular e exibir a
divis�o entre eles (valide o divisor). S � para sair do menu e finalizar o programa.
O programa s� dever� ser finalizado ao informar a op��o S. Todos os c�lculos
(soma, multiplica��o e divis�o) devem ser elaborados atrav�s de
fun��o/procedimento. Utilize estrutura de repeti��o para poder voltar ao menu.
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
        cout << "\nA - para receber e somar dois n�meros e exibir o resultado.";
        cout << "\nB - para receber tr�s n�meros, calcular e exibir a multiplica��o entre eles.";
        cout << "\nC - para receber dois n�meros e calcular e exibir a divis�o entre eles (valide o divisor).";
        cout << "\nS - para sair do menu e finalizar o programa.\n";
        cout << "\nInforme a op��o: ";
        cin >> opcao;

        // & - endere�o de mem�ria
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
                cout << "\nResultado da multiplica��o: " << multiplicacao(numA, numB, numC) << endl;
                break;
            case 'C':
                parametros(numA, numB);
                if (numB != 0)
                    cout << "Resultado da divis�o: " << divisao(numA, numB) << endl;
                else
                    cout << "Divis�o por zero n�o permitida!" << endl;
                break;
            case 'S':
                cout << "Saindo da aplica��o..." << endl;
                break;
            default:
                cout << "Informe uma op��o v�lida!" << endl;
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
