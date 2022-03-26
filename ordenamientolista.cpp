#include<iostream>
#include<cstdlib>
#include<vector>
#include<list>


using namespace std;

int main(){
    vector<int> v1;
    int op;
    do{
        int n;
        cout << "Ingrese un numero: "; cin >> n;
        v1.push_back(n);
        cout << "¿Desea agregar otro numero? (NO=0, SI=1): "; cin >> op;

    }while( op == 1);

    int i2 = 0;
    cout << "Vector original " << endl;

    for(vector<int>::iterator i = v1.begin(); i != v1.end(); i++ ){
        cout << i2 << "-->" << *i << endl;
        ++i2 ;
    }
    cout << "ORDENANDO EL VECTOR" << endl;
   // vector<int>::iterator itr = v1.begin();
    list<int> l1;
    for(vector<int>::iterator i = v1.begin(); i != v1.end(); i++ ){
       int n = *i;
       l1.push_back(n);
    }
    l1.sort();
    i2 = 0;
    for(list<int>::iterator i = l1.begin(); i != l1.end(); i++ ){
       cout << i2 << "-->" << *i << endl;
       ++i2 ;

    }

    cout << "Elementos en el Vector: " << v1.size() << endl;
    cout << "Elementos en la Lista: " << l1.size() << endl;
    return 0;
}

