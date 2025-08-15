#include <iostream>
#define NUM 7

using namespace std;

/*
Escreva um programa em C++ para armazenar 7 números em um vetor. Calcule
e exiba a soma desses números. Verifique e exiba quantos desses números são
divisíveis por 8.
*/

int main()
{
    int soma = 0, vet[NUM] = {};
    int divOito = 0;

    for(int i=0; i<NUM; i++){
        cout << "Informe um valor para o vetor na posição " << i+1 << ": ";
        cin >> vet[i];

        soma += vet[i];
        if(vet[i] % 8 == 0){
            divOito++;
        }
    }

    cout << "\nSoma dos números informados: " << soma;
    cout << "\nNúmeros divisíveis por 8: " << divOito;

    cout << endl << endl;

    return 0;
}
