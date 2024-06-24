//Autor: Ronald Elian Hurtado Jama
//Fecha: 22/06/2024
//Tema: Función recursiva que cuenta el total de cifras de un número entero

#include <iostream>
using namespace std;

// Función recursiva para contar el número de cifras de un número entero
int CuentaCifrasRec(int num, int n) {
    // Condición de salida: si n es mayor que el número, se devuelve 0
    if (n <= num) {
        // Caso recursivo: cuenta 1 cifra más y llama a la función con n multiplicado por 10
        return 1 + CuentaCifrasRec(num, n * 10);
    } else {
        return 0;
    }
}

int main() {
    cout << "Cuenta cifras de 1800: " << CuentaCifrasRec(1800, 1) << endl;
    cout << "Cuenta cifras de 8: " << CuentaCifrasRec(8, 1) << endl;
    cout << "Cuenta cifras de 123456: " << CuentaCifrasRec(123456, 1) << endl;
    return 0;
}
