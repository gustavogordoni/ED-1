#include <iostream>
#include <locale>
#define PI 3.14

using namespace std;
/*
Programa que receba valores referentes a 10 círculos. Crie uma struct com as
informações do círculo (raio, circunferência e área). Use alocação dinâmica para
criar o vetor de struct CÍRCULO.  Receba as informações, faça os cálculos e exiba
as informações na main()
*/

struct Circulo{
	float raio;
	float circunferencia;
	float area;
};

void preencherDados(Circulo*, int);
void calcularValores(Circulo*, int);
void exibirDados(Circulo*, int);

int main()
{
    setlocale(LC_ALL, "Portuguese");

	int qnt = 10;
	Circulo *circulo = new Circulo[qnt] ();

	preencherDados(circulo, qnt);
	calcularValores(circulo, qnt);
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

void calcularValores(Circulo *circulo, int qnt){
	for(int i = 0; i < qnt; i++){
		circulo[i].area = PI * (circulo[i].raio * circulo[i].raio);
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
