#include <cstdlib>
#include<iostream>
using namespace std;

int main() {
	float a,c_base,e,i_base,n_cuotas,pago,pagop_cuota,prestamo,suma;
	int cedula,i,j,n,op,telefono;
	string direccion,email,fecha,nombre;

	suma = 0;

	cout << "Digite cuantas veces desea realizar un prestamo" << endl;
	cin >> n;
	
	for (i=1; i<=n; i++) {
        
		cout << "******************************************************************************" << endl;
		// menu
		cout << "PRESTAMO AL 10% DE INTERES POR CADA CUOTA MENSUAL FIJA" << endl;
		cout << "   1. Acepto" << endl;
		cout << "   2. No Acepto" << endl;
		
		// antes de realizar la operacion preguntar si
    	// desea continuar con el prestamo al 10% de interes
		
				
		// ingresar una opcion
		cout << "Elija una opcion (1-2): ";
		cin >> op;
		cout << "******************************************************************************" << endl;
		
		/*leer opcion y apartir de ahi ejecute lo que esta dentro de la instruccion
        o salgase de ella y muestre un mensaje que diga gracias*/
		switch (op) {
            
		case 1:
			cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
			cin >> prestamo;
			
			//se valida primero el capital, si se cumple entra en la condicion y sino se sale
			if (prestamo<=500000) {
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
				cout << "DIGITE SU CEDULA:";
				cin >> cedula;
				cout << "DIGITE SU TELEFONO:";
				cin >> telefono;
				cout << "DIGITE SU EMAIL:";
				cin >> email;
				cout << "DIGITE SU DIRECCION:";
				cin >> direccion;
				cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				
				// valor que debe pagar mensual sin el interes
				c_base = prestamo/n_cuotas;
				// valor total que debe pagar la persona por cada cuota con el interes incluido
				i_base = c_base*10/100;
				// valor total de los meses que debe pagar finalmente con el interes incluido
				pagop_cuota = c_base+i_base;
		        //lo que se gana el prestamista en total
				e = pagop_cuota*n_cuotas;
				cout << "=============================================================" << endl;
				cout << "VALOR CUOTA MENSUAL:" << " $ " << pagop_cuota << endl;
				cout << "PRESTAMO:" << " $ " << prestamo << endl;
				cout << "TOTAL GANANCIA:" << " $ " << e << endl;
				cout << "=============================================================" << endl;
				cout << "REGISTRAR LAS FECHAS DE PAGOS" << endl;
				cout << "=============================================================" << endl;
				
				//con este ciclo intento  que el prestamista registre las fechas de pagos
				// Repetir preguntas 
				for (j=1; j<=n_cuotas; j++) {
					cout << "Digite la Fecha" << endl;
					cin >> fecha;
					cout << "Digite El Pago" << endl;
					cin >> pago;
						cout << "======================================================================" << endl;
					cout << "FECHA" << " : " << fecha << " - " << "CUOTA" << "$ " << pago << endl;
						cout << "======================================================================" << endl;
					//acumulador
					suma = suma+pago;
				}
				cout << "======================================================================" << endl;
				cout << "VALOR TOTAL DE LAS FECHAS CANCELADAS" << " $ " << suma << endl;
		
		
				
			} else {
				cout << "=============================================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
			break;
		case 2:
			cout << "Gracias, vuelva pronto" << endl;
			break;
			//break cierre de los casos
		default:
			cout << "Opcion no valida" << endl;
		}
	
	}
	system("pause");
	return 0;
}

