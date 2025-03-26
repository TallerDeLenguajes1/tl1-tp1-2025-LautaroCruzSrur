#include <stdio.h>

void cuadrado (int var);

int main(){
    int num = 0;
    int *ptr = &num; 
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    cuadrado(num);
    printf("Contenido de la variable: %d y la direccion %p\n", num , *ptr);



    return 0;
}

void cuadrado (int var){
    int resultado = var * var;
    printf("El cuadrado de %d es %d\n", var, resultado);
}