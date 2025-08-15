#include <iostream>

using namespace std;

int main()
{
    double nota, *ptrNota;
    string nome, disc, *ptrNome;
    ptrNota = &nota;
    ptrNome = &nome;

    cout << "Informe o nome do aluno: ";
    cin >> *ptrNome;

    do{
        cout << "Informe o valor da nota: ";
        cin >> *ptrNota;
    }while(*ptrNota<0 || *ptrNota>100);

    cout << "Informe o nome da disciplina: ";
    cin >> disc;

    if(*ptrNota >= 60){
        cout << "\nAluno " << *ptrNome << " está APROVADO em "<< disc <<".\n";
    }else{
        cout << "\nAluno " << *ptrNome << " está REPROVADO em "<< disc <<".\n";
    }

    return 0;
}
