#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	int a,b,c,i,n;
	cout << "cuantas veces desea calcular " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++)
	{
	cout << "Digite Un Numero " << endl;
	cin >> a;
	cout << "Digite Un Numero " << endl;
	cin >> b;
	cout << "Digite Un Numero " << endl;
	cin >> c;
	if (a>b && a>c && b>c) {
		cout << "El Orden de Mayor a Menor Es: " << a << "-" << b << "-" << c << endl;
	} else {
		if (a>b && a>c && c>b) {
			cout << "El Orden de Mayor a Menor Es: " << a << "-" << c << "-" << b << endl;
		}
	}
	if (b>a && b>c && a>c) {
		cout << "El Orden de Mayor a Menor Es: " << b << "-" << a << "-" << c << endl;
	} else {
		if (b>a && b>c && c>a) {
			cout << "El Orden de Mayor a Menor Es: " << b << "-" << c << "-" << a << endl;
		}
	}
	if (c>a && c>b && a>b) {
		cout << "El Orden de Mayor a Menor Es: " << c << "-" << a << "-" << b << endl;
	} else {
		if (c>a && c>b && b>a) {
			cout << "El Orden de Mayor a Menor Es: " << c << "-" << b << "-" << a << endl;
		}
	}
}

system("pause");
	return 0;
}

