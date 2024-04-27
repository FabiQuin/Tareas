#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, suma, promedio;
	
	i = 1;
	promedio = 0; 

	suma = 0;
	do {
		printf ("%d ", i);	
		
		if ( i % 2 == 0){
			suma = suma + i;
		}
			
		else (){
			promedio = promedio / i;
		}
		
	
		
		i++;
	
		
	} while(i<=10);
	
	
	printf ("\nEl promedio de la suma de los numeros pares es: %d", suma);
	return 0;
}

