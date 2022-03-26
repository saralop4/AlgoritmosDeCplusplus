#include<iostream>
#include<cstdlib>

using namespace std;

/*funcion sumar  dos numeros retorna el resultado de esa suma*/
float suma (float,float);
/*funcion reatar  dos numeros retorna el resultado de esa resta*/
float resta (float,float);
/*funcion multiplicar dos numeros
 retorna el resultado de esa multipplicacion*/
float multiplicar (float,float);
/*funcion dividir dos numero retorna el resultado de esa resta
siempre y cuando sea diferente a 0 */
float dividir (float,float);

//METODO PRINCIPAL
int main ()
{
    system("pause");
    return 0;
}
  //SUMAR
float suma (float n1,floatn2){
    
    floar r =0;
    r=n1+n2;
    return r; //en algoritmo es r<-suma
}
  //RESTAR
float restar (float n1, float n2)
{
    float r=0;
    r=n1-n2;
    return r;
    }
    
      //MULTIPLICAR
float multiplicar (float n1, float n2)
{
    float r=0;
    r=n1*n2;
    return r;
    }
    
    //DIVIDIR
string dividir(float n1, float n2)
{
    float r=0;
    if (n2==0){
        
    
        }
    r=n1/n2;
    return r;
    }
    
    
