#include <iostream>
#include <locale>

using namespace std;

/*
Escreva um programa que receba duas notas válidas (entre 0.0 e 100.0),
calcule a média e exiba o resultado. Utilize ponteiros para manipular
pelo menos uma das variáveis e exiba o valor da média através do ponteiro.
*/

void calcularMedia(float *ptr, float *n1, float *n2);

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float n1, n2, media;
    float *ptr = &media;

    cout << "Digite duas notas (0.0 a 100.0): \n\n";

    do{
        cout << "Informe a primeira nota: ";
        cin >> n1;
    }while(n1 < 0 || n1 > 100);

    do{
        cout << "Informe a segunda nota: ";
        cin >> n2;
    }while(n2 < 0 || n2 > 100);

    calcularMedia(ptr, &n1, &n2);

    return 0;
}

void calcularMedia(float *ptr, float *n1, float *n2){
    *ptr = (*n1 + *n2) / 2.0;

    cout << "\nA média das notas informadas é: " << *ptr << endl;
}
