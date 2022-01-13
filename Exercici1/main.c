
#include <stdio.h>
int validate();
void main(){
	int x = validate();
	printf("Has introducido el %d",x);
}

int validate(){
	int x, i=0;
	do{
		printf("Introdueix un numero entre 10 y 5000:");
		scanf("%d",&x);
		i++;
	}while(x>5000 || x<10 && i != 3);
	if (x>5000 || x<10){
		return x;
	}else{
		printf("");
	}
}
