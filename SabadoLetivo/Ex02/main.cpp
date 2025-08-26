#include <iostream>
#include <locale>

using namespace std;

/*
Dado o seguinte trecho de código, complete-o e exiba o valor e o endereço das variáveis x e y
(diretamente e via ponteiro), e o valor e endereço dos ponteiros ptr1 e ptr2. O objetivo é
verificar a saída para os valores de y:

int x=3, y=9, *ptrx, *ptry;
ptrx = &x;
ptry = nullptr;

// ... complete o código para exibir os valores e endereços de x,y, prtx, ptry.

ptry=&y;
*ptry=5;

// ... exiba os valores e endereços novamente
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x=3, y=9, *ptrx, *ptry;

    ptrx = &x;
    ptry = nullptr;

    cout << "Antes:" << endl;
    cout << "x = " << x << ", endereco de x = " << &x << ", via ptrx = " << *ptrx << endl;
    cout << "y = " << y << ", endereco de y = " << &y << endl;
    cout << "ptrx = " << ptrx << ", endereco de ptrx = " << &ptrx << endl;
    cout << "ptry = " << ptry << ", endereco de ptry = " << &ptry << endl;

    ptry = &y;
    *ptry = 5;

    cout << "\nDepois:" << endl;
    cout << "y = " << y << ", via ptry = " << *ptry << ", endereco y = " << &y << endl;
    cout << "ptrx = " << ptrx << ", ptry = " << ptry << endl;

    return 0;
}
