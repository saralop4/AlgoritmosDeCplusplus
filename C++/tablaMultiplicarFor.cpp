#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
    int numero;
    
    
    do{
        
    cout<< "digite un numero:";
    cin>>numero;
    }
    /*el numero  estara comparado en el rango del 1 al 10 
     segun el numero que se digite se creara la tabla de
     multiplicar */
    while ((numero <1) || (numero>10 ));
    // en el ciclo for indica que se multiplicara el numero 
    //hasta el 20
        for (int i=1; i<=20; i++)
        {
            cout << numero <<"*"<<i<<"="<< numero *i<<endl;
            
            
            }
        
            cout<<"\n\n";
    system ("pause");
return 0;
}


