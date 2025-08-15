#include <iostream>
#define TAMANHO 10

using namespace std;

void preencheVetor(int*, int*);
void exibeVetor(int*, int*);

int main(){
    int tam = TAMANHO;
    int vetor[tam];

    preencheVetor(vetor, &tam);
    exibeVetor(vetor, &tam);
    cout << endl << endl;
    return 0;
}

void preencheVetor(int *ptrVet, int *tam){
    cout << "\n\nPreenchimento:\n";
    for(int i=0; i<*tam; i++){
        cout << "Vetor["<< i << "] = ";
        cin >> ptrVet[i];
    }
}

void exibeVetor(int *ptrVet, int *tam){
    cout << "\n\nExibição:";
    for(int i=0; i<*tam; i++){
        cout << "\nVetor["<< i << "] = " << ptrVet[i];
    }
}
