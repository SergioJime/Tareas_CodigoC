#include <stdio.h>

int main(int argc, char *argv[]) {
	
	
	int num1,num2,num3;
	printf("Ingresa el primer numero\n");
	scanf ("%d",&num1);
	printf("Ingresael segundo numero\n");
	scanf ("%d",num2);
	printf("Ingresa el tercer numero\n");
	scanf  ("%d",num2);
	
	if (num1 > num2 && num1 > num3){
		printf("El primer numero mayor %d",num1);
	}
	
	else if (num2 > num1 && num2 > num3){
		printf("el numero dos es mayor %d",num2);
		
	}
	else if (num3 > num1 && num3 > num2){
		printf(" el numero tres es mayor&d",num3);
		
	}
	else if (num1 == num2 && num2 == num3 && num1 == 0){
		printf ("Los tres numeros son iguales %d %d %d",num1,num2,num3);
	}	
	else if (num1 == num2 && num2 == num3){
		printf ("Los tres numeros son iguales %d %d %d",num1,num2,num3);
	}
	return 0;
}

