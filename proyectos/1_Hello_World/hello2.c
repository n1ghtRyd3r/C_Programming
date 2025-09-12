#include <stdio.h>

/*
El código que se muestra es una llamada a una función 
print() desde la función main() del archivo
*/

// Función Secundaria
int print()
{
    printf("Hola mundo desde una función \n");
    return 0;
};


//Función Inicial
int main()
{
    print();
    printf("El código de arriba es de una función \n");
};
