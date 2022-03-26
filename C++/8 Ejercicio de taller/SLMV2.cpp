#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;


int main() {
	float bonos,cdias,hd,hdn,hexd,hexn, hfn,hfd,hjn, horas,pension,r, sn;
	float diat, eps,shfn;
	string e,em;
	int i,n;
    float shd,shdn,shexd,shexn,shfd, shn,sueldo,t,totalsaldo,trans,ts,vfd;	
    float  vhd, vhdn, vhexd, vhexn, vhfd, vhfn,vhn;
	cout << "Digite cuantos veces desea calcular: " << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
		cout << "Ingrese el nombre de la empresa: ";
		cin >> e;
		cout << "Ingrese su nombre: ";
		cin >> em;
		cout << "Ingrese su sueldo base: ";
		cin >> sueldo;
		cout << "=====================================================================================" << endl;
		if (sueldo<908526) {
			cout << "No puede ganar menos del SMVL" << endl;
		} else {
			cout << "Su salario es: " << sueldo << endl;
			cout << "=====================================================================================" << endl;
		}
		diat = sueldo/30;
		horas = diat/8;
		cout << "Ingrese los dias trabajados: ";
		cin >> cdias;
		t = (cdias*sueldo)/30;
		cout << "Ingrese las horas trabajadas en jornada nocturna: ";
		cin >> hjn;
		vhn = horas*0.35;
		shn = vhn*hjn;
		shn = int(shn+.5);
		cout << "Ingrese las horas dominicales trabajadas diurnas: ";
		cin >> hd;
		vhd = horas*0.75;
		shd = vhd*hd;
		shd = int(shd+.5);
		cout << " Ingrese las horas dominicales trabajadas nocturnas: ";
		cin >> hdn;
		vhdn = horas*1.10;
		shdn = vhdn*hdn;
		shdn = int(shdn+.5);
		cout << "Ingrese las horas extras trabajadas diurnas: ";
		cin >> hexd;
		vhexd = horas*0.25;
		shexd = vhexd*hexd;
		shexd = int(shexd+.5);
		cout << "Ingrese las horas extras trabajadas nocturnas: ";
		cin >> hexn;
		vhexn = horas*0.75;
		shexn = vhexn*hexn;
		shexn = int(shexn+.5);
		cout << "Ingrese las horas trabajadas dia festivo diurnas: ";
		cin >> hfd;
		vhfd = horas*1;
		shfd = vhfd*hfd;
		shfd = int(shfd+.5);
		cout << "Ingrese las horas trabajadas dia festivo nocturnas: ";
		cin >> hfn;
		vhfn = horas*1.5;
		shfn = vhfn*hfn;
		shn = int(shn+.5);
		cout << "Ingrese los bonos que le han dado durante el mes: ";
		cin >> bonos;
		r = shfn+shfd+shexn+shexd+shdn+shd+shn+bonos;
		if (sueldo>=908526 && sueldo<1817052) {
			trans = sueldo*0.10;
			cout << "El auxilio de tranporte es: " << trans << endl;
		}
		sn = sueldo+r+trans;
		eps = sn*0.04;
		pension = sn*0.04;
		ts = eps+pension;
		totalsaldo = sn-ts;
		cout << "=====================================================================================" << endl;
		cout << "El empleado es: " << em << endl;
		cout << "El sueldo base es: " << sueldo << endl;
		cout << "Valor de dia trabajado: " << diat << endl;
		cout << "Valor por hora: " << horas << endl;
		cout << "Los dias trabajados son: " << cdias << endl;
		cout << "El salario por los dias trabajados son: " << t << endl;
		cout << "Horas nocturnas:  " << hjn << " Horas" << endl;
		cout << "Salario por recargo nocturno: " << shn << endl;
		cout << "Horas dominicales de dia: " << hd << " Horas" << endl;
		cout << "Salario por horas dominicales de dia: " << shd << " Horas" << endl;
		cout << "Horas dominicales de noche: " << hdn << " Horas" << endl;
		cout << "Salario por horas dominicales de noche: " << shdn << endl;
		cout << "Horas extras dia: " << hexd << " Horas" << endl;
		cout << " Salario Horas extras dia: " << shexd << endl;
		cout << "Horas extras noche: " << hexn << " Horas" << endl;
		cout << "Salario horas extras noche: " << shexn << endl;
		cout << "Horas extras festivos dia: " << hfd << " Horas" << endl;
		cout << "Salario horas extras festivos dia: " << shfd << endl;
		cout << "Horas extras festivos noche: " << hfn << endl;
		cout << "Salario horas extras festivos noche: " << shfn << endl;
		cout << "Bonificaciones: " << bonos << endl;
		cout << "Total salario por recargo: " << r << endl;
		cout << "Total auxilio de transporte: " << trans << endl;
		cout << "Total salario neto: " << sn << endl;
		cout << "Aporte EPS: " << eps << endl;
		cout << "Aporte pension: " << pension << endl;
		cout << "Total deducciones: " << ts << endl;
		cout << "Salario Final: " << totalsaldo << endl;
	}
    system ("pause");
	return 0;
}

