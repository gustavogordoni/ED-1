#include <iostream>
#include "ExTAD.h"

using namespace std;

int main()
{
    cout << "Cálculo da esfera!\n" << endl;

    int opcao = 0;
    float raio = 0, volume = 0, area = 0;

    do{
        cout << endl << endl << "--- MENU ---" << endl
             << "1 - Receber Raio" << endl
             << "2 - Calcular Área" << endl
             << "3 - Calcular Volume" << endl
             << "4 - Exibir Raio" << endl
             << "5 - Exibir Área" << endl
             << "6 - Exibir o Volume" << endl
             << "9 - Sair do Menu" << endl << endl;
        cin >> opcao;

        switch(opcao){
            case 1:
                receberRaio(&raio);
                break;
            case 2:
                calcularArea(&raio, &area);
                break;
            case 3:
                calcularVolume(&raio, &volume);
                break;
            case 4:
                cout  << "O resultado do raio é: ";
                exibirResultado(&raio);
                break;
            case 5:
                cout  << "O resultado do área é: ";
                exibirResultado(&area);
                break;
            case 6:
                cout  << "O resultado do volume é: ";
                exibirResultado(&volume);
                break;
            case 9:
                cout  << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida!";
                break;
        }
    }while(opcao != 9);

    cout << endl;
    return 0;
}
