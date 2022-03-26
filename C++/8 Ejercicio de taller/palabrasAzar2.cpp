#include<iostream>
#include<cstdlib>
#include<ctime>
	using namespace std;
	
	char obtenerCaracter( int codigo);
	
	int main()
	{
	 
	    int codigoLetra,tamanio, contA, contB, contC, contD;  
	    char letra;
	
	    for( int j = 1; j < 1000; j++ ) 
	    {
	        cout << j << "). "; 
	        tamanio = 4 + rand() % (41-1);
	         for( int i = 1; i < tamanio ; i++ ) {
	            codigoLetra = 0 + rand() % (26-1);
	            letra = obtenerCaracter(codigoLetra);
	            cout << letra;
	        }
	        cout << endl;
	    }
	  system("pause");
	  return 0 ; 
	}  
	
	
	char obtenerCaracter( int codigo)
	{
	    char letras[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','u','s','t','w','x','y','z'};
	    return letras[ codigo ];
	}
