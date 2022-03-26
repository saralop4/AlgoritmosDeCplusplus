#include <iostream>
#include <cstdlib>
#include <ctime> //para llamar al ramdon

using namespace std;

int main (){
    
    
    //inicia algoritmo de numeros aleatorios
    srand (time(NULL));
    //definir las variables
    int suma, intentos, dado,lanzamientos;
    intentos =0;
    suma= 0;
    
    cout << "Ingrese la cantidad de lanzamientos:";
    cin >> lanzamientos;
    
    for (int i=1; i<=lanzamientos; i++){
        
        dado= 1+rand()%(7-1);
        suma=suma + dado;
        intentos++;
        //itentos = intentos + 1;
        //intentos+=1;
        
        cout <<"Intento :"<<intentos<<"- CARA:"<<dado<<"- SUMA:"<<suma<<endl;
        }
        
    system ("pause");
     return 0;
    }
   
