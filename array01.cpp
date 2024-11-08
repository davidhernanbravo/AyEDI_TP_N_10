#include <iostream>

using namespace std;

int main() 
{
    int numeros[100]; // Declaración de un arreglo de 100 enteros.

    // Bucle for para llenar el arreglo con los primeros 100 números enteros.
    for (int i = 0; i < 100; ++i) 
        {
            numeros[i] = i + 1;
        }

    // Se muestra en consola los números del arreglo.
    cout << "Los primeros 100 numeros enteros son:" << endl;
    for (int i = 0; i < 100; ++i) 
        {
            cout << numeros[i] << " ";
        }

    return 0;
}