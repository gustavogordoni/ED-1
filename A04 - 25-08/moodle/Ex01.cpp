#include <iostream>
#include <locale>

using namespace std;

int calcularSomaTriplo(int*, int*);


int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1 = 0, n2 = 0;

    cout << "Informe o primeiro valor inteiro: ";
    cin >> n1;

    cout << "Informe o segundo valor inteiro: ";
    cin >> n2;

    cout << "A soma do triplo de cada número é: " << calcularSomaTriplo(&n1, &n2) << endl;

    return 0;
}

int calcularSomaTriplo(int *ptrN1, int *ptrN2){
		return (*ptrN1 * 3) + (*ptrN2 * 3);
}
