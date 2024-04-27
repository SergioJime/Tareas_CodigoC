#include <stdio.h>

int main(int argc, char *argv[]) {
	int i,j;
	printf("Hola, ¿Que tabla de multiplicar deseas ver?\n");
	scanf("&d",&i);
	
	for(j=1; j <=10; j++){
		printf("\n%d x %d = %d",i,j,i * j);
	}
	
	
	
	
	
	
	
	
	
	
	return 0;
}

