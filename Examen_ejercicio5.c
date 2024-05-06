#include <stdio.h>
int main(int argc, char *argv[]) {
	
	int arreglosuma[5]= {23,4,1,44,55};
	
	int i, j, aux;
		for(i=0; i < 5; i++){
		    for(j=0; j < 5; j++){
				if( arreglosuma[j] > arreglosuma[j+1]){
					aux = arreglosuma[j];
					arreglosuma[j]= arreglosuma[j+1];
				arreglosuma[j+1+1] =aux;
				
				}
			}
	}
	
		printf("\n Arreglo descendente\n");
	for(int i = 0; i < 5; i++){
		
	}

	printf("%d", arreglosuma[i]);
	
	int suma;	
	suma=0;
		
		for(int i=0; i < 5 ; i++){
		suma=suma+arreglosuma[i];
		
	}
	printf("%d",suma);

 return 0;
}
