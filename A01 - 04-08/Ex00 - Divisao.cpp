#include <iostream>

using namespace std;

int main()
{
    float divisor, dividendo;

    cout << "Informe um dividendo: " << endl;
    cin >> dividendo;

    do{
        cout << "Informe um divisor: " << endl;
        cin >> divisor;

        if (divisor == 0){
            cout << "Informe um valor diferente de ZERO." << endl;
        }

    }while(divisor == 0);

    cout << "O resultado da divisão " << dividendo << "/" << divisor << " é " << (dividendo/divisor) << endl;

    return 0;
}
