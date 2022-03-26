#include <iostream>
#include <cstdlib>
#include <ctime> //para llamar al ramdon

using namespace std;

int main (){
    
    
    //inicia algoritmo de numeros aleatorios
    srand (time(NULL));
    //definir las variables
    int intentos, dado;
    int numjug;
    intentos =0;
    
    cout << "DIGITE CANTIDAD DE LANZAMIENTOS:";
    cin >> numjug;
    
    for (int i=1; i<=numjug; i++){
        
   
      // suma= 0;
        
        dado= 1+rand()%(7-1);
        //suma=suma + dado;
        intentos = intentos + 1;
        //intentos+=1;
        
        cout <<"Intento :"<< intentos <<"- CARA:"<<dado<<endl;
        
        }

    system ("pause");
     return 0;
    }
   
