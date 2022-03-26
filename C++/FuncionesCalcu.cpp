#include<iostream>
#include<cstdlib>

using namespace std;

float sumar_2_numeros();//no recibe parametros() y si devuelve un valor de tipo float
void restar_2_numeros();//no recibe parametros y no devuelve ningun valor
void multiplicar_2_numeros(float n1, float n2); //recibe varios parametros y no devuelve nada
float dividir_2_numeros (float n1, float n2); //recibe varios parametros y devuelve valor de tipo float




int main ()
{
    float num1,num2;
    float res= sumar_2_numeros();
     cout <<"Resultado= "<<res<<endl;
      restar_2_numeros();
       multiplicar_2_numeros(4, 70);
          cout << "Digite un numero: ";
    cin >> num1;
    cout << "Digite otro numero: ";
    cin >> num2;
     res= dividir_2_numeros (num1, num2);
    cout << "Dividir " << num1 << " % " << num2 << " ----> " << res << endl;
system ("pause");
return 0;
}

float sumar_2_numeros() //no recibe parametros() y si devuelve un valor de tipo float
{  
    cout <<"SUMA"<<endl;
    float n1,n2,r;
    
    cout <<"Digite un numero:  ";
    cin>> n1;
    cout <<"Digite otro numero:  ";
    cin>> n2;
   r=n1+n2;

return r;
}

void restar_2_numeros() //no recibe parametros y no devuelve ningun valor
{
      cout <<"RESTA"<<endl;
      float n1,n2,r;
    
    cout <<"Digite1 un numero:  ";
    cin>> n1;
    cout <<"Digite2 un numero:  ";
    cin>> n2;
   r=n1-n2;
   //cuando no devuelve solo debe mostrar el resultado
   cout <<"Resta "<<n1<<"-"<<n2<<"="<<r << endl;
     
}
void multiplicar_2_numeros(float n1, float n2) //recibe varios parametros y no devuelve nada
{
      cout <<"MULTIPLICACION"<<endl;
    float r;
    r= n1*n2;
      cout <<"Multiplicar  "<<n1 <<" x "<<n2 <<" = "<<r << endl;
    
    }
   
float dividir_2_numeros(float dividendo, float divisor) //no se necesita pedir por que se los esta pasando como parametros 
{
    cout << "DIVISION..." << endl;
    float r;
    if(divisor == 0){
        cout << "JODAAAA, BRUTO, No se puede dividir entre 0"<<endl;
        return 0;
    }
    else{
        r = dividendo / divisor;
         return r;
    }
}

