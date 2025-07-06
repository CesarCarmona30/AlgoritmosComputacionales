#include <stdio.h>
#include <iostream>
    int num;
    int b; // el valor a buscar, lo proporciona el usuario
    int n; // es el tamaño del arreglo, lo proporciona el usuario
    int i; // es el índice para el arreglo
    int a[20];  // declara el arreglo
    int bandera=0; // indica si lo encontró -true- o no lo encontro -false-
    int bandera1=1; //bandera para seguir buscando

void captura(){
    printf("Teclea el tamano del arreglo\n");
    scanf("%i", &n);
    for(i=0;i<n;i++){
        printf("\nTeclee el valor a capturar ");
        scanf("%i", &num);
        a[i]=num;
    }
}

void buscar(){
    bandera=0;
    for(i=0;i<n && b >= a[i] && bandera==0;i++){
        if(a[i]==b){
    //bandera=1; índica que lo encontró
              bandera++;
        }
    }

}

void salir(){
    if (bandera>0){
        printf("\n Encontre el valor %i, veces %i, iteraciones %i", b, bandera, i);
    }
    else {
        printf("\n No encontre el valor %i, iterraciones %i", b, i);
    }

}

int main(){
    captura();
    for(;bandera1==1;){
        printf("\n Teclee el valor a buscar: ");
        scanf("%i", &b);
        buscar();
        salir();
        printf("\nQuieres buscar otro valor Si=1, No=0");
        scanf("%i", &bandera1);
    }
}
