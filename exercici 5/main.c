
#include <stdio.h>
#include "functions.h"

void main(){
    int num1, num2, aux;
    num1 = llegirNum("Introdueix el primer valor: \n");
    num2 = llegirNum("Introdueix el segon valor: \n");

    aux = num1;
    num1 = num2;
    num2 = aux;
    /* Para hacer el intercambio utilizamos una variable auxiliar */

    printf( "\n\n   El valor de num1 es: %d", num1 );
    printf( "\n\n   El valor de num2 es: %d", num2 );
}
