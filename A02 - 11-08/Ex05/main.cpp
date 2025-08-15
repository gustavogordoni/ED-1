#include <iostream>

using namespace std;

struct Aluno{
    string nome;
    float nota;
    string disc;
};

void verificacaoAprovacao(Aluno*);

int main()
{
    Aluno cadAluno;
    Aluno *ptrAluno = &cadAluno;

    cout << "Informe o nome do aluno: ";
    cin >> ptrAluno->nome;

    do{
        cout << "Informe o valor da nota: ";
        cin >> ptrAluno->nota;
    }while(ptrAluno->nota<0 || ptrAluno->nota>100);

    cout << "Informe o nome da disciplina: ";
    cin >> ptrAluno->disc;

    verificacaoAprovacao(&cadAluno);

    return 0;
}

void verificacaoAprovacao(Aluno *ptr_aluno){
    if(ptr_aluno->nota >= 60){
        cout << "\nAluno " << ptr_aluno->nome << " está APROVADO em "<< ptr_aluno->disc <<".\n";
    }else{
        cout << "\nAluno " << ptr_aluno->nome << " está REPROVADO em "<< ptr_aluno->disc <<".\n";
    }
}
