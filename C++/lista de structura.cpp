#include <iostream>
#include <stdio.h> 
#include <vector> 
#include<cstdlib>

using namespace std;

struct producto {
    string codigo;
    string nombre;
    float precio;
    float cantidad;
    float iva;

    void mostrar_datos (){
    cout << "----------DATOS DE PRODUCTod-------" <<endl;
    cout << "Codigo:  " << codigo << endl;
    cout << "Nombre  " << nombre << endl;
    cout << "Precio  " << precio << endl;
    cout << "Cantidad  " << cantidad << endl;
    cout << "IVA " << (iva*100) << "%" << endl;   
    }

    float calcular_iva(){
        return precio*iva;
    }

};



int main ()
{


    vector<producto> listaproductos;
    int op;
   producto p;

    do{

        
        cout << "=========================================" << endl << endl;
        cout << "Digite el codigo de producto:  ";
        cin >> p.codigo;
        cout << "Digite el Nombre :  ";
        cin >> p.nombre;
        cout << "Digite el Precio :  ";
        cin >> p.precio;
        cout << "Digite cantidad :  ";
        cin >> p.cantidad;
        cout << "Digite el IVA :  ";
        cin >> p.iva;
        listaproductos.push_back(p);


        cout << "Desea agregar mas productos ";
        cin >> op;
    } while (op == 1);

    cout << "================================"<<endl;
    for (int i=0;i<listaproductos.size(); i++){
        producto p = listaproductos[i];
        p.mostrar_datos();
    }

    // // producto listaproducto[3]; // Arreglo de estructura
    // // int listanumeros[3]; // Arreglo que guarda 3 elementos del mismo tipo

    // producto p;
    // cout << "Ingrese el Codigo  "; cin >> p.codigo;
    // cout << "Ingrese el Nombre  "; cin >> p.nombre;
    // cout << "Ingrese el Precio  "; cin >> p.precio;
    // cout << "Ingrese el Cantidad  "; cin >> p.cantidad;
    // cout << "Ingrese el IVA  "; cin >> p.iva;

    // p.mostrar_datos();
    


    // Articulo a;
    // a.codigo = "1233434"


   system("pause");
    return 0;
}
