#include <stdio.h>
/* imprime la tabla Fahrenheit-Celsius */
main( )
{
int fahr;
printf("Conversion de fahrenheit a celsius\n");
for (fahr=0; fahr<=300; fahr=fahr+20)
printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

float celsius;
printf("Conversion de celsius a fahrenheit\n");
for(celsius=148.89;celsius>=-17.88; celsius=celsius-11.111)
	printf("%6.1f %3.0f\n",celsius,((celsius*9.0)/(5.0))+32.0);
}