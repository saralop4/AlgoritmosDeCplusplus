#include <iostream>
#include <cstdlib>
#include<windows.h>
#include <iomanip>

int mostrarmenu();
void mostrar(string msj, bool salto);

using namespace std;


int main() {
    double a,acum,acum1,capi,capital,cuoalta,cuo_ganaci,c_base,e,gananci,i_base, pago,pagop_cuota,prest,prestalto;
	int cedula,cuota,i,j,n,opc,telefono,var,var1,iteracion,n_cuotas ;
	string direccion,email,fecha,nombre;
	double prestamo,prome,suma, total,calcu,calcu2,prome1,prome2,totalinteres,interes,inters,i_base1,prest1,prest2;
	suma = 0; interes=0; capital = 1000000; prest = 0; prest1=0; prest2=0; total = 0; gananci = 0; prestalto = 0; cuota = 0; inters = 0;
	iteracion=0; i_base1 = 0; acum1 = 0;	// acumula cuantos clientes o prestamos	acum = 0;
	
	
    opc = mostrarmenu();
	
	
}

void mostrar(string msj, bool salto){
    
    if (salto==true){
     cout<< msj <<endl;   
    }
    else {
           cout<< msj ;   
        }
    }
    
     int mostrarmenu()
    {
        int opc; bool exito;
        do{
            system("cls");
        cout <<"***********************************************************"<<endl;
        cout <<"**************************MENU*****************************"<<endl;
        cout <<"**********************************************************"<<endl;
        cout << "1. Creditos de hasta 24 cuotas, el interes sera de 40%." << endl;
		cout << "2. Creditos de hasta 36 cuotas, el interes sera de 30%.." << endl;
		cout << "3. Creditos de hasta 48 cuotas, el interes sera de 20%." << endl;
		cout << "4. Creditos de hasta 60 cuotas, el interes sera de 10%.." << endl;
		cout << "5. Creditos de hasta 12 cuotas, el interes sera de 50%." << endl;
		cout << "6. Salir" << endl;
        cout <<"Digite una opcion 1/6: ";
        cin>> opc;
                         
            if(opc<0 || opc>4){
                
                mostrar("Debes escoger 0/4: ", true);
                exito =false;
                }
                else {
                 exito=true;   
                 Sleep(1500);
                }    
        }while (exito==false);
        return opc;
    }




