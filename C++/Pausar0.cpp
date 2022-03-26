#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numero;
    
    // el do while funciona al revez, primero pide los datos luego entra a la condicion
    // y si la condicion es verdadera, vuelve y pide los datos hasta que la condicion devuelva falso
    do{
        
    cout<< "digite un numero:";
    cin>>numero;
    }
   
    while (numero > 0 );
          cout<< "HASTA AQUI LLEGASTE";
          
            cout<<"\n\n";
    system ("pause");
return 0;
}
