#include <iostream>

using namespace std;

void preencheVetor(int*, int*)

int main(){
    int tam=10;
    int vet[tam];

    preencheVetor(vet, &tam);
    return 0;
}

void preencheVetor(int *ptr_vet, int *tam){
    for(int i=0, i<*tam, i++){
        cout << "Vetor["<< i << "] =";
        // isso
        cin >> ptr_vet[i];
        /* ou
        cin >> *ptr_vet;
        ptr_vet++;
        */

    }
}
