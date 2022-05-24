#include <stdio.h>
/* cuenta las líneas de la entrada */
main( )
{
int c, t, blanco, nl;
nl = 0;t=0;blanco=0;
	while ((c=getchar( ))!=EOF){
		if(c=='\t')
			t++;
		if(c==' ')
			++blanco;
		if (c=='\n')
			++nl;
		
		
	}
printf("tabulado:%d lineas:%d blancos:%d",t,nl,blanco);

}