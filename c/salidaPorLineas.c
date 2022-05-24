#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* cuenta líneas, palabras, y caracteres de la entrada */
int main( )
{
int c, nl, nw, nc, state;
state = OUT;//auxiliar  de estado 
nl = nw = nc = 0;
while ((c=getchar( ))!=EOF) {
	if (c!=' ' && c!='\n'&& c!='\r'){
		putchar(c);
		state=IN;
	}
	else if (state){
		putchar('\n');
		state=OUT;
	}
}
printf ("\n#saltoslineas: %d  #palabras%d #caracteres:%d", nl, nw, nc);
}