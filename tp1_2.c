#include <stdio.h>

int cuadrado (int var);

int main(){
    int num = 0;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    cuadrado(num);

    return 0;
}

int cuadrado (int var){
    int resultado = var * var;
    return printf("El cuadrado de %d es %d\n", var, resultado); ;
}