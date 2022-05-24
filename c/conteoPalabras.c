#include <stdio.h>
#define IN 1 /* en una palabra */
#define OUT 0 /* fuera de una palabra */
/* cuenta líneas, palabras, y caracteres de la entrada */
int main( )
{
int c, nl, nw, nc, state;
state = OUT;
nl = nw = nc = 0;
while ((c=getchar( ))!=EOF) {
	++nc;//cuenta caracter y \t \n etc
	if (c=='\n')//cuenta salto de linea
		++nl;
	if (c==' ' || c=='\n' || c=='\r')//asegura que esta o nop en una palabra
		state = OUT;
	else if (state==OUT) {
		state = IN;
		++nw;//añade pabra
	}
}
printf ("\n#saltoslineas: %d  #palabras%d #caracteres:%d", nl, nw, nc);
}