#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	int b,p,paredes,n;
	float precio;
	
		    cout <<"Digite cuantas veces desea calcular los block"<<endl;
    cin >> n;
    	cout << "-------------------------------------------------------------" << endl;

       for (int i=1; i<=n; i++){
	
	cout << "digite el precio de un block" << endl;
	cin >> precio;
	p = 49*13/1;
	b = precio*p;
	cout << "la cantidad de block que se necesitan para construir su casa de 4 paredes es de:" << p << " " << "Blocks" << endl;
	cout << "El precio total a pagar es de:" << b << "    " << "Total"<<endl;
	    	cout << "-------------------------------------------------------------" << endl;
}

	system("pause");
	return 0;
}

