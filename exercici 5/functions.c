//Per retornar el valor introduït per teclat

int llegirNum(char *msg){
    int num;
    printf("%s", msg);
    scanf("%d", &num);
    return num;
}
