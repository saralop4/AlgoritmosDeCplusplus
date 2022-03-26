#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
          int ages[5]; int cont=0;
    double var,total;
    int  menor,mayor=0;;
        for (int i = 0; i < 5; ++i) {
        cin >> ages[i]; 
        cont=cont+10;
         if (mayor<ages[i]){
                mayor=ages[i];
            
            }
    }
      menor=mayor; 
     
      for (int i = 0; i < 5; ++i) {                     
    if (menor>ages[i]){
     
     menor= ages[i]; 
}
 
}   

var=cont*menor/100;
total=cont-var;

 
  cout<<menor<<endl;
    cout <<total<<endl;
    //your code goes here
 
 
    
    
    system("pause");
    return 0;
}
