#include <iostream>
#include <cstdlib>


using namespace std;

int main (){
    int estudiantes,n,i,edad,acum,sem;
    double promedio;
    string nombre,genero,estadocivil,semestre,casado;
    promedio=0;
    sem=1;
   // casado=0;
    
    cout << "Ingrese cantidad de estudiantes:";
    cin >> estudiantes;
        cout << "==========================================="<<endl;
        
    for (int i=1; i<=estudiantes; i++){
        
         cout << "==========================================="<<endl;
            cout<<"ESTUDIANTE    "<< i <<endl;
             cout << "==========================================="<<endl;
             
 	   cout << " NOMBRE:  ";cin>>nombre;
       cout << "EDAD:";cin>>edad;
       cout << "GENERO:";cin>>genero;
       cout << "ESTADO CIVIL:";cin>>estadocivil;
       cout << "SEMESTRE:";cin>>semestre; 
         
         promedio += edad;

            }
            
             promedio /= estudiantes;
             
                      cout << "-------------------------------------------------------"<<endl;
              cout<<"La edad promedio de los estudiantes es de: "<<promedio<<endl;
             
             
       system ("pause");
     return 0;
    }
