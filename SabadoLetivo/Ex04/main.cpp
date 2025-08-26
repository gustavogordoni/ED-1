#include <iostream>
#include <locale>

using namespace std;

/* Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica.
 * Em seguida, leia do usuário seus valores, exiba os valores armazenados no vetor.
 * Depois mostre quantos dos números são pares e quantos são ímpares
 * */

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n;
    do{
        cout << "Digite o tamanho do vetor: ";
        cin >> n;
    }while(n < 1);

    int *vet = new int[n];
    int pares = 0, impares = 0;

    cout << "Digite " << n << " valores: ";
    for (int i=0; i<n; i++) {
        cin >> vet[i];

        if (vet[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    cout << "\nValores armazenados: ";

    for (int i=0; i<n; i++) cout << vet[i] << " ";
        cout << "\n\nPares: " << pares << ", Impares: " << impares << endl;

    delete[] vet;

    return 0;
}
