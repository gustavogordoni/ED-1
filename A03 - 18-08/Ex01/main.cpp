#include <iostream>
#include <locale>

using namespace std;

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
    for (int i=0; i < tamVet; i++){
        do{
            cout << "Valor entre 0 e 10 para o Vetor 1 na posição [" << i << "]: ";
            cin >> vet01[i];
        }while(vet01[i] < 0 || vet01[i] > 10);
    }

    cout << endl << endl;

    // Preencher vetor 02
    for (int i=0; i < tamVet; i++){
        do{
            cout << "Valor entre 0 e 10 para o Vetor 2 na posição [" << i << "]: ";
            cin >> vet02[i];
        }while(vet02[i] < 0 || vet02[i] > 10);
    }

    // Soma em vetor 03
    int *vetSoma = new (std::nothrow) int[tamVet];
    for (int i=0; i < tamVet; i++){
        vetSoma[i] = vet01[i] + vet02[i];
    }

    cout << "\n\n- - - - - - - - - - - - \n";
    // Exibe
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

    delete[] vet01;
    delete[] vet02;
    delete[] vetSoma;

    return 0;
}
