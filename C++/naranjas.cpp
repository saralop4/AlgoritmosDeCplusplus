#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	float i,n,p,t,v;
     int e,r;
		cout << "cuantas veces desea calcular " << endl;
	cin >> r;
		for( e=1; e<=r; e++)
	{
	cout << "Digite cuantos kilovoltios necesita para su iluminacion" << endl;
	cin >> v;
	p = v*1000/1;
	n = p*1/0.05;
	t = n*6;
	i = t*0.000001/1;
	cout << "CANTIDAD DE NARANJA QUE SE NECESITAN PARA SU ILUMINACION:" << n << endl;
	cout << "TONELADAS DE NARANJA QUE SE NECESITAN :" << i << endl;
}
		system("pause");
	return 0;
}

