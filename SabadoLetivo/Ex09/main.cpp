#include <iostream>
#include <locale>

using namespace std;

/*
Elabore um programa que receba 15 números (valores entre 0.0 e 10.0) e
os armazene em um vetor.
Crie uma função para armazenar esses números no vetor e outra função
para exibir as informações contidas nele.
O vetor deverá ser passado para as funções utilizando ponteiros.
*/

void armazenar(float *vetor, int n);
void exibir(float *vetor, int n);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int N=15;
    float vetor[N];

    armazenar(vetor, N);
    exibir(vetor, N);

    return 0;
}

void armazenar(float *vetor, int n) {
    cout << "Digite " << n << " valores (0.0 a 10.0):\n\n";
    for (int i=0; i<n; i++) {
        do{
            cout << "Informe o " << i+1 << "° número: ";
            cin >> vetor[i];
        }while(vetor[i] < 0 || vetor[i] > 10);
    }
}

void exibir(float *vetor, int n) {
    cout << "\nValores armazenados: ";
    cout << " \t ";
    for (int i=0; i<n; i++) {
        cout << vetor[i] << " \t ";
    }
    cout << endl;
}
