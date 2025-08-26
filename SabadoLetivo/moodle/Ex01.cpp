#include <iostream>
using namespace std;

/*
Escreva um programa em C++ que declare uma variável inteira i e um ponteiro ptr para i.
Altere o valor de i utilizando o ponteiro e exiba o valor de i em diferentes etapas.
Após pegar o valor de i através do usuário. Após a manipulação através de ptr.
*/

int main() {

int i;
    int *ptr = &i;

    cout << "Digite um valor para i: ";
    cin >> i;

    cout << "\nValor de i (direto): " << i << endl;
    cout << "Valor de i (via ponteiro): " << *ptr << endl;

    *ptr = *ptr + 10;

    cout << "\nNovo valor de i (após alteração via ponteiro): " << i << endl;

	return 0;
}
