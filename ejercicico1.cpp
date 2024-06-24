//Autor: Ronald Elian Hurtado Jama
//Fecha: 22/06/2024
//Tema: Diseñe la función recursiva que realice la sumatoria.

#include <iostream>
using namespace std;

// Función recursiva para calcular la sumatoria desde 1 hasta n
int Suma(int n)
{
    // Caso base: si n es 1, simplemente devuelve 1
    int Suma = 0;
    int i = 1;
    while (i <= n)
    {
        Suma = Suma + i;
        i++;
    }
    return Suma;
}

int Sumarecursiva(int i, int n)
{
    if (i<=n)
      return Sumarecursiva(i+1, n) + i;
    else
      return 0;  
}
int main()
{
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(6);
    cout<<endl<<"La suma de los 5 primeros numeros: "<<Suma(6);
}