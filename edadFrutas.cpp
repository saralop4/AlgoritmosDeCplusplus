#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	int e,i,r,n;
	
	do{
	cout << "Digite Su Edad:  "; cin >> e;
	
	r = (e*8)*1000;
	i = (e*8)*1000/4;

	cout << "==========================================================" << endl;
	cout << "La Cantidad De Gramos Que Usted Consumio Es:" << "      " << r << endl;
	cout << "La Cantidad de Manzanas Que Usted Consumio Es:" << "     " << i << endl;
	}while (e<100);
	
	system("pause");
	return 0;
}

