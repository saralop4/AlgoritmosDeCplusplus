#include <cstdlib>
#include<iostream>
using namespace std;


int main() {
	int a,b,n;
	float c,ml,m;
	
		cout << " *TENGA EN CUENTA QUE LOS VALORES INGRESADOS INICIALMENTE SERAN CONSIDERADOS EN MILIMENTROS*" << endl;
	cout << "   " << endl;
		cout << " Cuantas Veces Desea Calcular Area:   ";cin>>n;
			
		cout << " ========================================================================  " << endl;
	// definir i<-2 como entero;
	for (int i=1; i<=n; i++){

	cout << "Ingrese La Base:   " ;cin >> b;
	cout << "Ingrese La Altura:    "; cin >>a;
	
	ml = b*a/2;
	c = ml*0.1;
	m = ml*0.001;
	cout << "El Area de Su Triangulo en Milímetros Es:" << ml << endl;
	cout << "El Area de Su Triangulo en Centímetros Es:" << c << endl;
	cout << "El Area de Su Triangulo en Metros Es:" << m << endl;
		cout << " ========================================================================  " << endl;
}
	system ("pause");
	return 0;
}

