#include<cstdlib>
#include<iostream>
using namespace std;

int main() {
    int n,e,a,i;
	do{
	cout << "Digite su Edad" << endl;
	cin >> e;
	if (e>0 && e<5) {
		cout << "ETAPA: Primera Infancia " << endl;
	} else {
		if (e>6 && e<11) {
			cout << "ETAPA: Adolescencia" << endl;
		}
	}
	if (e>12 && e<18) {
		cout << "ETAPA: Juventud " << endl;
	} else {
		if (e>19 && e<26) {
			cout << "ETAPA: Adultez" << endl;
		}
	}
	if (e>27 && e<59) {
		cout << "ETAPA: Adulto Maduro" << endl;
	} else {
		if (e>60 && e<200) {
			cout << "ETAPA: Adulto Mayor" << endl;
		}   
	}
	cout <<"----------------------------------------------"<<endl;
} while  (e<=200);
	system("pause");
	return 0;
}

