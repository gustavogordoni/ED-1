#include <iostream>
#include <cmath>
#include "ExTAD.h"

using namespace std;

void receberRaio(float *ptrRaio){
    do{
        //if(*ptrRaio <= 0) cout << "Informe um valor superior a ZERO!";
        cout << "\nInforme o valor do Raio: ";
        cin >> *ptrRaio;
    }while(*ptrRaio <= 0);
}

void calcularArea(float *ptrRaio, float *ptrArea){
    if(*ptrRaio == 0){
        cout << "\nVocê deve informar um Raio primeiro!";
    }else{
        *ptrArea = 4 * M_PI * pow(*ptrRaio, 2);
    }
}

void calcularVolume(float *ptrRaio, float *ptrVolume){
    // *ptrVolume = (4 * M_PI * pow(*ptrRaio, 3)) / 3.0;
    if(*ptrRaio == 0){
        cout << "\nVocê deve informar um Raio primeiro!";
    }else{
        *ptrVolume = (4/3.0) * M_PI * pow(*ptrRaio, 3);
    }
}

void exibirResultado(float *ptrResult){
    if(*ptrResult == 0){
        cout << "\nVocê deve realizar os cálculos primeiro!";
    }else{
        cout << *ptrResult;
    }

} // Exibe áriea
