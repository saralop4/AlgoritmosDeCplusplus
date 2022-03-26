#include <iostream>
#include <cstdlib>
#include<windows.h>
#include <iomanip>

using namespace std;

//void limpiarN_cuotas(int n_cuotas);

int main() {
    double a,acum,acum1,capi,capital,cuoalta,cuo_ganaci,c_base,e,gananci,i_base, pago,pagop_cuota,prest,prestalto;
	int cedula,cuota,i,j,n,op,telefono,var,var1,iteracion,n_cuotas ;
	string direccion,email,fecha,nombre;
	double prestamo,prome,suma, total,calcu,calcu2,prome1,prome2,totalinteres,interes,inters,i_base1,prest1,prest2;
	suma = 0;
    interes=0;
	capital = 1000000;
	prest = 0;
	prest1=0;
	prest2=0;
	total = 0;
	gananci = 0;
	prestalto = 0;
	cuota = 0;
	inters = 0;
	iteracion=0;
	i_base1 = 0;
	acum1 = 0;	// acumula cuantos clientes o prestamos	acum = 0;
	
	cout << "Digite cuantas veces desea realizar un prestamoo" << endl;
	cin >> n;
	for (i=1;i<=n;i++) {
        c_base=0;
        pagop_cuota;
		cout << "******************************************************************" << endl;
		// menu
		cout << "---PRESTAMOS--- " << endl;
		cout << "   1. Creditos de hasta 24 cuotas, el interes sera de 40%." << endl;
		cout << "   2. Creditos de hasta 36 cuotas, el interes sera de 30%.." << endl;
		cout << "   3. Creditos de hasta 48 cuotas, el interes sera de 20%." << endl;
		cout << "   4. Creditos de hasta 60 cuotas años, el interes sera de 10%.." << endl;
		cout << "   5. Creditos de hasta 12 cuotas, el interes sera de 50%." << endl;
		cout << "   6. Salir" << endl;
		// ingresar una opcion
		cout << "Elija una opcion (1-6): ";
		cin >> op;
		cout << "**********************************" << endl;
		switch (op) {
	case 1:
          cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
		      	cin >> prestamo;
		      	if (prestamo<=capital) {
				cout << "===================================" << endl;
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
	                   cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				if (n_cuotas<=24) { 
				cout << "DIGITE LA FECHA: ";
				cin >> fecha;
					interes=40;			
            
             }else {
                   	cout <<"Debes digitar las cuotas que corresponde"<<endl;
                }
            }else {
				cout << "======================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
               	   
			break;
			
				case 2:
                 cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
		      	cin >> prestamo;
		      	if (prestamo<=capital) {
				cout << "===================================" << endl;
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
				cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				if (n_cuotas>1 && n_cuotas<=36) {
				cout << "DIGITE LA FECHA: ";
				cin >> fecha;
							interes=30;			
            } else {
						cout << "VERIFIQUE LO QUE DIGITA 2  " << endl;
					
		          	} 
            }
            else {
				cout << "======================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
			break;
			case 3:
            cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
			cin >> prestamo;
			if (prestamo<=capital) {
				cout << "===================================" << endl;
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
				cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				if (n_cuotas>1 && n_cuotas<=48) {
				cout << "DIGITE LA FECHA: ";
				cin >> fecha;
							interes=20;			
            } else {
						cout << "VERIFIQUE LO QUE DIGITA 2 " << endl;
		          	} 
            }
            else {
				cout << "======================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
			break;
			case 4:
            cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
			cin >> prestamo;
			if (prestamo<=capital) {
				cout << "===================================" << endl;
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
				cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				if (n_cuotas>1 && n_cuotas<=60) {
				cout << "DIGITE LA FECHA: ";
				cin >> fecha;
							interes=10;			
            } else {
						cout << "VERIFIQUE LO QUE DIGITA 2  " << endl;
		          	} 
            }
            else {
				cout << "======================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
			break;
			case 5:
            cout << "DIGITE LA CANTIDAD DE DINERO QUE DESEA PRESTAR:";
			cin >> prestamo;
			if (prestamo<=capital) {
				cout << "===================================" << endl;
				cout << "DIGITE SU NOMNBRE:";
				cin >> nombre;
				cout << "DIGITE LA CANTIDAD DE CUOTAS:";
				cin >> n_cuotas;
				if (n_cuotas>1 && n_cuotas<=12) {
				cout << "DIGITE LA FECHA: ";
				cin >> fecha;
							interes=50;			
            } else {
						cout << "VERIFIQUE LO QUE DIGITA 2  " << endl;
		          	} 
            }
            else {
				cout << "======================================" << endl;
				cout << "NO TENGO PLATA PARA PRESTARTE" << endl;
			}
			break;

			case 6:
			cout << "Gracias, vuelva pronto" << endl;
			break;
		    default:
			cout << "Opción no válida" << endl;
		}
		            
                               
			            prest = prest+prestamo;  // acumula y suma todos los prestamos
						prest1=prest1+n_cuotas; //acumula y suma los numeros de cuotas
						prest2= prest2+interes; //acumula y suma los intereses
						capital = capital-prestamo;// resta lo que se presto al capital y queda el valor restante
						
						c_base = prestamo/n_cuotas; // valor que debe pagar mensual sin el interes
					
						i_base = c_base*interes;	// valor del interes sin sumarle lo anterior mensual
						
						gananci = gananci+i_base;	// suma de todas las ganancias por cada prestamo
					
						cuo_ganaci = i_base*n_cuotas; // valor de la ganacia en total de todas las cuotas
					
						pagop_cuota = c_base+i_base;		// valor total que debe pagar la persona por cada cuota con el interes incluido
					
						e = pagop_cuota*n_cuotas;// valor total de los meses que debe pagar finalmente con el interes incluido
					
                    	
                        cuota = cuota+n_cuotas; // acumula las cuotas
					//	inters = inters+interes; // acumula los intereses %
						i_base1 = i_base1+i_base; //acumula el precio del interes $
						total = gananci+prestamo; //suma la ganacia mas el prestamo 
						prome = (prest/i)*100; // calcula el promedio de los prestamos
						prome1 = (prest1/i)*100; //calcula el promedio de las cuotas
						prome2 = (prest2/i)*100; //calcula el promedio de los intereses
            	        
                        Sleep(1000);
                        
                        cout << "************************" << endl;
						cout << "PRESTAMO:" << " " << i << endl;
						cout << "************************" << endl;
						cout << "CLIENTE:" << " " << nombre << endl;
						cout << "VALOR NETO:" << " $" << prestamo << endl;
						cout << "Nu CUOTAS:" << " " << n_cuotas << endl;
						cout << "CUOTA SIN INTERES" << " $ " << fixed << setprecision(0)<< c_base << endl;	 // en porcentaje
						cout << "INTERES MENSUAL:" << " " << interes << "%" << endl;	// lo que debe pagar de interes 
						cout << "INTERES POR CUOTA:" << " $" << i_base << endl;
						cout << "CUOTA CON INTERES:" << " $" << fixed << setprecision(0)<<  pagop_cuota << endl;
						cout << "GANANCIA:" << " " << cuo_ganaci << endl;
						cout << "PRESTAMO:" << " $" << prestamo << endl;
						cout << "VALOR TOTAL:" << " $" << e << endl;
	     				cout << "FECHA DE PAGO:" << fecha << endl;
		
	}	
	
	
		cout << "======================================" << endl;
	// Escribir "TOTAL CAPITAL INICIAL:"," $",capital; 
	cout << "TOTAL GANANCIAS:" << " $" << gananci << endl;
	cout << "TOTAL DINERO PRESTADO:" << " $" << prest << endl;
	cout << "TOTAL GANACIA DE CAPITAL PRESTADO:" << " $" << total << endl;
	cout << "VALOR PROMEDIO DE PRESTAMOS:" << " " << prome << endl;
	cout << "PROMEDIO DE CUOTAS DE LOS PRESTAMOS:" << "" << prome1 << endl;
	cout << "PROMEDIO DE INTERES MENSUAL DE LOS PRESTAMOS:" << "" << prome2 << endl;
	cout << "TOTAL SALDO CAPITAL:" << " $" << capital << endl;

	system ("pause");
	return 0;
	
    }   
      
  
           // }while (n_cuotas>24);
            

    
        


