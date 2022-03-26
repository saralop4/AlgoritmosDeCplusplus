#include <cstdlib>
#include <iostream>

using namespace std;


int main() {
	int a,b,n;
	float e,m,r;

	cout << "* TENGA EN CUENTA QUE LOS VALORES INGRESADOS INICIALMENTE SERAN CONSIDERADOS EN METROS*" << endl;
		cout << " ---------------------------------------------------------------------------" << endl;
    cout <<"Digite cuantas veces desea calcular el area"<<endl;
    cin >> n;

    for (int i=1; i<=n; i++){

	cout << " Ingrese La Base:   " << endl;
	cin >> b;
	cout << "Ingrese La Altura:    " << endl;
	cin >> a;
	
	r = b*a;
	m = r*10.000;
	e = r*1000000;
	cout << "El Area de Su Rectangulo en Metro Es:" << r << endl;
	cout << "El Area de Su Rectangulo en Centímetros Es:" << m << endl;
	cout << "El Area de Su Rectangulo en Milímetros Es:" << e << endl;
			cout << " ========================================================================== " << endl;
	}
	system ("pause");
	return 0;
}

