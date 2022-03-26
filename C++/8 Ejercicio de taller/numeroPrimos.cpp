#include <cstdlib>
#include<iostream>
#include<ctime>

using namespace std;

int main() {
	int num, alet=200;
	int aletprimos;

  srand(time(NULL));
  
	for (num=1;num<=alet;num++) {// num toma el valor de 1 a 199 cuando llega a 199 se detiene el ciclo ya que 199 es menor a 200
	int	x = 1;
	int	cont = 0;
	 
		while (x<=num) {
			if (num%x==0) {
				cont = cont+1;
			}
			x = x+1; // incrementa el valor de 1 y se compara con el valor de num que equivale al mismo valor
		}// cierre ciclo while
		if (cont==2) {
			cout << "el numero " << num << " es primo" << endl;
		}
	}
	system ("pause");
	return 0;
}

	
