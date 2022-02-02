#include <stdio.h>
#include "functions.h"

int validate(){
    int num;
    do{
        printf("Quants llibres es volen registrar?\n");
        scanf("%d", &num);
    }while(num<1);
    return num;
}

void modifyData(struct book *o,int size){ //punter a office
    for(int i=0; i<size;i++){
        printf("Introdueix el titol del llibre: \n");
        scanf("%s",o[i].name);
        printf("Introdueix l'autor del llibre:");
        scanf("%s",o[i].infor.author);
        printf("Introdueix l'editorial: \n");
        scanf("%s",o[i].infor.editorial);

        o[i].data.day = validatedata (1, 30, "Introdueix el dia de publicacion: \n");
		o[i].data.month = validatedata (1, 12, "Introdueix el mes de publicacion: \n");
		o[i].data.year = validatedata (1600, 2200, "Introdueix l'any de publicacion: \n");

        printf("Quantes unitats hi ha disponibles?: \n");
        scanf("%s",o[i].infor.units);
        printf("Introdueix l'usuari que l'agafat en prestec: \n");
        scanf("%d",o[i].cln);
        printf("Quants dias de prestec porta?: \n");
        scanf("%s",o[i].lend);
    }
}

void validatedata(int min, int max, char *msg){
	int num;
	do{
		printf(msg);
		scanf("%d", &num);
	}while(min > num || num > max);
}

void printData(struct book *o, int size){
    printf("------------------------------------------------\n");
    for(int i=0; i<size; i++){
        printf("Aquestes són les dades del llibre: [%d]\n", i+1);
        printf("Nom del llibre: %s\n", o[i].name);
        printf("Nom de l'autor: %s\n", o[i].infor.author);
        printf("Editorial: %s\n", o[i].infor.editorial);

        printf("Data de publicacio: %s\n", o[i].data.day, o[i].data.month, o[i].data.year);

        printf("Unitats disponibles: %s\n", o[i].infor.units);
        printf("Usuari que el te en prestec: %d\n", o[i].cln);
        printf("Dies de prestec: %s\n", o[i].lend);
        printf("------------------------------------------------\n");
    }
}
