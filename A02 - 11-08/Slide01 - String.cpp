#include <iostream>

using namespace std;

int main()
{
    int x = 2, y = 10, *ptr1, *ptr2;
    char letra = 'G', *ptrLetra;
    ptr1 = &x;
    ptr2 = nullptr;

    cout <<"Valor de ptr: "<< ptr1;
    cout <<"\nValor de x de forma indireta: "<< *ptr1 ;
    cout << "\nEndere�o de ptr1 :" << &ptr1;
    cout <<"\nValor de x: "<< x ;
    cout <<"\nEndere�o de x: "<< &x;

    ptr2 = &y;
    *ptr2 = 5;

    cout <<"\n\n\nValor de ptr2: "<< ptr2;
    cout <<"\nValor de y de forma indireta: "<< *ptr2 ;
    cout << "\nEndere�o de ptr2 :" << &ptr2;
    cout <<"\nValor de y: "<< y ;
    cout <<"\nEndere�o de y: "<< &y;

    cout << endl << endl;
}
