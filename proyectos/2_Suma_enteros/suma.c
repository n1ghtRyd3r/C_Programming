#include <stdio.h>

/*
############# TEORIA 

 - Una función "int" devuelve un valor

 - Una función "void" no devuelve nada, simplemente ejecuta su codigo

*/ 



void solicitud(int *value) // le indicamos que cuando llamamos a la función, necesitamos indicarle el puntero que apunta a la dirección de memória que almacenará el resultado
{
  printf("Indica el valor a sumar: ");
  scanf("%d",value);
};


void sumatorio(int *val1, int *val2)
{
  solicitud(val1);
  solicitud(val2);
}

int main()
{
  int val1;
  int val2;
  sumatorio(&val1, &val2); // le indicamos la dirección de memória donde almacenará el resultado
  int suma = val1 + val2;
  printf("El resultado de la suma de %d y %d es %d \n", val1, val2, suma);
  return 0;
}


/*
| Tipo      | Significa                           | Nivel |
| --------- | ----------------------------------- | ----- |
| `int`     | Una variable entera común           | 0     |
| `int *`   | Un puntero a un entero              | 1     |
| `int **`  | Un puntero a un puntero a un entero | 2     |
| `int ***` | ... y así sucesivamente             | 3+    |

*/
