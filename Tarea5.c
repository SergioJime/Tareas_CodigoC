#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int saldo, retiro, abono, opcion;
	
	saldo = 3000;
	
	do {
		
		printf ("***Bivienvenido***\n");
		printf ("Eliga la opcion que desea realizar\n");
		printf ("1.- Retiro de efectivo\n");
		printf ("2.- Abono de dinero\n");
		printf ("3.- Salir\n");
		scanf ("%d", &opcion);
		
		switch (opcion){
		case 1:
			printf ("Tu saldo es de:%d\n", saldo);
			printf ("¿Cuanto dinero deseas retirar?\n");
			scanf ("%d", &retiro);
			
			if (retiro > saldo){
				printf ("Tu saldo es insufuciente\n");
				printf ("Favor de elejir otra cantidad\n");
			}
			else {
				saldo = saldo - retiro;
				printf ("Retiro exitoso\n");
				printf ("Tu saldo actual es de: %d\n", saldo);
			}
			break;
		case 2:
			printf ("¿Cuanto dinero deseas abonar?\n");
			scanf ("%d", &abono);
			
			saldo = saldo + abono;
			printf ("Abono exitoso\n");
			printf ("Tu saldo actual es de: %d\n", saldo);
			break;
		case 3:
			printf ("Saliendo de sistema...\n");
			printf("Tu saldo final es de: %d", saldo);
			break;
		default:
			printf("Opcion invalida\n");
			printf("Favor de selecionar otra opcion del menu\n");
		}
		
		
	} while(opcion != 3);
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
