#include <stdio.h>

void cuadrado (int var);
void invertir (int a , int b);
void orden (int a, int b);

int main(){
    int num = 0;
    int *ptr = &num; 
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    cuadrado(num);
    printf("Contenido de la variable: %d y la direccion %p\n", num , *ptr);
    printf("Ingrese dos valores numericos para invertir\n");
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    invertir(a, b);
    orden(a, b);




    return 0;
}

void cuadrado (int var){
    int resultado = var * var;
    printf("El cuadrado de %d es %d\n", var, resultado);
}
void invertir (int a , int b){
    int aux = a;
    a = b;
    b = aux;
    printf("El valor de a es %d y el valor de b es %d\n", a, b);
};
void orden (int a, int b){
    if (a > b){
        printf("El valor de a es mayor que el valor de b\n");
    } else if (a < b){
        printf("El valor de b es mayor que el valor de a\n");
    } else {
        printf("Los valores son iguales\n");
    }
};