#include <iostream>
#include <cstdlib>

using namespace std;


int invertirNumero(int );

int main() {
 int num;
 cout<<"Numero a invertir: ";
 cin>>num;
 
 
    
    if(invertirNumero(num)==num) {
        cout <<num<<" is a palindrome"<<endl;
    }
    else {
        cout << num<<" is NOT a palindrome"<<endl;
    }
    
 system("pause");
 return 0;
}

int invertirNumero(int num)
{
 int inv=0;
 while(num>0)
 {
  inv=inv * 10 + (num % 10); 
  num = num / 10;
  cout<<"inv: "<<inv<<endl;
   cout<<"num: "<<num<<endl;
 }
 return inv;
}
/*EN LA PRIMERA ITERACION DEL BUCLE  REALIZA LA SIGUIENTE OPERACION INV=INV*10+(NUM%10) DONDE PRIMERAMENTE SE REALIZA LA DIVISOON
SEGUN LA JERARQUIA (NUM%10)= 1 ESTO ES IGUAL A 1 PORQUE AL DIVIDIR 14941 QUE ESTA ALMACENADO EN LA VARIABLE NUM ENTRE 10 DA 1494 SIENDO EL RESIDUO 1 
LUEGO  SE REALIZA LA MULTIPLICACION INV*10=0 ESTO ES IGUAL A CERO PORQUE INV ES IGUAL 0 EN LA PRIMERA ITERACION POR LO QUE 0*10=0  ENTONCES EL RESULTADO DE LA DIVISION
CON EL DE LA MULTIPLICACION SE DEBEN SUMAR ASI 1+0= 1 POR LO QUE A VARIABLE INV=1 QUEDA CON EL VALOR DE 1.
LUEGO SE REALIZA LA SEGUNDA LINEA DONDE NUM=NUM/10 ESTO ES IGUAL 14941/10= 1494 LA VARIABLE NUM TOMA EL VALOR DE 14941 DIGITADO POR EL USUARIO. LUEGO SIGUE ASI 
SUCESIVAMENTE HASTA QUE SE CUMPLA LA CONDICION DEL BUCLE Y INV TERMINA SIENDO EL MISMO VALOR DE NUM QUE TENIA AL PRINCIPIO Y NUM TERMINA SIENDO 0 Y ES AHI DONDE
ACABA EL BUCLE */


