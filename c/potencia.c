#include <stdio.h>
int power(int m, int n);
int powr();
/* prueba la función power */
int main( )
{
int i;
 printf("potencia de 2E10:%5d\n",powr(2));
	for (i = 0; i < 10; ++i)
		printf("indice%d potencia2:%3d potencia-3:%6d\n", i, power(2,i), power(-3,i));
		return 0;

}

/* power: eleva la base a la n-ésima potencia; n >= 0 */
int power(int base, int n){
int i, p;
p = 1;
	for (i = 1; i <= n; ++i)
		p = p * base;
return p;
}



powr(base) 
int base;
{
int i, p;
p = 1; int n=10;
for (i = 1; i <= n; ++i)
p = p * base;
return p;
}