#include <iostream>
#include <locale>

/*
Aloque uma matriz 2x3 dinamicamente e receba informações (números positivos)
para compor a matriz. Faça função para preencher, função para exibir os valores.
Faça uma função para exibir a diagonal principal também.
*/

using namespace std;

void preencherMatriz(int **mat, int lin, int col);
void exibirMatriz(int **mat, int lin, int col);
void exibirDiagonal(int **mat, int lin, int col);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int lin=2, col=3;

    int **mat = new int*[lin];

    preencherMatriz(mat, lin, col);
    exibirMatriz(mat, lin, col);
    exibirDiagonal(mat, lin, col);

    for (int i=0; i<lin; i++)
        delete[] mat[i];

    delete[] mat;

    return 0;
}

void preencherMatriz(int **mat, int lin, int col) {
    cout << "Digite os valores positivos da matriz:\n";
    for (int i=0; i<lin; i++) {
        mat[i] = new int[col];
        for (int j=0; j<col; j++) {
            do {
                cout << "[" << i << "][" << j << "]: ";
                cin >> mat[i][j];
            } while (mat[i][j] < 0);
        }
    }
}

void exibirMatriz(int **mat, int lin, int col) {
    cout << "\nMatriz:\n";
    for (int i=0; i<lin; i++) {
        for (int j=0; j<col; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << endl;
    }
}

void exibirDiagonal(int **mat, int lin, int col) {
    cout << "\nDiagonal principal: \n";
    for (int i=0; i<lin; i++) {
        for (int j=0; j<col; j++) {
            if(i == j){
                cout << mat[i][j] << "\t";
            }else{
                cout << "x" << "\t";
            }
        }
        cout << endl;
    }
    cout << endl;
}
