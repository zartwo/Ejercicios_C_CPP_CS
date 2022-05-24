#include <stdio.h>
#define anioActual 2022 //constante
int main(){
	//p
	int fNacimiento=0,edad=0;

	printf("Introduce tu fecha de nacimiento: ");
	fflush(stdout);
	scanf("%d",&fNacimiento);

	edad=anioActual-fNacimiento;

	printf("tienes %d años.\n", edad);

	return 0;
}