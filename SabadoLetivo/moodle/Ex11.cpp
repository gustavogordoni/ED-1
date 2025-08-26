#include <iostream>
#include <locale>

using namespace std;

/*
 Elabore um programa que peça para o usuário um valor inteiro (N)
 referente ao tamanho dos vetores que devem ser alocados dinamicamente.
 Peça ao usuário que informe os valores para cada um (valores válidos
 entre -10 e 0). Crie e construa um terceiro vetor (também alocado dinamicamente)
 que seja o resultado da multiplicação dos dois anteriores.
 Exiba os números contidos em cada um dos vetores.
*/

void preencherVetor(int *vet, int N, string nome);
void calcularProduto(int *v1, int *v2, int *v3, int N);
void exibirVetor(int *vet, int N, string nome);

int main()
{
    setlocale(LC_ALL, "Portuguese");

 int N;
    cout << "Digite o tamanho dos vetores: ";
    cin >> N;

    int *vet1 = new int[N];
    int *vet2 = new int[N];
    int *vet3 = new int[N];

    preencherVetor(vet1, N, "1");
    preencherVetor(vet2, N, "2");

    calcularProduto(vet1, vet2, vet3, N);

    cout << "\n--- Resultados ---\n";
    exibirVetor(vet1, N, "Vetor 1");
    exibirVetor(vet2, N, "Vetor 2");
    exibirVetor(vet3, N, "Vetor 3 (produto)");

    delete[] vet1;
    delete[] vet2;
    delete[] vet3;

    return 0;
}

void preencherVetor(int *vet, int N, string nome) {
    cout << "\nPreencha o vetor " << nome << " (valores entre -10 e 0):\n";
    for (int i=0; i<N; i++) {
        do {
            cout << "Informe o valor para a " << i+1 << "° posição: ";
            cin >> vet[i];
        } while (vet[i] < -10 || vet[i] > 0);
    }
}

void calcularProduto(int *v1, int *v2, int *v3, int N) {
    for (int i=0; i<N; i++) {
        v3[i] = v1[i] * v2[i];
    }
}

void exibirVetor(int *vet, int N, string nome) {
    cout << nome << ": ";
    for (int i=0; i<N; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}
