#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	int a,n;
	
	cout <<"Digite cuantas veces desea calcular el a�o biciesto"<<endl;
    cin >> n;

    for (int i=1; i<=n; i++) {
            
	cout << "DIGITE EL A�O:"<<endl;
	cin >> a;
	
	cout << "---------------------------------------------------------------" << endl;
	
	if ((a % 4!=0 && a % 100!=0 && a % 400!=0)) {
		cout << "el a�o es biciesto" << endl;
			cout << "========================================================" << endl;
	} else {
		cout << "el a�o no es biciesto" << endl;
			cout << "========================================================" << endl;
	}
}
	system("pause");
	return 0;
}

