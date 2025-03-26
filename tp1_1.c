#include <stdio.h>

int main() {

    printf("Hola mundo!\n");

    int var = 10;       // Variable normal
    int *ptr = &var;    // Puntero apuntando a var

    printf("Contenido de la variable: %d\n", var);
    printf("Direccion almacenada en el puntero (ptr): %p\n", *ptr);
    printf("Direccion de la variable (&var): %p\n", &var);
    printf("Direccion de memoria del puntero (&ptr): %p\n", *&ptr);
    printf("Tamaño de la variable en memoria (sizeof(var)): %zu bytes\n", sizeof(var));
    

    return 0;
}
