#include <cstdlib>
#include<iostream>

using namespace std;


int main() {
	float a,b,c;
	int n;
	
	  cout <<"Digite cuantas veces desea calcular la masa"<<endl;
    cin >> n;
	cout << "-------------------------------------------------------------" << endl;
  for (int i=1; i<=n; i++){

	cout << "Digite La Masa:" << endl;
	cin >> a;
	cout << "Seleccione la unidad de medida de gramos a la que desea convertir:" << endl;
	cout << "1. Hectogramos a Gramos" << endl;
	cout << "2. Kilogramos a Hectogramos" << endl;
	cout << "3. Gramos a Kilogramos" << endl;
	cout << "4. Gramos a Decigramos" << endl;
	cout << "5. Gramos a Centigramos" << endl;
	cout << "6. Kilogramos a Libras Métricas" << endl;
	cout << "7. Kilogramos a Decagramos" << endl;
	cout << "8. Toneladas a Kilogramos" << endl;
	cout << "9. Onza a  Kilogramos" << endl;
	cout << "10. Gramos a Miligramos" << endl;
	cout << "Usted Ingresó" << endl;
	cin >> b;
	if (b==1) {
		c = a*100;
		cout << "La Conversion de Hectogramos a Gramos es: " << c << endl;
	} else {
		if (b==2) {
			c = a*10;
			cout << "La Conversion de Kilogramos a Hectogramos es: " << c << endl;
		} else {
			if (b==3) {
				c = a/1000;
				cout << "La Conversión de Gramos a Kilogramos es: " << c << endl;
			} else {
				if (b==4) {
					c = a*10;
					cout << "La Conversion de Gramos a Decigramos es: " << c << endl;
				} else {
					if (b==5) {
						c = a*100;
						cout << "La Conversion de Gramos Centigramos es: " << c << endl;
					} else {
						if (b==6) {
							c = a*2.20462;
							cout << "La Conversion de Kilogramos  Libras Métricas es: " << c << endl;
						} else {
							if (b==7) {
								c = a/10;
								cout << "La Conversion de Kilogramos a Decagramos es: " << c << endl;
							} else {
								if (b==8) {
									c = a*907;
									cout << "La Conversion de Toneladas a Kilogramos  es: " << c << endl;
								} else {
									if (b==9) {
										c = a/35.274;
										cout << "La Conversion de Onza a Kilogramos es: " << c << endl;
									} else {
										if (b==10) {
											c = a*1000;
											cout << "La Conversion de Gramos a Miligramos es: " << c << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
		cout << "-------------------------------------------------------------" << endl;
}
    system("pause");
	return 0;
}

