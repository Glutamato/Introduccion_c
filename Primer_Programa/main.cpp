#include <iostream>

using namespace std;

int main()
{
    int Direccion=3509;
    int* Apuntador;
    Apuntador = &Direccion;
    cout << Apuntador << endl;

    return 0;
}
