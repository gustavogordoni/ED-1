#include <iostream>
#define NUM 5

using namespace std;

/*
Escreva um programa em C++ para armazenar 5 n�meros positivos em um
vetor. Exiba todos os n�meros
*/

int main()
{
    int vet[NUM];

    for(int i=0; i<NUM; i++){
        do{
            cout << "Informe um valor para o vetor na posi��o " << i+1 << ": ";
            cin >> vet[i];
        }while(vet[i] < 0);
    }

    for(int i=0; i<NUM; i++){
       cout << vet[i] << " - ";
    }

    return 0;
}
