#include <iostream>
using namespace std;
//variable globales
int numeros[10];


//metodos
int sumatotal();
int promedio();
void mostrarV();

int longitud= sizeof(numeros)/sizeof(int);//tamaño de array

int main(){

 	int valor;
	//generar los elementos
	/*for(int i=0;i<10;i++){
	     numeros[i]=i+1;//genera de 1 al 10
		}
	*/
	//metodo de por entradas
	cout<<"ingresa 10 valores \n";
	for(int i=0;i<10;i++){
		cout<<"ingrese un valor: ";
		cin>>valor;
		numeros[i]=valor;
	}
	//obtener max y min
	int max=numeros[0],min=numeros[0];
		for(int i=1;i<longitud;i++){
			if(max<numeros[i])
				max=numeros[i];
			
			if(min>numeros[i])
				min=numeros[i];
		}
	//mostrar
	mostrarV();
	cout<<"\nLa suma total es:"<< sumatotal()<< endl;//metodo 1
	cout<<"El promedio es:"<<promedio()<<"\n";//metodo 2
    cout<<"El numero maximo es: "<< max <<" el minimo es: "<< min;
}

void mostrarV(){
	cout<<"\nlos numeros ingreados son: ";
	for(int i=0;i<longitud;i++){
		cout<< numeros[i]<<";";
	}
}

	


int sumatotal(){
	int res=0;
	for(int i=0;i<longitud;i++){
           res=res+numeros[i];
	}
	return res;
}

int promedio(){
	return sumatotal()/longitud;
}