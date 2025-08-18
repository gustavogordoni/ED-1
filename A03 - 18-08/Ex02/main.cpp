#include <iostream>
#include <locale>

using namespace std;

void preencherVetor(int*, int, int);
void somarVetor(int*, int*, int*, int);
void exibirVetor(int*, int*, int*, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int tamVet=0;

    do{
        cout << "Informe o tamanho do vetor: ";
        cin >> tamVet;
    }while(tamVet < 1);

    int *vet01 = new (std::nothrow) int[tamVet];
    int *vet02 = new (std::nothrow) int[tamVet];

    cout << endl << endl;

    // Preencher vetor 01
    preencherVetor(vet01, tamVet, 1);
    cout << endl << endl;

    // Preencher vetor 02
    preencherVetor(vet02, tamVet, 2);
    cout << endl << endl;

    // Soma em vetor 03
    int *vetSoma = new (std::nothrow) int[tamVet];
    somarVetor(vetSoma, vet01, vet02, tamVet);

    // Exibe
    exibirVetor(vetSoma, vet01, vet02, tamVet);

    delete[] vet01;
    delete[] vet02;
    delete[] vetSoma;

    return 0;
}

void preencherVetor(int *vet, int tamVet, int id){
    for (int i=0; i < tamVet; i++){
        do{
            cout << "Valor entre 0 e 10 para o Vetor "<< id <<" na posição [" << i << "]: ";
            cin >> vet[i];
        }while(vet[i] < 0 || vet[i] > 10);
    }
}

void somarVetor(int *vetSoma, int *vet01, int *vet02, int tamVet){
    for (int i=0; i < tamVet; i++){
        vetSoma[i] = vet01[i] + vet02[i];
    }
}

void exibirVetor(int *vetSoma, int *vet01, int *vet02, int tamVet){
    cout << "\n- - - - - - - - - - - - \n";
    for (int i=0; i < tamVet; i++){
        cout << "Vetor 01 ["<< i <<"] = " << vet01[i] << endl;
    }
    cout << "- - - - - - - - - - - - \n";
    for (int i=0; i < tamVet; i++){
        cout << "Vetor 02 ["<< i <<"] = " << vet02[i] << endl;
    }
    cout << "- - - - - - - - - - - - \n";
    for (int i=0; i < tamVet; i++){
        cout << "Vetor Soma ["<< i <<"] = " << vetSoma[i] << endl;
    }
}

