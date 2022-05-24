#include "iostream"
#include "string"

using namespace std;

int main(){

	cout << "hola aqui realiza sumas" << endl;
	float numero1,numero2;

	cout << "por favor ingrese el primer valor" << endl;
	cin >> numero1; //se asigan

	cout << "por favor ingrese el segundo valor" << endl;
	cin >> numero2; 

	cout << " El resultado de la suma de " << numero1 << "+" << numero2 << "es: " << numero1+numero2 << endl;
	return 0;
}