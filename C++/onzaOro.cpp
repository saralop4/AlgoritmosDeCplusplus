#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	float r,k;
	int n,i;
		cout << "cuantas veces desea calcular " << endl;
	cin >> n;
		for(int i=1; i<=n; i++)
	{
	cout << "*LA ONZA DE ORO CUESTA $6,131,292.33 COP" << endl;
	cout << "Digite cuantos kilos de Oro desea saber su valor en COP" << endl;
	cin >> k;
	r = (k*6131292)/0.0283495;
	cout << "EL PRECIO TOTAL EN KILOGRAMOS DE ORO ES" << "  " << "$" << " " << r << endl;
}
	system("pause");
	return 0;
}

