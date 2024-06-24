//Autor: Ronald Elian Hurtado Jama
//Fecha: 22/06/2024
//Tema: Diseña la función recursiva que imprima la una tabla de multiplicar.

// Función recursiva para imprimir la tabla de multiplicar desde un límite inferior hasta 12
#include <iostream>
using namespace std;

void TablaMultiplicar(int tabla, int i) {
    // Condición de salida: si i es mayor que 12, la función termina
    if (i <= 12) {
        cout << tabla << " x " << i << " = " << (tabla * i) << endl;
        // Llama recursivamente a la función con el siguiente número
        TablaMultiplicar(tabla, i + 1);
    }
}

int main() {
    TablaMultiplicar(5, 2);
    cout << endl;
    TablaMultiplicar(10, 4);
    return 0;
}
