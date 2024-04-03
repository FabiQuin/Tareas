#include <stdio.h>

int main(int argc, char *argv[]) {
	//Haciendo uso del ciclo while, quiero recorrer del 1 al 5, imprimir la secuencia
	//del 1 al 5 en consola, pero tambien quiero sumar solo los numeros pares que
	//se encuentran entre el 1 y 5
	
	int i, sumapares;
	i = 1;
	
	while (i <= 5 ){
		printf ("%d\n", i);
		
		if (i % 2 == 0) {
			sumapares = sumapares + i;
			
		}
		i++;
		
	}
	
	printf ("El total de la suma de los numeros pares del 1 al 5 es:%d", sumapares);
	
return 0;
}

//Tarea 2
