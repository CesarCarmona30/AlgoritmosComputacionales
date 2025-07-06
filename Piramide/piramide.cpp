#include <iostream>
using namespace std;

void construirPiramide(int valor) {
    // Parte ascendente de la pirámide
    for (int i = 1; i <= valor; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Parte descendente de la pirámide
    for (int i = valor - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int valor;
    char respuesta;

    do {
        cout << "Ingrese un valor: ";
        cin >> valor;

        // Llamamos a la función para construir la pirámide
        construirPiramide(valor);

        cout << "¿Desea construir otra pirámide? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}
