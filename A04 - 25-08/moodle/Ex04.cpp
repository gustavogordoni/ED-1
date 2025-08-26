#include <iostream>
#include <locale>

using namespace std;

void preencherVetor(float* vetor, int qnt);
void exibirVetor(float* vetor, int qnt);
void verificarVetor(float* vetor, int qnt);


int main()
{
    setlocale(LC_ALL, "Portuguese");

/*
    Utilize vetor e alocação dinâmica. Receba 10 números e os armazene em um vetor
    alocado dinamicamente. Exiba as informações e também exiba os números contidos no vetor que são maiores que 13.
*/

	int qnt = 3;

	float *vetor = new float[qnt] ();

	preencherVetor(vetor, qnt);
	cout << endl;
	exibirVetor(vetor, qnt);
	cout << endl;
    verificarVetor(vetor, qnt);


	delete[] vetor;

    return 0;
}

void preencherVetor(float *vetor, int qnt){
	cout << "\n--- Preenchimento dos valores: ---------\n";
	for(int i = 0; i < qnt; i++){
		cout << "Informe um valor para a posição " << i+1 << " do ponteiro: ";
		cin >> vetor[i];
	}

}

void exibirVetor(float *vetor, int qnt){
	cout << "\n\n--- Exibição dos valores: ---------\n";
	for(int i = 0; i < qnt; i++){
		cout << "\nValor da posição " << i+1 << " do vetor: " << vetor[i];
	}
}

void verificarVetor(float *vetor, int qnt){
	cout << "\n\n--- Números superiores a 13: ---------\n";
	for(int i = 0; i < qnt; i++){
		if(vetor[i] > 13){
			cout << vetor[i] << endl;
		}
	}
}
