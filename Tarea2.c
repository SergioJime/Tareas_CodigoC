#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int i, sumapares;
	i = 1;
		
		while(i <= 5){
		printf("%d\n",i);
		
		if (i % 2 == 0){
			sumapares = sumapares + i;
			
		}
		i++;
		
	}
	
	printf("El total de la suma de los numeros pares del 1 al 5 es:&d",sumapares);
	
	
	
	return 0;
}

