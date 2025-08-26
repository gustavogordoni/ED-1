#include <iostream>
#include <locale>

using namespace std;

/*
Reescreva o exercício anterior utilizando funções:
uma função para preencher os vetores,
outra para obter a média entre os vetores e preencher o terceiro vetor.
Faça uma função que seja capaz de verificar qual o maior valor e o
menor valor obtido no terceiro vetor.
Não esqueça da função para exibir os valores do vetor.
Lembre-se de passar os vetores para as funções utilizando ponteiros.
*/

void preencherVetor(int *vet, int N, string nome);
void calcularProduto(int *v1, int *v2, int *v3, int N);
void exibirVetor(int *vet, int N, string nome);
void maiorMenor(int *vet, int N);

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
    exibirVetor(vet3, N, "\nVetor 3 (produto)");

    maiorMenor(vet3, N);

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
    for (int i=0; i<N; i++)
        cout << vet[i] << " ";

    cout << endl;
}


void maiorMenor(int *vet, int N) {
    int maior = vet[0], menor = vet[0];
    for (int i=1; i<N; i++) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    cout << "\nMaior valor do vetor: " << maior << endl;
    cout << "Menor valor do vetor: " << menor << endl;
}
