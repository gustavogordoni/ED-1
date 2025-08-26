#include <iostream>
#include <locale>

using namespace std;

void pegaValor(int*);
void exibeValor(int*);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int x = 0;

    pegaValor(&x);
    exibeValor(&x);

    return 0;
}

void pegaValor(int *ptr){
    cout << "Informe um valor: ";
    cin >> *ptr;
}

void exibeValor(int *ptr){
    cout << *ptr;
}

