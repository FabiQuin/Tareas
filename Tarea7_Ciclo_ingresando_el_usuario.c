#include <stdio.h>

void ciclo (int inicio, int fin){
	
	int suma; 
	suma = 0;
	
	for (int i= inicio; i<=fin; i++){
		
		printf(" %d",i);
	}
	
	
}
	

int main(int argc, char *argv[]) {
	
	int iniciociclo, finciclo;
	
	printf ("Ingresa el numero del inicio de ciclo\n");
	scanf ("%d", &iniciociclo);
	printf ("Ingresa el numero del fin de ciclo\n");
	scanf ("%d", &finciclo);
	
	ciclo (iniciociclo, finciclo);
	
	return 0;
}

