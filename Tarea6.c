#include <stdio.h>

void promedio (){
	
	
	float num1, num2, suma, promedio;
	
	printf ("Ingresa el primer numero\n");
	scanf ("%f", &num1);
	printf ("Ingresa el segundo numero\n");
	scanf ("%f", &num2);
	
	suma = num1+num2;
	promedio = suma / 2;
	
	printf ("El promedio de los numeros ingresados es: %.1f", promedio);
}
	void nombre (){
		char cadena [12];
		
		printf ("\n\nIngresa tu nombre\n");
		scanf ("%s", cadena);
		printf ("Tu nombre es: %s", cadena);
		
	}
		
		
		
		int main(int argc, char *argv[]) {
			
			
			
			promedio ();
			
			nombre ();
return 0;
		
		}


