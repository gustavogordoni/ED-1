#include <iostream>
#define NUM 10

using namespace std;

/*
Elabore um programa em C++ que receba do usu�rio 10 n�meros e armazene-
os em um vetor. Exiba os valores armazenados no vetor. Exiba tamb�m os
n�meros em ordem inversa de armazenamento.
*/

int main()
{
    int vet[NUM] = {};

    for(int i=0; i<NUM; i++){
        cout << "Informe um valor para o vetor na posi��o " << i << ": ";
        cin >> vet[i];
    }

    cout << "\nOrdem direta: ";
    for(int i=0; i<NUM; i++){
       cout << vet[i] << " - ";
    }
    cout << "\nOrdem inversa: ";
    for(int i=NUM-1; i>=0; i--){
       cout << vet[i] << " - ";
    }

    cout << endl << endl;

    return 0;
}
