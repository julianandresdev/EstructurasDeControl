// Proyecto: EstructurasDeControl
// Archivo: verificaPositivo.cpp
// Este programa evalúa si un número ingresado por el usuario es positivo, negativo o cero,
// utilizando una estructura de control condicional (if-else).
// Autor: Profesorcito
// Fecha: 28/ene/2025#include <iostream>

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es positivo." << endl;
    } else {
        cout << "El número es negativo o cero." << endl;
    }

    return 0;
}