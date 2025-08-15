#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

void atualizaIdade(Pessoa *ptrCad);

int main() {
    Pessoa cadPessoa;
    cadPessoa.nome = "Pedro";
    cadPessoa.idade = 30;

    cout << "Idade atual: " << cadPessoa.idade << endl;
    atualizaIdade(&cadPessoa);
    cout << "Nova idade " << cadPessoa.idade << " anos.\n";

    return 0;
}

void atualizaIdade(Pessoa *ptrCad){
    ptrCad->idade +=1;
}
