#include <iostream>
#include <cstring>

using namespace std;

// static_cast<void*> (&letra)
// endereço de memória de uma letra

int main()
{   string nome = "Estrutura";
    string *nomePtr = &nome;

    *nomePtr += " de Dados 1";
    cout << "Nome: "<< nome;

    cout << "\n\n-----------------------------\n\n";

    char nome2[100];
    char *nPtr = nome2;
    strcpy(nome2,"Aula");
    cout << nome2 << endl;
    strcat(nome2," Ponteiro");
    cout << nome2 << endl;
    cout << nPtr << endl;
    cout << *nPtr << endl;
}
