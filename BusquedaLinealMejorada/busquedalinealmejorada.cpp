#include <stdio.h>
#include <iostream>
#include <algorithm> // Para usar sort

int num;
int b; // el valor a buscar, lo proporciona el usuario
int n; // es el tamaño del arreglo, lo proporciona el usuario
int i; // es el índice para el arreglo
int a[100];  // aumento el tamaño del arreglo para más flexibilidad
int bandera=0; // indica si lo encontró (1) o no (0)
int bandera1=1; // bandera para seguir buscando
int posicion=-1; // guarda la posición donde se encontró el valor

void captura(){
    printf("Teclea el tamaño del arreglo (máximo 100)\n");
    scanf("%i", &n);
    for(i=0;i<n;i++){
        printf("\nTeclee el valor a capturar para la posición %d: ", i);
        scanf("%i", &num);
        a[i]=num;
    }
    // Ordenamos el arreglo de menor a mayor
    std::sort(a, a+n);
    printf("\nArreglo ordenado: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void buscar(){
    bandera=0;
    posicion=-1;
    for(i=0; i<n && bandera==0 && b>=a[i]; i++){
        if(a[i]==b){
            bandera=1;
            posicion=i;
            // No necesitamos seguir buscando
            break;
        }
    }
}

void salir(){
    if (bandera==1){
        printf("\nEncontre el valor %i en la posición %i, iteraciones %i", b, posicion, i);
    }
    else {
        printf("\nNo encontre el valor %i, iteraciones %i", b, i);
    }
}

int main(){
    captura();
    for(;bandera1==1;){
        printf("\nTeclee el valor a buscar: ");
        scanf("%i", &b);
        buscar();
        salir();
        printf("\nQuieres buscar otro valor? (Si=1, No=0): ");
        scanf("%i", &bandera1);
    }
    return 0;
}
