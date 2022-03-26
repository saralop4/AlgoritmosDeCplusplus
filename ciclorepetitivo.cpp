#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    string client, arti;
    float canti,precio,c,total,subtotal;
    int canti ;
    
    cout << "DIGITE SU NOMBRE:"<<endl;
    cin >> client ; 
    
    cout << "DIGITE QUE ARTICULO VA A COMPRAR" << endl;
     cin >> arti ; 
     
    cout << "=============================================================="<<endl;
cout << "TIENDA"<<endl;
for(int i=1; i<=c ; i++){
    
  cout << "PRECIO DEL PRODUCTO" << endl;
     cin >> precio ;
     
      cout << "CANTIDAD DEL PRODUCTO" << endl;
     cin >> canti ;
     
     e = (precio*canti)+0.19;
     
       cout << "VALOR SIN IVA:" <<precio<< endl;
       cout << "IVA:" <<0.19 << endl;
    cout << "SUB TOTAL:" << e << endl;
    //cout<< "I="<< i <<endl ;
    }



system ("pause");
return 0;
}
