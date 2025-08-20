# Búsqueda lineal mejorada
Modificar el programa "Búsqueda Lineal" para que la búsqueda sea más rápida (es decir que me indique cuando lo encuentre y que se detenga el ciclo de búsqueda).
## Consideraciones
En este programa resalta que la mejora de comportamiento del programa se da por la estructura de datos (ordenando la serie de menor a mayor) y por la estructura de control (ciclo se le agregó un fin && b > a[i], lo que permitía descubrir que un valor no existe.

|  10  |  20  |  30  |  35  |  40  |  45  |  50  |
|------|------|------|------|------|------|------|  
|  0   |   1  |   2  |   3  |   4  |   5  |   6  |

Si b= 30

Prende la bandera, cuando a[2] ya que su valor es 30, incrementa i y por a[3] es igual a 35 se detiene, aunque un ciclo más no es significativo en Quantum (lapso de tiempo) puede darse que la búsqueda sea muy amplia (el quantum muy largo).
