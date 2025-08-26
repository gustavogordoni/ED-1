#include <iostream>
#include <locale>

using namespace std;

/*
Crie uma função trocaValor() que receba dois ponteiros para
inteiros como parâmetros e troque os valores das variáveis para as
quais eles apontam. Na função main(), declare duas variáveis, chame a
função e exiba os valores antes e depois da troca. Compare o resultado
com uma função que recebesse os valores por cópia.
*/

void trocaValor(int *a, int *b);
void trocaCopia(int a, int b);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=10, y=20;
    cout << "Antes da troca: x = " << x << ", y = " << y << endl;

    trocaValor(&x, &y);
    cout << "\n\nDepois da troca por ponteiro: x = " << x << ", y = " << y << endl;

    trocaCopia(x, y);
    cout << "\nDepois da função por cópia: x = " << x << ", y = " << y << endl;

    return 0;
}

void trocaValor(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void trocaCopia(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "\nDentro da função por cópia: a = " << a << ", b = " << b << endl;
}
