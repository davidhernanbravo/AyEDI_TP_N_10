#include <iostream>

using namespace std;

int main() 
{
    const int TAMANO = 50; // Hay 50 números impares entre 1 y 100.
    int impares[TAMANO];
    int contador = 0;

    // Bucle para llenar el arreglo con los números impares.
    for (int i = 1; i <= 100; i += 2) 
        {
            impares[contador] = i;
            contador++;
        }

    // Resultado en consola.
    cout << "Los numeros impares entre 1 y 100 son:" << endl;
    for (int i = 0; i < TAMANO; ++i) 
        {
            cout << impares[i] << " ";
        }

    return 0;
}