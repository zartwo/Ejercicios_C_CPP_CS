#include <iostream>
using namespace std;
int  matriz[5][5]={{1,2,3,4,5},{6,7,8,9,0},{3,3,3,3,3},{4,5,3,4,5},{5,3,4,2,1}};
void rellenarI();
void mostrarM();
int sumaDiagonal();
int filas= sizeof(matriz)/sizeof(matriz[0]),//obtiene largo
    columnas= sizeof(matriz[0])/sizeof(int);//obtiene ancho

int main(){
 // rellenarI();//ingresar los datos de manera manual
   mostrarM();
   cout<<"La suma diagonal: "<<sumaDiagonal()<< endl;
	return 0;
}



void rellenarI(){
	 int valor;
	  cout<<"rellene la matriz[5][5] ";
	  cout<<"Filas:" << filas;
	  cout <<"Columnas" << columnas;

	  for(int i=0;i<filas;i++){
	  	 for(int j=0;j<columnas;j++){
			cout<<"\ningrese un valor para matriz["<<i<<"]["<< j<<"] :";
			cin>>valor;
			matriz[i][j]=valor;
		 }
	  }
	  
}

void mostrarM(){
	cout<<"\n{\n";
	 for(int i=0;i<filas;i++){
	 	cout<<"{";
	  	 for(int j=0;j<columnas;j++){
			cout<<matriz[i][j];
			if(j<columnas-1)
		 	cout<<",";
		 }
         if(i<filas-1)
		 	cout<<"},\n";
		 else cout <<"}";
	  }	
	cout<<"\n}";
}



int sumaDiagonal(){
	int res=0;
	
	for(int i=0;i<filas;i++){
		res=res+matriz[i][i];
		cout<< matriz[i][i]<<" ";
	}
    cout<<"es: " ;

	return res;
}