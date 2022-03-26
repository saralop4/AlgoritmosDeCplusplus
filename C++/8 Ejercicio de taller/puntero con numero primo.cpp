#include <cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int main() {
    
    
    int numero,*dir_numero,num;
    int alet=10;
    
    
    
        for (num=1;num<=alet;num++) {
            	int	x = 1;
            	int	cont = 0;
            
            cout <<"Digite un numero: "<<endl;
            cin >> numero;
            
             dir_numero = &numero;
            
            	while (x<=*dir_numero) {
			if (*dir_numero%x==0) {
				cont = cont+1;
			}
			x = x+1; // incrementa el valor de 1 y se compara con el valor de num que equivale al mismo valor
		}// cierre ciclo while
		if (cont==2) {
             cout <<"============================="<<endl;
		   cout <<"El numero  "<<*dir_numero<<" Es primo"<<endl; 
         cout <<"Direccion: "<< dir_numero <<endl;
		}  
        
        else {
         cout << "El numero no es primo"<<endl;   
         cout <<"Direccion: "<< dir_numero <<endl;
        }
    }
    system ("pause");
	return 0;
}
