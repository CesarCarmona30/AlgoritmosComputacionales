#include <iostream>
#include <fstream>
#include <vector>
#include <limits>

using namespace std;

// Función para leer los valores del archivo y almacenarlos en un vector
bool leerArchivo(const string &nombreArchivo, vector<int> &valores) {
    ifstream archivo(nombreArchivo + ".txt");

    if (!archivo) {
        cout << "No se pudo abrir el archivo " << nombreArchivo << ".txt" << endl;
        return false;
    }

    int numero;
    while (archivo >> numero) {
        valores.push_back(numero);
    }

    archivo.close();

    if (valores.empty()) {
        cout << "El archivo esta vacio o no contiene valores enteros validos." << endl;
        return false;
    }

    return true;
}

// Función para calcular el menor, mayor y el promedio
void calcularValores(const vector<int> &valores, int &menor, int &mayor, double &promedio) {
    if (valores.empty()) {
        return;
    }

    menor = numeric_limits<int>::max();
    mayor = numeric_limits<int>::min();
    int suma = 0;

    for (int valor : valores) {
        if (valor < menor) menor = valor;
        if (valor > mayor) mayor = valor;
        suma += valor;
    }

    promedio = static_cast<double>(suma) / valores.size();
}

// Función para mostrar los resultados
void mostrarResultados(const vector<int> &valores, int menor, int mayor, double promedio) {
    cout << "\nValores leidos:\n";
    for (int valor : valores) {
        cout << valor << " ";
    }
    cout << "\n\nResultados:\n";
    cout << "Menor valor: " << menor << endl;
    cout << "Mayor valor: " << mayor << endl;
    cout << "Promedio: " << promedio << endl;
}

int main() {
    vector<int> valores;
    string nombreArchivo;
    int menor, mayor;
    double promedio;

    cout << "Ingrese el nombre del archivo sin la extension .txt: ";
    cin >> nombreArchivo;

    if (leerArchivo(nombreArchivo, valores)) {
        calcularValores(valores, menor, mayor, promedio);
        mostrarResultados(valores, menor, mayor, promedio);
    }

    return 0;
}
