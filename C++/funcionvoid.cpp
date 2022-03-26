#include<iostream>
#include<cstdlib>
#include <sstream>
#include <windows.h>

using namespace std;

/*funcion sumar  dos numeros retorna el resultado de esa suma*/
void sumar();
/*funcion reatar  dos numeros retorna el resultado de esa resta*/
void restar();
/*funcion multiplicar dos numeros
 retorna el resultado de esa multipplicacion*/
void multiplicar();
/*funcion dividir dos numero retorna el resultado de esa resta
siempre y cuando sea diferente a 0 */
void dividir();
int mostrarmenu();
void mostrar(string msj,bool salto);

//METODO PRINCIPAL
int main ()
{
    int opc;
   
    //devuelve el valor y lo almacena en opc
      opc = mostrarmenu();
      switch (opc){
                    case 1:
                    sumar();
                    break;
                    case 2:
                    restar();
                    break;
                    case 3:
                    multiplicar();
                    break;
                    case 4:
                    dividir();
                    break;
                    case 0:
                    cout<<"bye, bye"<<endl;
                    break;
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
void mostrar (string mensaje, bool salto){
    
    if (salto==true){
     cout<< mensaje <<endl;   
    }
    else {
        
           cout<< mensaje ;   
        }
    
    }
  //SUMAR
 void sumar (){
    
    float n1,n2,r;
    string res;
    stringstream texto;
    cout <<"Digite un numero: ";
    cin>> n1;
    cout <<"Digite otro numero: ";
    cin>> n2;
    r=n1+n2;
    texto <<"Resultado= "<<r;
    res = texto.str();
    mostrar(res,true);
}
  //RESTAR
void restar ()
{
    float n1,n2,r;
    string res;
    stringstream texto;
    cout <<"Digite un numero: ";
    cin>> n1;
    cout <<"Digite otro numero: ";
    cin>> n2;
    r=n1-n2;
    texto <<"Resultado= "<<r;
    res=texto.str();
    mostrar(res,true);
    }
    
      //MULTIPLICAR
void multiplicar ()
{
    float n1,n2,r;
    string res;
    stringstream texto;
    cout <<"Digite un numero: ";
    cin>> n1;
    cout <<"Digite otro numero: ";
    cin>> n2;
    r=n1*n2;
    // texto<<r;
    texto <<"Resultado= " <<r;
    res = texto.str();
    mostrar(res,true);
    }
    
    //DIVIDIR
void dividir()
{
    float n1,n2,r;
    //convertidor de texto a numero
    string res;
    stringstream texto;
    cout <<"Digite un numero: ";
    cin>> n1;
    cout <<"Digite otro numero: ";
    cin>> n2;
    if (n2==0){
        
    res=  "no es posible dividir entre 0";
        }
        else{
            r=n1/n2;
            texto<<r;
             //convertidor de texto a numero
            texto <<"Resultado= "<<r;
            //lo convierta como un string al llamar str();
             res=texto.str();
             mostrar(res,true);
        }
    }
    int mostrarmenu()
    {
        int opc;
        bool exito;
        do{
            
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
                // Sleep(1500);
                 //system("cls");
                }
            
        }while (exito==false);
        
        return opc;
    }
    
    
