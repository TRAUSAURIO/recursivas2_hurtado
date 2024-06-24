#include <iostream>
using namespace std;

// Función recursiva para imprimir la tabla de multiplicar de manera descendente
void TablaMultiplicarDesc(int tabla, int i) {
    // Condición de salida: si i es menor que 1, la función termina
    if (i >= 1) {
        // Imprime el resultado de la multiplicación
        cout << tabla << " x " << i << " = " << (tabla * i) << endl;
        // Llama recursivamente a la función con el siguiente número decrementado
        TablaMultiplicarDesc(tabla, i - 1);
    }
}

int main() {
    
    TablaMultiplicarDesc(5, 10); 
    cout << endl;
    TablaMultiplicarDesc(10, 10); 
    return 0;
}
