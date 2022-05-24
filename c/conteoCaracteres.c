#include <stdio.h>
/* cuenta los caracteres de la entrada; 1a. versión */
main( )
{
double nc;
for (nc=0; getchar( )!=EOF; ++nc);
printf("\n%.0f", nc);
}
/*int main()
{
	long nc;
	nc = 0;
	printf("Introduce:");
	while (getchar()!=EOF)
		++nc;
	printf("%ld\n", nc);
	
	
return 0;
}
*/
//La proposición
