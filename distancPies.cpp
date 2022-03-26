#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    
	float d,i,m,p;
	int n;

	cout <<"Digite cuantas veces desea calcular la distancia"<<endl;
    cin >> n;
	cout << "-------------------------------------------------------------" << endl;
	
  for (int i=1; i<=n; i++){
        
	cout << "Digite La Distancia De Su Destino" << endl;
	cin >> d;
	m = d*60/120;
	p = d*3.28084/1;
	cout << "Los minutos de su destino es de=" << m << " " << "Minutos" << endl;
	cout << "La cantidad de pies para llegar a su destino es de=" << p << "   " << "Pies" << endl;
	cout <<"----------------------------------------------------------------------"<<endl;
	
}

   system("pause");
	return 0;
}

