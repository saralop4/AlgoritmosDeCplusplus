#include<iostream>
#include<cstdlib>
#include <sstream>
#include <windows.h>

using namespace std;

/*funcion sumar  dos numeros retorna el resultado de esa suma*/
float suma(float,float);
/*funcion reatar  dos numeros retorna el resultado de esa resta*/
float resta(float,float);
/*funcion multiplicar dos numeros
 retorna el resultado de esa multipplicacion*/
float multiplicar(float,float);
/*funcion dividir dos numero retorna el resultado de esa resta
siempre y cuando sea diferente a 0 */
string dividir(float,float);
int mostrarmenu();
void mostrar(string msj,bool salto);

//METODO PRINCIPAL
int main ()
{
    int opc;
    float n1,n2,r;
    string res;
    mostrar("Ingrese un numero: ",false);
    cin >>n1;
     mostrar("Ingrese otro numero: ",false);
    cin >>n2;
    //devuelve el valor y lo almacena en opc
      opc = mostrarmenu();
      switch (opc){
                    case 1:
                    r=suma(n1,n2);
                    break;
                    case 2:
                    r =resta(n1,n2);
                    break;
                    case 3:
                    r =multiplicar(n1,n2);
                    break;
                    case 4:
                    res =dividir(n1,n2);
                    break;
                    case 0:
                    cout<<"bye, bye"<<endl;
                    break;
                    default: 
                        cout<<" debe escoger una opcion valida \n";
            }
            
            if (opc== 4){
                  cout <<"RESULTADO: "<< res <<endl;
                }
          else if (opc >= 1 && opc <= 3 ){
                  cout <<"RESULTADO: "<<r<< endl;
                
            }
     // stringstream texto;
   //   texto<< "Opcion escogida:"<<opc;
    //  string msj = texto.str();
     // mostrar(texto,str(),true)
   //  mostrar (msj,true);
    
  //  string r= dividir(10,2);
  //  cout << "Resultado "<<r<<endl;
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
  //SUMAR
float suma (float n1,float n2){
    
    float r =0;
    r=n1+n2;
    return r; //en algoritmo es r<-suma
}
  //RESTAR
float resta (float n1, float n2)
{
    float r=0;
    r=n1-n2;
    return r;
    }
    
      //MULTIPLICAR
float multiplicar (float n1, float n2)
{
    cout<< "----MULTIPLICAR----"<<endl;
    float r=0;
    r=n1*n2;
    return r;
    }
    
    //DIVIDIR
string dividir(float n1, float n2)
{
    cout <<"----DIVIDIR----"<<endl;
    string res;
    //convertidor de texto a numero
    stringstream texto;
    float r=0;
    if (n2==0){
        
    res=  "no es posible dividir entre 0";
        }
        else{
            r=n1/n2;
            texto<<r;
             //convertidor de texto a numero
            res=texto.str();
        }
        return res;
    }
    int mostrarmenu()
    {
        int opc;
        bool exito;
        do{
            //system("cls");
        cout <<"******************"<<endl;
        cout <<"*******MENU*******"<<endl;
        cout <<"******************"<<endl;
        cout <<"Sumar"<<endl;
        cout <<"Restar"<<endl;
        cout <<"Multiplicar"<<endl;
        cout <<"Dividir"<<endl;
        cout <<"Terminar"<<endl;
        cout <<"Digite una opcion 0/4: ";
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
    
    
