#include <cstdlib>
#include<iostream>
using namespace std;

int main() {
	float a,b,c;
	int n,i;

	cout << "cuantas veces desea calcular " << endl;
	cin >> n;
	
	for(int i=1; i<=n; i++)
	{
	
	cout << "Ingrese la distancia en cm:" << endl;
	cin >> a;
	cout << "Seleccione la unidad de medida de distancia a la que desea convertir:" << endl;
	cout << "1. ml" << endl;
	cout << "2. m" << endl;
	cout << "3. pulg" << endl;
	cout << "4. pie" << endl;
	cout << "5. yarda" << endl;
	cout << "6. km" << endl;
	cout << "7. milla" << endl;
	cin >> b;
	if (b==1) {
		c = a*1000;
		cout << "La distancia en ml es: " << c << endl;
	} else {
		if (b==2) {
			c = 100*a;
			cout << "La distancia en m es: " << c << endl;
		} else {
			if (b==3) {
				c = a/2.54;
				cout << "La distancia en pulg es: " << c << endl;
			} else {
				if (b==4) {
					c = a/30.48;
					cout << "La distancia en pie es: " << c << endl;
				} else {
					if (b==5) {
						c = a/91.44;
						cout << "La distancia en yarda es: " << c << endl;
					} else {
						if (b==6) {
							c = a/100.000;
							cout << "La distancia en km es: " << c << endl;
						} else {
							if (b==7) {
								c = a/160.900;
								cout << "La distancia en milla es: " << c << endl;
							}
						}
					}
				}
			}
		}
	}
}
	system("pause");
	return 0;
}

