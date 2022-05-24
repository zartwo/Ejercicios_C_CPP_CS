#include <iostream>
using namespace std;
 
 
/*                Estructura de los nodos de la cola      
------------------------------------------------------------------------*/
struct nodo
{
    int nro;
    struct nodo *sgte;
};
 
 
/*                      Estructura de la cola      
------------------------------------------------------------------------*/
struct cola
{
    nodo *delante;
    nodo *atras  ;
};
 



/*                        Encolar elemento      
------------------------------------------------------------------------*/
void encolar( struct cola &q, int valor )
{
     struct nodo *aux = new(struct nodo);
     
     aux->nro = valor;
     aux->sgte = NULL;
     
     if( q.delante == NULL)
         q.delante = aux;   // encola el primero elemento
     else
         (q.atras)->sgte = aux;
         
     q.atras = aux;        // puntero que siempre apunta al ultimo elemento
     
}

 
/*                        Desencolar elemento      
------------------------------------------------------------------------*/
int desencolar( struct cola &q )
{
     int num ;
     struct nodo *aux ;
     
     aux = q.delante;      // aux apunta al inicio de la cola
     num = aux->nro;
     q.delante = (q.delante)->sgte;
     delete(aux);          // libera memoria a donde apuntaba aux
     
     return num;
}
 
/*                        Mostrar Cola      
------------------------------------------------------------------------*/
void muestraCola( struct cola q )
{
     struct nodo *aux;
     
     aux = q.delante;
         
     while( aux != NULL )
     {
            cout<<"   "<< aux->nro ;
            aux = aux->sgte;
     }    
}
 
/*              Eliminar todos los elementos de la Cola      
------------------------------------------------------------------------*/
void vaciaCola( struct cola &q)
{
     struct nodo *aux;
     
     while( q.delante != NULL)
     {
            aux = q.delante;
            q.delante = aux->sgte;
            delete(aux);
     }
     q.delante = NULL;
     q.atras   = NULL;
     
}

/*                        Es primo
------------------------------------------------------------------------*/
bool noEsPrimo(int numero) {
  // Casos especiales
  if (numero == 0 || numero == 1 || numero == 4) return true;
  for (int x = 2; x < numero / 2; x++) {
    if (numero % x == 0) return true;
  }
  // Si no se pudo dividir por ninguno de los de arriba, sí es primo
  return false;
}

 
/*                        Menu de opciones    
------------------------------------------------------------------------*/
void menu()
{
    cout<<"\n\t IMPLEMENTACION DE COLAS EN C++\n\n";
    cout<<" 1. ENCOLAR                               "<<endl;
    cout<<" 2. DESENCOLAR                            "<<endl;
    cout<<" 3. MOSTRAR COLA                          "<<endl;
    cout<<" 4. VACIAR COLA                           "<<endl;
    cout<<" 5. ENCOLAR N VECES                       "<<endl;
    cout<<" 6. ENCOLAR DEL 1 AL 20                   "<<endl;
    cout<<" 7. ELIMINAR PRIMOS DE LA COLA            "<<endl;
    cout<<" 8. ENCOLAR 20 DATOS Y ELIMINAR PRIMOS    "<<endl;
    cout<<" 9. SALIR                                 "<<endl;
 
    cout<<"\n INGRESE OPCION: ";
}
 
/*                        Funcion Principal        
------------------------------------------------------------------------*/
int main()
{
    struct cola q;
    
    q.delante = NULL;
    q.atras   = NULL;
   
   
    int dato;  // numero a encolar
    int op;    // opcion del menu
    int x ;    // numero que devuelve la funcon pop
    int n;     // n datos
   
    system("color 0b");
 
    do
    {
        menu();  cin>> op;
 
        switch(op)
        {
            case 1:
                 cout<< "\n NUMERO A ENCOLAR: "; cin>> dato;
                 encolar( q, dato );
                 cout<<"\n\n\t\tNumero " << dato << " encolado...\n\n";
            break;
 
 
            case 2:
                 if(q.delante!=NULL){//es vacia
                    cout<<"\n\n\tCola vacia...!"<<endl;
                 }else{
                    x = desencolar( q );
                 cout<<"\n\n\t\tNumero "<< x <<" desencolado...\n\n";}
            break;
                 
 
            case 3:
 
                 cout << "\n\n MOSTRANDO COLA\n\n";
                 if(q.delante!=NULL) muestraCola( q );
                 else   cout<<"\n\n\tCola vacia...!"<<endl;
            break;
 
 
            case 4:
 
                 vaciaCola( q );
                 cout<<"\n\n\t\tHecho...\n\n";
            break;

            case 5:
                 cout<< "\n INGRESE LA CANTIDA DE DATOS QUE VA A ENCOLAR: ";cin >> n;
                 for(int i=0;i<n;i++){
                 cout<< "\n NUMERO A ENCOLAR: "; cin>> dato;
                 encolar( q, dato );
                 cout<<"\n\n\t\tNumero " << dato << " encolado...\n\n";
                 }
                 muestraCola(q);
            break;

            case 6:
                cout <<"\n Cola actual";
                 muestraCola(q);
                 for(int i=1;i<=20;i++){
                 encolar( q, i );
                 }
                 cout<<"\n\n\t\tNumeros del 1 al 20 encolado correctamene...\n\n";
                 muestraCola(q);
            break;

            case 7:
                 cout <<"\n Cola actual";
                   muestraCola(q);
                  struct cola aux;aux.delante=NULL;aux.atras=NULL;
                  //en
                  
                  while(q.delante!=NULL){
                    x = desencolar( q );
                    if(noEsPrimo(x)){
                         encolar(aux,x);
                     }
                  }
                   q=aux;  //añade la cola
                 cout<< "\nSe eliminaron los primos correctamente\n";
                   muestraCola(q);
            break;
            case 8:
                  cout <<"\n Cola actual";
                   muestraCola(q);
                   struct cola aux2;aux2.delante=NULL;aux2.atras=NULL;
                   for(int i=1;i<=20;i++){
                        encolar( q, i );
                    }
                 
                  while(q.delante!=NULL){
                    x = desencolar( q );
                    if(noEsPrimo(x))
                         encolar(aux2,x);
                  
                  }
                   q=aux2;

                 cout<< "\nSe ingresaron 20 datos y se eliminaron los primos correctamente\n";
                   muestraCola(q);
            break;
           
         }
 
        cout<<endl<<endl;
        //system("pause");  system("cls");
 
    }while(op!=9);
   

   cout<<"Pulsa enter para salir del problema"
    return 0;
}