#include <iostream>
#include <locale>

using namespace std;

/*
    int *ptrNum = new int();

    int *ptrNum = new (str::nothrow) int; // retorno caso não consiga alocar;
    if(!ptrNum){}else{*ptrNum = 100; delete *ptrNum;}

    // VETOR -------------
    int *vetor = new int[3] --> valores são null
    int *vetor = new int[3] {} --> valores são 0
    int *vetor = new int[3] {1, 0, 6} --> valores são 1, 0, 6
    int **vetor = new int*[4] --> ponteiro de ponteiro (MATRIZ)

    delete[] vetor;

    // MATRIZ -------------
    int **p, N = 2, M = 3;
    p = new int*[N]

    for(int i=0; i < N; i++){
        p[i] = new int[M]
        for(j=0; j < N; j++){
            cin >> p[i][j]
        }
    }

    for(int j=0; j < M; j++){
        delete[] p[j];
    }
    delete p[]

    // STRUCT -------------
    struct Cadastro{
        string nome;
        int idade;
    }

    ...
    Cadastro *cad = new Cadastro;
    cad->nome = "";
    cad[0]->idade = 0;

    delete cad;
    ...

    Cadastro *cad2 = new Cadastro[3];
    for(int i = 0; i < 3; i++){
        cad2->nome = "";
        cad2->idade = 0;
        cad++;
    }
    OU
    for(int i = 0; i < 3; i++){
        cad[i].nome = "";
        cad[i].idade = 0;
    }
    delete[] cad2;

    // FUNÇÕES -------------
    int n = 3;
    Aluno *aluno = new Aluno[n];
    cadastrarAluno(aluno, n);
    exibirAluno(aluno, n);
    delete[] aluno;s
    ...

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    return 0;
}
