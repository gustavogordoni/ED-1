#include <iostream>

using namespace std;

/*
Utilize vetor alocado dinamicamente, função. Crie um procedimento para preencher
6 valores e armazená-los em um vetor. Exiba as informações e também a quantidade
de valores armazenados que são negativos (elabore outro procedimento para exibir).
*/

void preencherVet(float*, int);
void exibirVet(float*, int);
void verificarNegativos(float*, int);


int main()
{
	int qnt = 6;
	float *vet = new float[qnt] ();

	preencherVet(vet, qnt);
	exibirVet(vet, qnt);
	verificarNegativos(vet, qnt);

    return 0;
}

void preencherVet(float *vet, int qnt){
	cout << "\n--- Preenchimento dos valores: ---------\n";
	for(int i = 0; i < qnt; i++){
		cout << "Informe um valor para a posição " << i+1 << " do ponteiro: ";
		cin >> vet[i];
	}
}

void exibirVet(float *vet, int qnt){
	cout << "\n\n--- Exibição dos valores: ---------\n";
	for(int i = 0; i < qnt; i++){
		cout << "\nValor da posição " << i+1 << " do vetor: " << vet[i];
	}
}

void verificarNegativos(float *vet, int qnt){
	cout << "\n\n--- Quantidade de números negativos: ---------\n";
	int negativos = 0;
	for(int i = 0; i < qnt; i++){
		if(vet[i] < 0){
			negativos++;
		}
	}

	cout << negativos << endl;
}
