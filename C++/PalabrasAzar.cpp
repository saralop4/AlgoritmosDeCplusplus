#include<iostream>
#include<cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

int main() {
	int i,j,tamanio;
    string letras[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","n","o","p","q","r","s","t","v","w","x","y","z"};
    srand (time (NULL));
   
	for (i=1; i<=5; i++) {
        Sleep(1000);
        tamanio= (4+rand()%21-1);
            
        	for (j=1; j<=tamanio; j++) {
                	cout << letras[(0+rand()%26-1)];  
            }
				cout <<""<<endl;			
	}
	system("pause");
	return 0;
}

