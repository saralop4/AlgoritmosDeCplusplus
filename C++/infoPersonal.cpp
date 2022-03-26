#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
	float edad, estatura;
	int n;
	string nombre;
	cout << "Cuantas las veces que va a ingresar datos:"<<endl;
	cin >> n;
	
	for (int i=1; i<=n; i++){
	cout << "Digite Su Nombre :  " << endl;
	cin >> nombre;
	cout << "Digite su Edad : " << endl;
	cin >> edad;
	cout << "Digite su Estatura :" << endl;
	cin >> estatura;
	cout << "=======================================" << endl;
		cout << "Usted Se Llama =" << "  " << nombre << "  " << "Tiene" << "  " << edad << "  " << "Años" << "  " << "Y Mide" << "  " << estatura << endl;
	cout << "=======================================" << endl;  
}
    system ("pause");
	return 0;
}



