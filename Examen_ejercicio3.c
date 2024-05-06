#include <stdio.h>

int main(int argc, char *argv[]) {
	int opcion;
	
	
	do{
	
	printf("\n------Menu Principal------\n");
	printf("\n Ingresa un numero del 1 al 7 \n");
	printf("\n----------------------------\n");
	scanf("%d",&opcion);
	
	
	switch(opcion){
	case 1:
	   printf("El dia que seleccionaste es lunes");
	    break;
	case 2:
		printf("El dia que seleccionaste es Martes");
		break;
	case 3:
		printf("El dia que seleccionaste es Miercoles");
		break;
	case 4:
		printf("El dia que seleccionaste es Jueves");
		break;
	case 5:
		printf("El dia que seleccionaste es Viernes");
		break;
	case 6:
		printf("El dia que seleccionaste es Sabado");
		break;
	case 7:
		printf("El dia que seleccionaste es Domingo");
		break;
	default:
		printf("La opcion no es valida");
	
	}
	}while(opcion != 7);
	
	
	
	
	return 0;
}

