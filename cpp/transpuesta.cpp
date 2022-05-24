#include <iostream>
using namespace std;
int  matriz[4][4]={{1,2,3,4},{6,7,8,0},{3,3,3,3},{4,5,4,5}};
int transpuesta[4][4];//variable auxiliar

void mostrarM(int m[4][4]);
void tran(int s[4][4]);

int filas= sizeof(matriz)/sizeof(matriz[0]),//obtiene largo
    columnas= sizeof(matriz[0])/sizeof(int);//obtiene ancho

int main(){
 // rellenarI();//ingresar los datos de manera manual
   mostrarM(matriz);
   cout<<"\n La transpuesta: \n";
   tran(matriz);
   mostrarM(transpuesta);
  
	return 0;
}

void tran(int s[4][4]){
	for(int i=0;i<filas;i++){
		 for(int j=0;j<columnas;j++){
        	transpuesta[j][i]=s[i][j];
		 }
		 
	}
}

void mostrarM(int m[4][4]){
	cout<<"\n{\n";
	 for(int i=0;i<filas;i++){
	 	cout<<"{";
	  	 for(int j=0;j<columnas;j++){
			cout<<m[i][j];
			if(j<columnas-1)
		 	cout<<",";
		 }
         if(i<filas-1)
		 	cout<<"},\n";
		 else cout <<"}";
	  }	
	cout<<"\n}";
}