#include <cstdlib>
#include<iostream>
using namespace std;


int main() {
	int a,i,r,n;
	float d,t;
		cout << "cuantas veces desea calcular " << endl;
	cin >> n;

 	for(int r=1; r<=n; r++)
	{
	cout << "Digite Una Cantidad De Dinero : " << endl;
	cin >> d;
	cout << "Escoja La Moneda De Origen Digitando El Numero Al Que Corresponde" << endl;
	cout << "1. Peso" << endl;
	cout << "2. Dólar" << endl;
	cout << "3. Euros" << endl;
	cout << "Digite El Numero :" << endl;
	cin >> a;
	cout << "Ahora Escoja La Moneda De Salida Segun El Numero" << endl;
	cout << "1. Dolar" << endl;
	cout << "2. Euros" << endl;
	cout << "3. Peso" << endl;
	cout << "Digite El Número : " << endl;
	cin >> i;
	// de peso a dolar
	if (a==1 && i==1) {
		t = d*0.00028;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
	// de peso a euros 
	if (a==1 && i==2) {
		t = d*0.00023;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
	// de peso a peso
	if (a==1 && i==3) {
		cout << "Es El Mismo Valor " << endl;
	} else {
		// escribir " * Solo Se Reconocen Los Numeros Del 1 al 3*";
	}
	// de dolar a peso
	if (a==2 && i==3) {
		t = d*3.63515;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
	// de dolar a euro
	if (a==2 && i==2) {
		t = d*0.83;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
	// de dolar a dolar
	if (a==2 && i==1) {
		cout << "Es El Mismo Valor " << endl;
	} else {
		// escribir " * Solo Se Reconocen Los Numeros Del 1 al 3*";
	}
	// de euro a peso
	if (a==3 && i==3) {
		t = d*44.04;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
	// de euro a dolar
	if (a==3 && i==1) {
		t = d*1.21;
		cout << " El Cambio De Peso a Dolar Es De: " << t << endl;
	} else {
		// escribir " Se Reconocen Los Numeros Del 1 al 3";
	}
}
	system("pause");
	return 0;
}

