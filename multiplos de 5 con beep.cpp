#include<iostream>
#include<cstdlib>
#include <windows.h>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    
    //your code goes here
    for(int i=n; i>0; i--)
     { 
    
        Sleep(1000);
      cout<<i<<endl;
      
     if (i%5==0){
           
            Beep(1000, 900);
            
        }  
   
     }
    system("pause");
    return  0;
}
