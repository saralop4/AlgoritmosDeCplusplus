#include<cstdlib>
#include<iostream>
using namespace std;
int main() {
	float e,g,i,m,p,n,r;
	// definir e ,p ,i como numerico;
	cout << "cuantas veces desea calcular " << endl;
	cin >> n;
	
	for(int r=1; r<=n; r++)
	{
	cout << " Digite Su Peso En Libras" << endl;
	cin >> p;
	cout << " Digite Su Estatura Centimmetros" << endl;
	cin >> e;
	g = p*0.453592;
	m = e*0.01;
	i = g/(m*m);
	if (i<=18.5) {
		cout << "Su IMC Es Desnutrido  " << endl;
	} else 
		if (i>=18.5 && i<=24.9) {
			cout << " Su IMC Es Normal" << endl;
		}
	
	if (i>=25.0 && i<=30) {
		cout << " Su IMC Es Pero Superior Al Normal" << endl;
	} else 
		if (i>=30 && i<=100) {
			cout << " Su IMC Es Obeso" << endl;
	}
}
	system("pause");
	return 0;
    }

