#include <iostream>
#define NUM 5

using namespace std;

/*
Escreva um programa em C++ que receba do usuário dados de um animal e
armazene em struct (nome do animal, raça, idade, nome do dono, telefone do
dono). Deverão ser cadastrados 5 animais. Exiba os dados dos 5 animais
cadastrados. Verifique qual pet é mais velho e exiba o nome dele e de seu dono.
*/

int main()
{
    int maiorIdade = 0, indiceVelho = 0;

    struct Dono{
        string nome;
        string telefone;
    }strDono[NUM];

    struct Animal{
        string nome;
        string raca;
        int idade;
        struct Dono dono;
    }strAnimal[NUM];

    for(int i=0; i<NUM; i++){
        cout << "\nANIMAL " << i+1 << " --------------------------";
        cout << "\nInforme o nome do animal: ";
        cin >> strAnimal[i].nome;

        cout << "Informe a raça do animal: ";
        cin >> strAnimal[i].raca;

        do{
            cout << "Informe a idade do animal: ";
            cin >> strAnimal[i].idade;
        }while(strAnimal[i].idade < 0);

        cout << "Informe o nome do dono do animal: ";
        cin >> strAnimal[i].dono.nome;

        cout << "Informe o telefone do dono do animal: ";
        cin >> strAnimal[i].dono.telefone;

        if(strAnimal[i].idade >= maiorIdade){
            maiorIdade = strAnimal[i].idade;
            indiceVelho = i;
        }
    }

    cout << "\n\nInformações dos animais:  --------------------------";
    for(int i=0; i<NUM; i++){
        cout << "\nNome: " << strAnimal[i].nome;
        cout << "\nRaça: " << strAnimal[i].raca;
        cout << "\nIdade: " << strAnimal[i].idade;
        cout << "\nNome do dono: " << strAnimal[i].dono.nome;
        cout << "\ntelefone do dono: " << strAnimal[i].dono.telefone;
        cout << endl;
    }

    cout << "\n\nPet mais velho é:  --------------------------";
    cout << "\nNome: " << strAnimal[indiceVelho].nome;
    cout << "\nNome do dono: " << strAnimal[indiceVelho].dono.nome;

    cout << endl << endl;

    return 0;
}
