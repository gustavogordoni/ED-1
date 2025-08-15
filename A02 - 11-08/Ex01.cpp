#include <iostream>

using namespace std;

void soma(int*, int*, int*);

int main(){
    int x, y, r = 0;
    cout << "Informe dois valores para serem somados: \n";
    cin >> x >> y;

    soma(&x, &y, &r);

    return 0;
}
void soma(int *ptr_x,int *ptr_y, int *ptr_r){
    *ptr_r = *ptr_x + *ptr_y;

    cout << "\nValor da soma: " << *ptr_r << endl << endl;
}
