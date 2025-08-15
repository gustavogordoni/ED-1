#include <iostream>

using namespace std;

struct Animal{
    string nome;
    string especie;
    string raca;
    int idade;
};

void cadastrarAnimal(Animal*);
void exibirCadastro(Animal*);

int main() {
    Animal cadAnimal;

    cadastrarAnimal(&cadAnimal);
    exibirCadastro(&cadAnimal);

    return 0;
}

void cadastrarAnimal(Animal *cadAnimal){
    cout << "Informe o nome do animal: ";
    cin >> cadAnimal->nome;

    cout << "Informe a esp�cie do animal: ";
    cin >> cadAnimal->especie;

    cout << "Informe a ra�a do animal: ";
    cin >> cadAnimal->raca;

    cout << "Informe a idade do animal: ";
    cin >> cadAnimal->idade;
}

void exibirCadastro(Animal *cadAnimal){
    cout << "\n\nNome do animal: " << cadAnimal->nome;
    cout << "\nEsp�cie do animal: " << cadAnimal->especie;
    cout << "\nRa�a do animal: " << cadAnimal->raca;
    cout << "\nIdade do animal: " << cadAnimal->idade << endl << endl;
}
