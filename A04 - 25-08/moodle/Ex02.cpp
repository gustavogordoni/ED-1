#include <iostream>
#include <locale>

using namespace std;

void preencheVetor(int*, int);
void exibeVetor(int*, int);
void calcularSoma(int*, int, int*);

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int tam = 15;
	int vetor[tam], soma = 0;

	preencheVetor(vetor, tam);
	cout << "\n---";
	exibeVetor(vetor, tam);
	cout << "\n---";
	calcularSoma(vetor, tam, &soma);
	cout << "\n---";

    return 0;
}

void preencheVetor(int *ptr, int tam){
	for(int i = 0; i < tam; i++){
		cout << "Informe um número para a posição " << i+1 << " do vetor: ";
		cin >> ptr[i];
	}
}
void exibeVetor(int *ptr, int tam){
	for(int i = 0; i < tam; i++){
		cout << "\nValor de vetor na posição " << i+1 << ": " << ptr[i];
	}
}

void calcularSoma(int *ptr, int tam, int *soma){
	for(int i = 0; i < tam; i++){
		*soma += ptr[i];
	}

	cout << "\nO resultado da somas dos valores contidos no vetor é: " << *soma << endl;
}
