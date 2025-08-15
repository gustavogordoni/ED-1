#include <iostream>

using namespace std;

struct Pessoa{
    string nome;
    int idade;
};

int main() {
    Pessoa cadPessoa;
    cadPessoa.nome = "Pedro";
    cadPessoa.idade = 33;
    cout << "Nome: " << cadPessoa.nome << endl;
    cout << "Idade: "<< cadPessoa.idade <<endl;
    Pessoa *ptr_pessoa = &cadPessoa;
    // Pessoa *prt_pessoa;
    // ptr_pessoa = &cadPessoa;

    cout << "Nome (via ponteiro1): " << ptr_pessoa->nome << endl;
    // cout << "Nome (via ponteiro1): " << (*ptr_pessoa).nome << endl;
    cout << "Idade (via ponteiro): " << ptr_pessoa->idade << endl;
    ptr_pessoa->idade = 31;

    // 3 formar de acessar:
    cout << "Nova idade (via struct): " << cadPessoa.idade << endl;
    cout << "Nova idade (via ponteiro *): " << (*ptr_pessoa).idade << endl;
    cout << "Nova idade (via ponteiro ->): " << ptr_pessoa->idade << endl;
    return 0;
}

