#include<iostream>
#include<cstdlib>
#include<conio.h>
#include <stdio.h>

using namespace std;

/*struct Tipo_consulta{
   char codigo; 
   char g_radiografia;
   char general; 
};*/

struct Pago{
    string codigo;
    double precio;
    double pago_paciente;    
};

struct Paciente{
   int id;
   string nombre,apellido;
   int edad;
   string fecha_naci;
   string genero,correo;
   string cel1,cel2;
   string descrip;
  // struct Tipo_consulta tip_consulta;
   struct Pago pago_p; //variable anidada
}pacientes[100];

int main(){ 
        	int respuesta,i=0;
            bool error = false;
	do{
		
		pacientes[i];
		cout << "PACIENTE #: " << i++ << endl ; 
		
		cout<<"Identificacion: ";
		cin >> pacientes[i].id;
		cin.ignore();
		
		cout<<"Nombre: ";
		getline(cin,pacientes[i].nombre);
		
		cout<<"Apellido: ";
		getline(cin,pacientes[i].apellido);
	
		cout<<"Edad: ";
		cin >> pacientes[i].edad	;
		cin.ignore();
		
		cout<<"Fecha Nacimiento: ";
		getline(cin,pacientes[i].fecha_naci);
		
		cout<<"Genero: ";
		getline(cin,pacientes[i].genero);
		
		cout<<"Correo: ";
		getline(cin,pacientes[i].correo);
		
		 do{
        error = false;
		cout<<"Celular 1: ";
		getline(cin,pacientes[i].cel1);
		for(int i = 0; i < pacientes[i].cel1.length(); i++){
            char caracter = pacientes[i].cel1;
            if((caracter < 48 || caracter > 57) && caracter != ' ' && caracter != '-' ){
                 error = true;
                 break;
            }
            } 
       if(error == true){
            cout << "El telefono solo puede tener numeros"<<endl;
       }
       else{
            cout << "Telefono: "<<pacientes[i].cel1 << " correcto";
        }
        
    }while(error == true);
		
		
		cout<<"Celular 2: ";
		getline(cin,pacientes[i].cel2);
		cin.ignore();
		
		cout<<"Descripcion: ";
		getline(cin,pacientes[i].descrip);
	
		cout<<"--------REGISTRAR PAGO--------\n";
		cout<<"codigo: ";
		cin>>pacientes[i].pago_p.codigo;
	
		cout<<"Precio: ";
		cin>>pacientes[i].pago_p.precio;
		
		cout<<"Pago del Paciente: ";
		cin>>pacientes[i].pago_p.pago_paciente;
		cout<<"\n";
		cout<<"-------------------------------\n";
		cout<<"DESEA REGISTRAR OTRO PACIENTE?"<<endl;
		cout<<" 1.SI/ 2. NO/ "; 
        cin>>respuesta; 
		cout<<"-------------------------------\n";
		
	}while (respuesta==1);
	
	system("pause");  
	return 0;   
}
