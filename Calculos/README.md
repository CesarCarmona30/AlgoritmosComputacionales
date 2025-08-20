# Cálculos
Se requiere un algoritmo que dado un archivo por el usuario sin la extensión .txt se lea que contiene valores enteros en una línea y se determine cuales son los valores menores y mayores, así como el promedio de los valores.

Se requiere que tenga 3 funciones:
- Entrada: lee el archivo y lo deja en un arreglo
- Cálculos: que determine el mayor, menor y promedio
- Salida: muestre los valores correspondientes

## Flujo de trabajo de ifstream en C++
El flujo de entrada ifstream (input file stream) en C++ es utilizado para leer datos desde archivos de texto o binarios. Su funcionamiento se basa en la manipulación de archivos en el sistema mediante la biblioteca: fstream.

A continuación, se explica detalladamente su flujo de trabajo.

## Declaración de un objeto ifstream
Para leer un archivo, se debe crear una instancia de la clase ifstream. Se puede hacer de la siguiente manera:

```
#include <iostream>
#include <fstream>

using namespace std;

int main() {
ifstream archivo; // Se declara un objeto ifstream, equivale al open
return 0;
}
```

## Apertura del archivo
Para abrir un archivo, se usa el método .open() o se puede abrir directamente al inicializar el objeto ifstream.
```
ifstream archivo("datos.txt"); // Se abre el archivo en modo lectura
```
O bien:
```
ifstream archivo; // le indica al Sistema operativo que va usar un recurso
archivo.open("datos.txt"); // Se abre el archivo de manera explícita
```
Si el archivo no existe o hay un problema en la apertura, el flujo de entrada queda en estado de error.

## Verificación de apertura exitosa
Siempre es recomendable verificar si el archivo se abrió correctamente antes de intentar leerlo.
```
if (!archivo) { // Alternativamente: if (!archivo.is_open())
cout << "Error al abrir el archivo." << endl;
return 1;
}
```
Aquí !archivo evalúa si el archivo no se pudo abrir correctamente.

## Lectura de datos
Una vez abierto, el archivo puede ser leído de diferentes maneras:
- Lectura línea por línea
```
string linea;
while (getline(archivo, linea)) { // Lee línea por línea hasta el final del archivo
cout << "Linea leída: " << linea << endl;
}
```
El método getline(archivo, linea) lee una línea completa del archivo
hasta encontrar un salto de línea (\n).
- Lectura de valores enteros

Si el archivo contiene números separados por espacios o saltos de línea, se pueden leer de esta forma:
```
int numero;
while (archivo >> numero) { // Lee número por número
cout << "Número leído: " << numero << endl;
}
```
archivo >> numero intenta leer un número del archivo.
Si no encuentra más números o detecta datos incompatibles, el ciclo se detiene.

## Cierre del archivo
Una vez terminada la lectura, es importante cerrar el archivo para liberar los recursos del sistema.
```
archivo.close(); // Cierra el archivo
```
Si no se cierra explícitamente, el destructor de ifstream lo cerrará automáticamente cuando la variable salga del alcance o termine la ejecución del programa.
