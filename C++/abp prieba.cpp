#include <iostream>
#include <cstdlib>
#include <fstream>
#include <stdio.h>
#include <ctime>

using namespace std;
//-------funciones---------------------
int mostrarmenu();
void mostrar(string msj,bool salto);
//--------------------------------------
//--------estructuras---------------------------
struct control{
	string fechacon;
	string hora;    
}cita[100];

struct Paciente{
	int id; 
	string nombre;
	int edad;
	string fecha_naci;  
	string genero;
	string correo;
	string cel1,cel2;
	string descrip;
}pacientes[100]; 
//--------------------------------------------------
int main (){
	
	int opc,respuesta,i=0,j=1,l=1,n=1;
	float con=160000,sin=120000;
	int tipo[100];
	int pago[100];
	float ganancias=0;
	int atendidos=0;
	int x=0;
	 srand (time(NULL));
	
	cout <<"*"<<endl;
	cout <<"*BIENVENIDO A MEDICAL SOFT S.J.F*"<<endl;
	cout <<"*"<<endl;
	
	do{	
		opc = mostrarmenu(); //segun lo que se almacene aqui se ejecuta el switch
		system("cls"); //limpiar pantalla
		
		 /*usamos un bucle para nuestra condicion multiple para facilitar al admin 
         realizar varias operaciones sin que el programa se cierre y tenga que volver a ingresar*/
		
		switch (opc){ // utilizamos este condicional multiple para realizar una operacion segun lo que se necesite
			
			
		case 1: 
			//este caso es para registrar los pacientes que ingresan en el dia 
			cout<<"==========================================="<<endl;
			cout<<"===========REGISTRO DE PACIENTES==========="<<endl;
			cout<<"==========================================="<<endl;
			
			do{
				
				if ( i > 1){
					j++;
					i++;
				}
				
				cout << "-------PACIENTE #: " << j <<"-------\n"; 
				cout<<"Identificacion: ";
				cin >> pacientes[i].id; // se usa el vector pacientes y en la posicion i se guarda la identificacion
				cin.ignore(); // usamos esta funcion para limpiar el buffer
				
				cout<<"Nombre Completo: ";
				getline(cin,pacientes[i].nombre);
				
				cout<<"Edad: ";
				cin >> pacientes[i].edad	;
				cin.ignore();
				
				cout<<"Fecha Nacimiento: ";
				getline(cin,pacientes[i].fecha_naci);
				
				cout<<"Genero: ";
				getline(cin,pacientes[i].genero);
				
				cout<<"Correo: ";
				getline(cin,pacientes[i].correo);
				
				cout<<"Celular 1: ";
				cin>>pacientes[i].cel1;
				
				
				cout<<"Celular 2: ";
				cin>>pacientes[i].cel2;
				cin.ignore();
				
				cout<<"Descripcion: ";
				getline(cin,pacientes[i].descrip);
				cout<<"--------TIPO DE CONSULTA-------\n";
				cout<<"1. General Con Radiografia: \n";
				cout<<"2. General Sin Radiografia: \n";
				cout<<" Escoja 1/2 : ";cin>> tipo[i];  // aqui guardamos en un vector de tipo int la respuesta del admin en donde cada posicion se almacenará un dato entero 
				cout<<"\n";
				cout<<"--------REGISTRAR PAGO--------\n";
				
				if (tipo[i]==1){ // esta condicion es para validar segun el tipo de consulta será el cobro o valor de la consulta
					cout<<"Valor de la consulta: $"<<con<<endl;
					cout<<"Pago: "; cin>>pago[i];
					
				}
				else if (tipo[i]==2){
					cout<<"Valor de la consulta: $"<<sin<<endl;
					cout<<"Pago: "; cin>>pago[i]; 
				}        
				
				cout<<"\n";
				cout<<"-------------------------------\n";
				cout<<"DESEA REGISTRAR OTRO PACIENTE?"<<endl;
				cout<<" 1.SI/ 2. NO/ : ";   //usamos este pequeño menu para que el admin pueda registrar otro paciente o no, sin necesidad de salirse del programa
				cin>>respuesta; 
				cout<<"-------------------------------\n";
				
				if ( i == 0){
					j++;
					i++;
				}
				
			}while (respuesta==1); // el registro de pacientes se repetira hasta que el admin quiera lo contrario
			break;
		case 2:
			
			system("cls");
			
			
			cout<<"=============================================\n";
			cout<<"===========ASIGNAR CITA DE CONTROL===========\n";
			cout<<"=============================================\n";
			
			do{
                dado= 1+rand()%(51-1);
				cout << "PACIENTE : " <<pacientes[i].nombre<<endl;  // segun el paciente de la iteracion se le asignara una cita
				 cout<<"Codigo: "<< dado<<endl;
				
				cout<<"Digite la fecha "; 
				getline(cin,cita[i].fechacon);
				cin.ignore();
				
				cout<<"Digite la hora: " ; 
				getline(cin,cita[i].hora);
				cin.ignore();
				
				cout<<"-------------------------------\n";
				cout<<"DESEA REGISTRAR OTRA CITA?"<<endl;
				cout<<" 1.SI/ 2. NO/ : "; 
				cin.ignore(); 
				cin>>respuesta;
				cin.ignore(); 
				cout<<"-------------------------------\n";
				
			}while (respuesta == 1);
			
			break;
			
		case 3: 
			
			cout<<"=====================================================\n";
			cout<<"===========CONSULTAR PACIENTES REGISTRADOS===========\n";
			cout<<"=====================================================\n";
			// este caso solo mostrará paciente si realmente estan ingresados
			//este caso mostrara los pacientes registrados en el dia y finalmente arroja una pequeña factura 
			
			do{
				
				ganancias = ganancias + pago[i];
				atendidos= atendidos + 1;
				
				cout<<"---------PACIENTE # "<<n++<< "----------"<<endl;
				cout<< "IDENTIFICACION: "<< pacientes[x].id<<endl;  // en estas lineas mostramos lo que se registro seguen el paciente de cada iteraccion del caso 1
				cout<< "NOMBRE COMPLETO: "<< pacientes[x].nombre<<endl; 
				cout<< "EDAD: "<< pacientes[x].edad<<endl;
				cout<< "FECHA DE NACIMIENTO: "<< pacientes[x].fecha_naci<<endl;
				cout<< "GENERO: "<< pacientes[x].genero<<endl;
				cout<< "CELULAR 1: "<< pacientes[x].cel1<<endl;
				cout<< "CELULAR 2: "<< pacientes[x].cel2<<endl;
				cout<< "DESCRIPCION: "<< pacientes[x].descrip<<endl;
				
				if (tipo[i]==1){
					cout<<"TIPO DE CONSULTA: General Con Radiografia \n";
					cout<<"PAGO: "<<pago[i]<<endl; // aqui mostramos lo que se registro segun  la posicion de la iteracion que se realizo
				}                                  // aqui se debe digitar el valor de la consulta
				else if (tipo[i]==2){
					cout<<"TIPO DE CONSULTA: General Sin Radiografia \n";
					cout<<"PAGO: "<<pago[i]<<endl;  // aqui se debe digitar el valor de la consulta
				}     
				x++;
				
			}while (x == i); // se repetira hasta que se complete el numero de pacientes registrados
			
			cout<<"===========REPORTE TOTAL===========\n";
			cout<<"VALOR TOTAL DE GANACIAS: "<<ganancias<<endl;  
			cout<<"VALOR TOTAL DE PACIENTES ATENDIDOS: "<<atendidos<<endl;
			
			if (x==i){
                 cout <<"SOLO SE HAN REGISTRADO"<<x<<"PACIENTES\n";
                
            }
			
			break;
		case 4: 
			cout<<"--PROGRAMA CERRADO!"<<endl;
			break;
		} //-- cierre del switch
		
		
		
	}while( opc != 4  );
	
	
	system("pause");
	return 0;
}
	
	
	void mostrar (string msj, bool salto){
		
		if (salto==true){
			cout<< msj <<endl;   
		}
		else {
			cout<< msj ;   
		}
	}
		
		int mostrarmenu()
		{
			int opc;
			bool exito;
			do{  // usamos este menu para que el admin puedsa ver graficamente lo queu desea realizar y asi pueda escoger
				
				cout <<"------------------------"<<endl;
				cout <<"----------MENU----------"<<endl;
				cout <<"------------------------"<<endl;
				cout <<"1. Registrar Paciente"<<endl;
				cout <<"2. Asignar Cita de Control"<<endl;
				cout <<"3. Consultar Pacientes"<<endl;
				cout <<"4. Salir"<<endl;
				cout <<"Digite una opcion 1/4: ";
				cin>> opc;
				
				if(opc < 1 && opc > 4 ){
					
					mostrar("Debes escoger 1/4: ", true); 
					exito =false;
				}
				else {
					exito=true;   
					//Sleep(1500);
				}
				
			}while (exito==false);
			return opc;
		}
