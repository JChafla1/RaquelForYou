#include <stdio.h>
#include "functions.h"

void main() {
    int size;
    size = validate();
    struct book bcn[size];
    modifyData(bcn, size);//per referència només l’array, no size
    printData(bcn, size); //es passa per valor
}
