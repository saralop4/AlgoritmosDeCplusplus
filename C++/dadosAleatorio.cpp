#include <iostream>
#include <cstdlib>
#include <ctime> //para llamar al ramdon

using namespace std;

int main (){
    
    
    //inicia algoritmo de numeros aleatorios
    srand (time(NULL));
    //definir las variables
    int suma, intentos, dado;
    int numjug, ganador, menos_intentos;
    
    
    cout << "Ingrese el numero de jugadores:";
    cin >> numjug;
    
    for (int i=1; i<=numjug; i++){
        
        intentos =0;
        suma= 0;
        cout << "--------------------------------------"<<endl;
        cout << "JUGADOR"<<" "<<i<<endl;
        cout <<"------------------------------------------"<<endl;
    do 
    {
        dado= 1+rand()%(7-1);
        suma=suma + dado;
        intentos++;
        //itentos = intentos + 1;
        //intentos+=1;
        
        cout <<"Intento :"<<intentos<<"- CARA:"<<dado<<"- SUMA:"<<suma<<endl;
        }
        
        while (suma<=100);
        cout <<"JUGADOR"<<i <<":    "<<intentos<< "  intentos"<<endl;
        
        if (i==1) {
            ganador =i;
            menos_intentos=intentos;
        }
        
        else 
        if(intentos<=menos_intentos){
        ganador=i;
        menos_intentos=intentos;
    }
}
cout <<"******************************************"<<endl;
cout <<"EL GANADOR ES EL JUGADOR"<<ganador<<endl;
cout <<"******************************************"<<endl;
    system ("pause");
     return 0;
    }
   
