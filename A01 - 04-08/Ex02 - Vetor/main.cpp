#include <iostream>
#define NUM 10

using namespace std;

/*
Elabore um programa em C++ que receba do usuário 10 números e armazene-
os em um vetor. Exiba os valores armazenados no vetor. Exiba também os
números em ordem inversa de armazenamento.
*/

int main()
{
    int vet[NUM] = {};

    for(int i=0; i<NUM; i++){
        cout << "Informe um valor para o vetor na posição " << i << ": ";
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
