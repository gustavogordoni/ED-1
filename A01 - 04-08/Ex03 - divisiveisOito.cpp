#include <iostream>
#define NUM 7

using namespace std;

/*
Escreva um programa em C++ para armazenar 7 n�meros em um vetor. Calcule
e exiba a soma desses n�meros. Verifique e exiba quantos desses n�meros s�o
divis�veis por 8.
*/

int main()
{
    int soma = 0, vet[NUM] = {};
    int divOito = 0;

    for(int i=0; i<NUM; i++){
        cout << "Informe um valor para o vetor na posi��o " << i+1 << ": ";
        cin >> vet[i];

        soma += vet[i];
        if(vet[i] % 8 == 0){
            divOito++;
        }
    }

    cout << "\nSoma dos n�meros informados: " << soma;
    cout << "\nN�meros divis�veis por 8: " << divOito;

    cout << endl << endl;

    return 0;
}
