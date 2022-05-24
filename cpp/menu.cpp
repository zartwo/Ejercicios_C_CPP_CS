#include <iostream>

# define M_PI 3.14159265358979323846 /* pi */


using namespace std;

// Function declaration
void mostrarM();
float areaTriangulo(float b,float h);
float areaCirculo(float r);
float areaCuadrado(float l);
// The main method

int main() {
	int numero;
	bool estado=true;
	int opcion;
	float b,h,l,r; //base,altura,lado,radio.

	while(estado){
		mostrarM();  // call the function
  cout<<"\nElije una opcion ";
   cin>>numero;          //almacena la opcion
   switch(numero) {
	  case 1:
	    cout<<"\nIngrese la base:";
	    cin>>b;
	    cout<< "\nIngrese la altura:";
	    cin>>h;
	    cout<<"\nEl area de un triangulo es: "<< areaTriangulo(b,h);
	    break;
	  case 2:
	    cout<<"ingrese el radio:";
	    cin>>r;
	    cout <<"\nEl area de un circulo es: "<<areaCirculo(r);
	    break;
	    case 3:
	    cout<<"\nIngrese un lado:";
	    cin>>l;
	    cout <<"\nEl area de un cuadradro es:"<<areaCuadrado(l);
	    break;
	    case 4:
	    estado=false;
	    break;
	  default:
	      cout <<"\n ingrese un numero valido:";
        break;
	    }
   
  }
  cout<<"Fin del programa";
  return 0;
}

// Function definition


void mostrarM(){
	cout<< "\n 1.-Calcular área de un triangulo \n 2.-Calcular el área de un circulo \n 3.-Calcular el área de un cuadradro \n 4.-salir";
}

float areaTriangulo(float b,float h){
  return (b*h)/2;
}

float areaCirculo(float r){
	// std::numbers::pi nos da el valor de 3.141592653589793

	return  M_PI*(r*r);// pi*rr
}

float areaCuadrado(float l){
	return l*l;//lado x lado
}
