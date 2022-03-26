#include <iostream>
#include <cstdlib>

using namespace std;

int main ()
{
    
    string a,b, n,genero,equipo;
    string femenino, masculino;
    int contMujer, contMasculino, equipoa,equipob,ninequipo;
    float totalB,noson,suma;
    contMujer=0;
    contMasculino=0;
    femenino ="femenino";
    masculino="masculino";
    a="a";
    b="b";
    n="n";
    suma=0;
    equipoa=0;
    equipob=0;
    ninequipo=0;
    noson=0;
    totalB=0;
    
    
    for (int i=1; i<=10; i++)
    {
         //system("cls");
         cout <<"============================ "<<endl;
         cout <<"=========ENCUESTA=========== "<<endl;
         cout <<"============================ "<<endl;
         
         cout <<"Digite su genero - femenino/masculino : "<<endl;
         cin >> genero;
         cout <<"Digite si es hincha del equipo 'a/b' o 'n' para ninguno : "<<endl;
         cin >> equipo;
         
         if (genero == "femenino")
         {
                contMujer=contMujer+1;
            }
            
            if (genero == "masculino")
         {
                contMasculino=contMasculino+1;
            }
        
    
   if (equipo== "a")
    {
        equipoa=equipoa+1;
    }
    
    else if (equipo== "b") 
    {
        equipob++; 
    }     
    else if (equipo== "n")
    {
        ninequipo=ninequipo+1;
    }
    
       }
     
     totalB= (equipob*100)/500;
     noson=  (ninequipo*100)/500;
    
        cout << "====================================================== " << endl;
    	cout << "Cantidad de estudiantes femeninas:  " << contMujer << endl;
        cout << "Cantidad de estudiantes masculinos:  " << contMasculino << endl;
        cout << "Cuantos apoyan al Equipo A :  " << equipoa << endl;
        cout << "Cuantos apoyan al Equipo B :  " << equipob << endl;
        cout << "Cuantos no apoyan a ningun equipo :  " << ninequipo << endl;
        cout << "Promedio del equipo B :  " << totalB << endl;
        cout << "Promedio que no apoyan a ningun equipo :  " << noson << endl;

    
    system ("pause");
    return 0;
}


