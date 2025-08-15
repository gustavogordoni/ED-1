#include <iostream>

using namespace std;

void troca(int*, int*);

int main(){
    int x = 10, y = 3;
    cout << "\nx = " << x;
    cout << "\ny = " << y;

    troca(&x, &y);

    cout << "\n\nx = " << x;
    cout << "\ny = " << y << endl << endl;
    return 0;
}
void troca(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*

*/
