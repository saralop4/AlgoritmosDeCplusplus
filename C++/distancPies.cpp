#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
	float d;
	float i;
	float m;
	float p;
	cout << "Digite La Distancia De Su Destino" << endl;
	cin >> d;
	m = d*60/120;
	p = d*3.28084/1;
	cout << "Los minutos de su destino es de=" << m << " " << "Minutos" << endl;
	cout << "La cantidad de pies para llegar a su destino es de=" << p << "   " << "Pies" << endl;
			system("pause");
	return 0;
}

