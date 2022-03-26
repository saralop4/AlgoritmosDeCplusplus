#include <cstdlib>
#include<iostream>
using namespace std;

int main() {
	int b;
	float e,u,n,m;
	
		    cout <<"Digite cuantas veces desea calcular su cabellera"<<endl;
    cin >> n;
	cout << "-------------------------------------------------------------" << endl;
       for (int i=1; i<=n; i++){

	cout << "Digite Su Edad " << endl;
	cin >> b;
	e = b*12/1;
	u = e*50/1;
	m = u*1/100;
	cout << "Usted Tiene" << "   " << m << "   " << " Metros De Largo En Cabellera" << endl;
		cout << "-------------------------------------------------------------" << endl;
}
	system("pause");
	return 0;
}

