#include<cstdlib>
#include<iostream>
using namespace std;


int main() {
	int a,n;
	
	cout <<"Digite cuantas veces desea calcular el año biciesto"<<endl;
    cin >> n;

    for (int i=1; i<=n; i++) {
            
	cout << "DIGITE EL AÑO:"<<endl;
	cin >> a;
	
	cout << "---------------------------------------------------------------" << endl;
	
	if ((a % 4!=0 && a % 100!=0 && a % 400!=0)) {
		cout << "el año es biciesto" << endl;
			cout << "========================================================" << endl;
	} else {
		cout << "el año no es biciesto" << endl;
			cout << "========================================================" << endl;
	}
}
	system("pause");
	return 0;
}

