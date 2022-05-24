#include <stdio.h>
#define STEP 20/*tamaño de incremento*/
#define UPPER 300 /*limte superior*/
/* imprime la tabla para  fahrenheit-celsius para fahr=0,20,..300*/
float conversionFC(float a);
int main()
{
	//int fahr,celsius;
	float fahr,celsius;
	int lower;
	lower=0; /*limite inferior de la tabla temperaturas*/ 
	fahr= lower;
	printf("Conversion de fahrenheit a celsius\n");
	while(fahr<=UPPER){
		//celsius=5*(fahr-32)/9;//c=(5/9)(F-32)
		//printf("%d\t%d\n",fahr,celsius);//entero
		//printf("%3d %6d\n",fahr,celsius);
		printf("%3.0f %6.2f\n",fahr,conversionFC(fahr));//float escribe como punto flotante, con 2 caracteres después del punto decimal
		fahr=fahr+STEP;
    }

	printf("Conversion de celsius a fahrenheit\n");
	while(celsius>=(-17.78)){
	fahr=((celsius*9.0)/(5.0))+32.0;	
	printf("%6.2f %3.0f\n",celsius,fahr);
	celsius=celsius-11.111;
	}
	
}

float conversionFC(float fahr){
	float celsius=(5.0/9.0)*(fahr-32.0);
	return celsius;
}