#include <stdio.h>
int main(int argc, char const *argv[])
{
	int factorial= fact(3);
	printf("%d",factorial); 
}

long unsigned int fact(int n) /* recursiva */
{
 
long unsigned int resp;
 
if(n==1) return(1);
 
resp = fact(n--)*n;
 
return (resp);
 
}
 
&nbsp;
 

long unsigned int factiter(int n);
 
{
 
long unsigned int t, resp;
 
resp=1;
 
for(t=1; t<n; t++)
 
resp = resp * t;
 
return (resp);
 
}