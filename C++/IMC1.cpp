#include<cstdlib>
#include<iostream>

using namespace std;

int main() {
	float e,i,p;
    while(i<=100){
	// definir e ,p ,i como numerico;
	cout << " Digite Su Peso En Kg" << endl;
	cin >> p;
	cout << " Digite Su Estatura Mts" << endl;
	cin >> e;
	i = p/(e*e);
	if (i<=18.5) {
		cout << "Su IMC Es Desnutrido  " << endl;
	} else {
		if (i>=18.5 && i<=24.9) {
			cout << " Su IMC Es Normal" << endl;
		}
	}
	if (i>=25.0 && i<=30) {
		cout << " Su IMC Es Pero Superior Al Normal" << endl;
	} else {
		if (i>=30 && i<=100) {
			cout << " Su IMC Es Obeso" << endl;
		}
	}
}
		system("pause");
	return 0;
}

