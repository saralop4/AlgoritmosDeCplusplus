#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

char obtenerCaracter( int codigo);

int main()
{
 
    int codigoLetra,tamanio;
    char letra;

    for( int j = 1; j <= 3; j++ ) // pasa saber la cantidad de letras quue van a salir
    {
        cout << j << "). "; 
        tamanio = 4 + rand() % (41-1); // tamaño de la palabra - el numero que salga valdra la palabra  
        cout<< "mostrar el tamaño de la palabra"<<tamanio<<endl; // 5
        
         for( int i = 1; i <= tamanio ; i++ ) { //para saber que letras van salir 
            codigoLetra = 0 + rand() % (26-1);
            letra = obtenerCaracter(codigoLetra); // obtener una letra desde la a hasta la z
            cout << letra;
        }
        cout << endl;
    }
  system("pause");
  return 0 ; 
}  


char obtenerCaracter( int codigo) //codigo representa la legra en numero es decir el 1 es la a
{
    char letras[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','u','s','t','w','x','y','z'};
    return letras[ codigo ];
}
