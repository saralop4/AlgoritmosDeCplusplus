#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int suma= 0 , cuadrado;
    
    //cout <<"Digite un numero ";cin>>cuadrado;
    //lo que esta en (int i=1) se ira multiplicando por si mismo 
    //hasta llegar al 10 que es el valor minimo 
    for (int i=1; i<=10; i++){
    //para sacar el cuadrado de un numero, es multiplicarlo por el mismo
    // como en la siguiente linea
    
    cuadrado =i*i;
    
    // en la siguiente linea los cuadrados se iran sumando uno por uno
    //internamenre (suma iterativa ) es como decir (suma =suma +cuadrado;)}
    
    suma+=cuadrado;
}
// se cierra el ciclo y luego muestra por pantalla el resultado

    cout <<"El resultado de la suma es :"<<suma<<endl;
    
    
    system("pause");
    return 0;
    
    }
