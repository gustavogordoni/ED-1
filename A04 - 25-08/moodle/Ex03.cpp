#include <iostream>
#include <locale>

using namespace std;

struct User{
	string nome;
	string cpf;
	int idade;
	string sexo;
};

void preencherUser(User*);
void exibirUser(User*);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    User user;

	preencherUser(&user);
	exibirUser(&user);

	cout << endl << endl;

    return 0;
}

void preencherUser(User *user){
    cout << "Informe o nome do usuário: ";
    cin >> user->nome;

    cout << "Informe o CPF do usuário: ";
    cin >> user->cpf;

    cout << "Informe a idade do usuário: ";
    cin >> user->idade;

    cout << "Informe o sexo do usuário: ";
    cin >> user->sexo;

}

void exibirUser(User *user){
    cout << "\n--- FUNCIONÁRIO ------------";
    cout << "\nNome: " << user->nome;
    cout << "\nCPF: " << user->cpf;
    cout << "\nIdade: " << user->idade;
    cout << "\nSexo: " << user->sexo;
}
