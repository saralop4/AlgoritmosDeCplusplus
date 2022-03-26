#include <cstdlib>
#include<iostream>
using namespace std;

int main() {
	int a,c,r,u,s;
	float m;
	string n;

	  cout <<"Digite cuantas veces desea calcular la masa"<<endl;
    cin >> s;
	cout << "-------------------------------------------------------------" << endl;
	
  for (int i=1; i<=s; i++){ 
	// definir dias=365 como entero;
	cout << "*CALCULEMOS CUANTOS DIAS HAS DORMIDO  DURANTE TODA TU VIDA *" << endl;
	cout << "Digite Su Nombre" << endl;
	cin >> n;
	cout << "Digite  El Año En Que Nació" << endl;
	cin >> a;
	cout << "Digite El Año Actual" << endl;
	cin >> c;
	r = c-a;
	u = 365*r;
	m = (34*u)/100;
	cout << "   " << n << "  " << "Tienes" << "    " << r << "     " << "Años " << endl;
	cout << "Y Has Dormido" << "    " << m << "     " << "Dias De Tu Vida" << endl;
	cout <<"-------------------------------------------------------------------"<<endl;
}
    system("pause");
	return 0;
}

