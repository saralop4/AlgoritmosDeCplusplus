#include<iostream>
#include<cstdlib>
#include <windows.h>


using namespace std;

void pedirNotas();
void mostrarNotas();

int numCalif, *calif; // variable global  numCalif

int main (){
    
    pedirNotas();
    mostrarNotas();
    Beep(500, 500);
    Beep(750, 450);
    Beep(900, 300);
    Beep(500, 200);
    Beep(750, 200);
    Beep(900, 100);
    Beep(500, 100);
    Beep(750, 100);
    Beep(900, 100);
    Beep(500, 50);
    Beep(750, 50);
    Beep(1000, 900);
    delete[] calif; // con delete liberamos el espacio en byte de lo que se uso
                   //el delete con [] es porque se uso un arreglo 
                   //el delete siempre se declara despues de haber declarado el new
system("pause");
return 0;
}

void pedirNotas(){
 cout<< "Digite el numero de calificaciones: ";
 cin>> numCalif;
 
 calif = new int [numCalif];// calif se iguala a la primera posicion del arreglo para luego acceder a todas las posiciones
         /*new permite reservar memoria // luego se declara el tipo de dato del vector y se le
         asigna el valor que diga el usuario */
 
 for (int i=0; i<numCalif; i++){ // aqui se recorre cada posicion para ingresar un dato
 
    cout<<"Ingrese una nota: ";
    cin>> calif[i]; // calif es una variable puntero que contiene la primera posicion del vector
                    //pero al recorrerse en el bucle se accede a las posiciones 
    
    }
}

void mostrarNotas(){
 cout<<"Mostrando notas del usuario\n";
 for(int i=0; i<numCalif; i++){
        cout <<calif[i]<<endl;
        Sleep(1000);
        
    }
    
}
