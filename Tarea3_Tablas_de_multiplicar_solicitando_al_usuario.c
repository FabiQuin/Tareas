#include <stdio.h>

int main(int argc, char *argv[]) {
	
	//Haciendo uso del ciclo for quiero imprimir las tablas de multiplicar, pero le
	//voy a solicitar al usario que numero quiero para la tabla de multiplicar, una
	//vez dado el numero de la tabla, imprimir la tabla de multiplicar en consola
	
	int i,j;
	printf("Hola, ¿Que tabla de multiplicar deseas ver?\n");
	scanf ("%d", &i);
	
	
		for (j=1; j<=10; j++){
		printf("\n%d x %d = %d", i,j,i * j);
		}
		
		
	return 0;
}

//Tarea3_Tablas_de_multiplicar.c
