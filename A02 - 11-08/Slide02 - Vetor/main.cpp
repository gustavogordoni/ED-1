#include <iostream>

using namespace std;

int main()
{
    int v[4] = {1, 3, 7, 2}, i;
    i=0;

    for (i=0; i<5; i++)
    cout<< v[i] << " ";

    cout << "\n\n-----------------------------\n\n";

    int v1[4] = {1, 3, 7, 2}, i1;
    int *pv;
    pv = v1; // ou pv=&v[0];
    for (i1=0; i1<5; i1++){
        cout << *pv << " ";
        pv++;
    }

    cout << "\n\n-----------------------------\n\n";

    int v2[4] = {1, 3, 7, 2}, i2;
    int *pv2;
    pv2 = v2; // ou pv=&v[0];
    for (i2=0; i2<5; i2++)
    cout << pv2[i2] << " ";

    cout << "\n\n-----------------------------\n\n";
}
