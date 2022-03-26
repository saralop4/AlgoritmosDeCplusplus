#include <stdlib>

#include<iostream>
using namespace std;


int main() {
	int a;
	float d;
	float e;
	float j;
	float n;
	float q;
	float r;
	float t;
	float w;
	cout << "Digite Su Edad" << endl;
	cin >> a;
	e = a/100;
	q = a/10;
	w = a*12;
	r = a*52.143;
	t = a*365;
	d = a*8760;
	n = a*525600;
	j = a*3154;
	cout << "Usted Ha Vivido" << "   " << e << "   " << "Siglos" << endl;
	cout << "Usted Ha Vivido" << "   " << q << "   " << "Decadas" << endl;
	cout << "Usted Ha Vivido" << "   " << w << "   " << "Meses" << endl;
	cout << "Usted Ha Vivido" << "   " << r << "     " << "Semanas" << endl;
	cout << "Usted Ha Vivido" << "   " << t << "   " << "Dias" << endl;
	cout << "Usted Ha Vivido" << "   " << d << "   " << "Horas" << endl;
	cout << "Usted Ha Vivido" << "   " << n << "   " << "Minutos" << endl;
	cout << "Usted Ha Vivido" << "   " << j << "   " << "Milisegundos" << endl;
	return 0;
}

