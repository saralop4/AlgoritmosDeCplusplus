#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    string client, arti;
    float precio,e,u,r ,h;
    int canti,c,i ;
    float acum=0;
    //float iva=0.19;
    
       cout << "*SUPER MERCADO HOSAMA*"<<endl;
          cout << "------------------------------------"<< endl;
    
    cout << "DIGITE SU NOMBRE:";
    cin >> client ; 
     cout << "DIGITE CUANTOS ARTICULOS DESEA COMPRAR:";
     cin >> canti ;
           cout << "====================================================="<<endl; 
     
      cout << "*DETALLES DE LA COMPRA*"<<endl;

       cout << "NOMBRE CLIENTE:"<<client<<endl;
       cout << "CANTIDAD DE ARTICULOS:"<<canti<<endl;
         cout << "====================================================="<<endl;
       
      for(int i=1; i<=canti; i++){
     
        
      cout << "DIGITE QUE PRODUCTO VA A COMPRAR:";
     cin >> arti ; 
       cout << "DIGITE PRECIO DEL PRODUCTO:";
     cin >> precio ;
      cout << "DIGITE CANTIDAD DEL PRODUCTO:";
     cin >> c ;
     
     e = precio*c;
     h= e*0.19;
     u= e+i;

       
            cout << "***********************************************"<<endl;
        cout << "ARTICULO"<<" "<<i<<endl;
        cout <<"       "<<endl;
            
    
         cout << "NOMBRE PRODUCTO:"<<arti<<endl;
          cout << "CANTIDAD:"<<c<<endl;
       cout << "VALOR:" << e<< endl; 
       cout << "IVA:" <<h<<endl;
    cout << "SUB TOTAL:" << u << endl;
    
   // acumula el valor que hay en cada subtotal
   //sumando cada subtotal 
    acum=acum+u;
  
     cout << "====================================================="<<endl;
    
    }
  
     cout <<"TOTAL COMPRA:"<<acum<<endl;


system ("pause");
return 0;
}
