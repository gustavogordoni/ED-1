#include <iostream>
#define LINHA 3
#define COLUNA 3

using namespace std;

/*
Escreva um programa em C++ que receba números e armazene-os em uma
matriz 4X4. Exiba os números contidos na matriz. Exiba a diagonal principal.
Depois exiba a última linha.
*/

int main()
{
    int soma = 0, matriz[LINHA][COLUNA] = {};

    for(int i=0; i<LINHA; i++){
            for(int j=0; j<COLUNA; j++){
                cout << "Informe um valor para a matriz na posição [" << i+1 << "],[" << j+1<< "]: ";
                cin >> matriz[i][j];
        }
    }

    cout << "\nMatriz Completa: \n";
    for(int i=0; i<LINHA; i++){
            for(int j=0; j<COLUNA; j++){
                cout << matriz[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nDiagonal Principal: \n";
    for(int i=0; i<LINHA; i++){
            for(int j=0; j<COLUNA; j++){
                    if(i == j){
                        cout << matriz[i][j] << "\t";
                    }else{
                        cout << "x\t";
                    }
        }
        cout << "\n";
    }

    cout << "\nÚltima Linha: \n";
        for(int j=0; j<COLUNA; j++){
            cout << matriz[LINHA-1][j] << "\t";
        }

    cout << endl << endl;

    return 0;
}
