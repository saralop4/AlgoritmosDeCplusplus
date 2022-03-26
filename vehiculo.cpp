#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main() {
	float c,costo,g,galones,km,l,m,pies,t,yardas;
	int f,i,r;

	   		cout << "cuantas veces desea calcular " << endl;
	cin >> r;
		for( i=1; i<=r; i++)
	{
	cout << "Ingrese el recorrido en kilometros del vehiculo: " << endl;
	cin >> km;
	m = 62.2*1.60934;
	l = (km*15)/m;
	g = 3.78541;
	galones = l/g;
	f = l/75.7082;
	t = (75.7082*m)/15;
	pies = t*3281;
	costo = galones*8327;
	yardas = km*1094;
	c = 1/costo;
	cout << "======================================================== " << endl;
	cout << "Numeros de galones necesarios: " << galones << endl;
	cout << "costo total del combustible: " << costo << endl;
	cout << "costo por yarda recorrida: " << c << endl;
	cout << "Cantidad de Veces que debe tanquear full: " << f << endl;
	cout << "Usted debe tanquear cada: " << pies << " pies " << endl;
	
//	f = int(f+.5);
}
		system ("pause");
	return 0;
}

