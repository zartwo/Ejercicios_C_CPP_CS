#include <iostream>
using namespace std;
int factorial(int n);
int main() {
	int numero;

	 cout<<"ingresa un numero: "; //mensaje

	 cin>>numero;          //almacena la entrada
	int respuesta=factorial(numero);
	cout << "El factorial de "<<numero<<" es:"<<respuesta << endl;
	return 0;
}
int factorial(int n){
		int res=1;
	if(n==0){// si el numero es 0
		res=1;
	}else if(n<0){ //si el numero es negativo
		for(int i=n;i<0;i++)
		res=res*i;
	}else if(n>0){ // si el numero es positivo
		for(int j=n;j>0;j--)
			res=res*j;
	}
	return res;
}
