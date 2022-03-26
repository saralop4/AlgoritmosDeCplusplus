#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void esperar(double t);



int main() {
	int i,n = 10;
    string letras1[] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","n","o","p","q","r","s","t","v","w","x","y","z"};
   // srand (time (NULL));
	for (i=1;i<=n;i++) {
				cout << letras1[(0+rand()%27-1)] << letras1[(0+rand()%27-1)] << letras1[(0+rand()%27-1)] << letras1[(0+rand()%27-1)] << letras1[(0+rand()%27-1)] << endl;
				
	}
	system("pause");
	return 0;

}

