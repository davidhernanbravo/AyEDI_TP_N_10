#include <iostream>

using namespace std;

bool esPrimo(int num);

int main() 
    {
        const int TAMANO = 100;
        int primos[TAMANO];
        int contador = 0;

        // Llenamos el arreglo con los números primos
        for (int i = 2; i <= TAMANO; ++i) 
            {
                if (esPrimo(i)) 
                    {
                        primos[contador] = i;
                        contador++;
                    }
            }

        // Mostramos los números primos
        cout << "Los numeros primos entre 1 y 100 son:" << endl;
        for (int i = 0; i < contador; ++i) 
            {
                cout << primos[i] << " ";
            }

        return 0;
    }

bool esPrimo(int num) 
    {
        // Un número primo es divisible solo por 1 y por sí mismo (Ayudín porque no me acordaba).
        if (num <= 1) 
            {
                return false;
            }
        for (int i = 2; i * i <= num; ++i) 
            {
                if (num % i == 0) 
                    {
                        return false;
                    }
            }
            
        return true;
    }