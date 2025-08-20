# Búsqueda Ordenada Mejorada
Se requiere un algoritmo que una vez que encuentre un valor se detenga, use como base los programas:
- Búsqueda Lineal
- Búsqueda Lineal Mejorada

## Descripción computacional
El ciclo de búsqueda se modifica para que una vez que se prenda la bandera de encontrado se detenga.

for(i=0;i<n && b >= a[i] && bandera==0;i++){

Fin del ciclo

i<n busca hasta el final exista o no el valor buscado

B >= a[i] se detiene el ciclo cuando el valor a buscar es menor al valor de a[i]

Bandera == 0 se detiene cuando encuentra por primera vez el valor
