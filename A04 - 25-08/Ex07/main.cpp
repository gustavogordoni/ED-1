#include <iostream>
#include <locale>
#define PI 3.14

using namespace std;
/*
Idem ao anterior, usando 4 procedimentos (um para pegar o raio, outro para calcular o diâmetro,
outro para calcular a área e outro para exibir as informações.
*/

struct Circulo{
	float raio;
	float circunferencia;
	float area;
};

void preencherDados(Circulo*, int);
void calcularArea(Circulo*, int);
void calcularCircunferencia(Circulo*, int);
void exibirDados(Circulo*, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int qnt = 10;
	Circulo *circulo = new Circulo[qnt] ();

	preencherDados(circulo, qnt);
	calcularArea(circulo, qnt);
	calcularCircunferencia(circulo, qnt);
	exibirDados(circulo, qnt);

    delete[] circulo;

	return 0;
}

void preencherDados(Circulo *circulo, int qnt){
	for(int i = 0; i < qnt; i++){
	  	cout << "\n---> "	<< i+1 << "° círculo\n";
		cout << "Informe o valor do raio do círculo " << i+1 << ": ";
		cin >> circulo[i].raio;
	}
}

void calcularArea(Circulo *circulo, int qnt){
	for(int i = 0; i < qnt; i++){
		circulo[i].area = PI * (circulo[i].raio * circulo[i].raio);
	}
}

void calcularCircunferencia(Circulo *circulo, int qnt){
	for(int i = 0; i < qnt; i++){
		circulo[i].circunferencia = 2 * PI * circulo[i].raio;		
	}
}


void exibirDados(Circulo *circulo, int qnt) {
    for(int i = 0; i < qnt; i++) {
        cout << "\nCírculo " << i+1 << ":";
        cout << "\n  Raio: " << circulo[i].raio;
        cout << "\n  Circunferência: " << circulo[i].circunferencia;
        cout << "\n  Área: " << circulo[i].area;
        cout << "\n-------------------------";
    }
    cout << endl;
}
