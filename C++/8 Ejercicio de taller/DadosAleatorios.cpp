#include<iostream>
#include<cstdlib>
#include <ctime> //para llamar al ramdon
using namespace std;


int main() {
    srand (time(NULL));
	int cuenta, dado1, dado2, dobles, i, impares, impares2, jugadores, lanzamientos;
	int nu1,nu2,nu3, nu4, nu5,nu6, num1, num2, num3, num4,num5,num6;
	int pares,pares2,perdedor, pierde,suma,suma1,suma2,totaldados;
	int totalimpares, totalpares,m,n,c,x,d,nMayor,nmenor,nmayor,h,l,ho,r;
	   
	
	cout << "INGRESE CUANTOS JUGADORES VAN A LANZAR LOS DADOS " << endl;
	cin >> jugadores;

	for (i=1; i<=jugadores; i++) {
   
        suma = 0;
		cuenta = 0;
		dobles = 0;
		pares = 0;
		pares2 = 0;
		impares = 0;
		impares2 = 0;
		totalpares = 0;
		pierde = 0;
		suma1 = 0;
		suma2 = 0;
		totalimpares = 0;
		nu1 = 0;
		nu2 = 0;
		nu3 = 0;
		nu4 = 0;
		nu5 = 0;
		nu6 = 0;
		num1 = 0;
		num2 = 0;
		num3 = 0;
		num4 = 0;
		num5 = 0;
		num6 = 0;
		lanzamientos=50;
		
		cout << "=================================== " << endl;
		cout << "JUGADOR" << "    " << i << endl;
		cout << "=================================== " << endl;
	/*	cout << "Digite cuantas veces desea lanzar los dados " << endl;
		cin >> lanzamientos;*/
		
		for (r=1; r<=lanzamientos; r++) {
			// saldran numeros al azar de 1 a 6
			dado1= 1+rand()%(7-1);
			dado2= 1+rand()%(7-1);

			// acumula y va sumando las dos caras
			suma = suma+dado1+dado2;
			// cuenta los lanzamientoos que ha tenido 
			cuenta++;
	
			//
	
        
        //			
			if (dado1==1 && dado2==1 || dado1==2 && dado2==2 || dado1==3 && dado2==3 || dado1==4 && dado2==4 || dado1==5 && dado2==5 || dado1==6 && dado2==6) {
			dobles=dobles+1; // contando de uno en uno la cantidad de veces que sale un doble

			}
			if (dado1%2==0) {
				pares = pares+1;
			} else {
				impares = impares+1;
			}
			// si al dividirlo entre 2 el residuo da 0 Entonces se considera un numero par
			if (dado2%2==0) {
				pares2 = pares2+1;
			} else {
				impares2 = impares2+1;
			}
			if (dado1==1 && dado2==1) {
				pierde = pierde+1;
			}
			if (pierde==3) {
				cout << "PERDIÓ LA PARTIDA" << endl;
			}
			if (dado2==1) {
				nu1 = nu1+1;
			}
			if (dado2==2) {
				nu2 = nu2+1;
			}
			if (dado2==3) {
				nu3 = nu3+1;
			}
			if (dado2==4) {
				nu4 = nu4+1;
			}
			if (dado2==5) {
				nu5 = nu5+1;
			}
			if (dado2==6) {
				nu6 = nu6+1;
			}
			if (dado1==1) {
				num1 = num1+1;
			}
			if (dado1==2) {
				num2 = num2+1;
			}
			if (dado1==3) {
				num3 = num3+1;
			}
			if (dado1==4) {
				num4 = num4+1;
			}
			if (dado1==5) {
				num5 = num5+1;
			}
			if (dado1==6) {
				num6 = num6+1;
			}
			suma1 = suma1+dado1;
			suma2 = suma2+dado2;
		
		  //numero menor
		  
		if(num1<num2 && num1<num3 && num1<num4 && num1<num5 && num1<num6)
            m=num1;
        else  if(num2<num3 && num2<num4 && num2<num5) 
            m=num2;
        else if(num3<num4 && num3<num5 && num3<num6) 
            m=num3;
        else if (num4<num5 && num4<num6)
        m=num4;
        else  if (num5<num6)
        m=num5; 
        else 
        m=num6;	
        
        //numero mayor
       		  
	       if(num1>num2 && num1>num3 && num1>num4 && num1>num5 && num1>num6)
            n=num1;
        else  if(num2>num1 && num2>num3 && num2>num4 && num2>num5 && num2>num6) 
            n=num2;
        else if(num3>num2 && num3>num4 && num3>num5 && num3>num6 && num3>num1) 
            n=num3;
        else if (num4>num3 && num4>num5 && num4>num6 && num4>num1 && num4>num2)
        n=num4;
        else  if (num5>num6 && num5>num1 && num5 >num2 && num5>4 && num5>num3)
        n=num5; 
        else 
        n=num6;
        
        			  //numero menor
		  
		if(nu1<nu2 && nu1<nu3 && nu1<nu4 && nu1<nu5 && nu1<nu6)
            c=nu1;
        else  if(nu2<nu3 && nu2<nu4 && nu2<nu5) 
            c=nu2;
        else if(nu3<nu4 && nu3<nu5 && nu3<nu6) 
            c=nu3;
        else if (nu4<nu5 && nu4<nu6)
        c=nu4;
        else  if (nu5<nu6)
        c=nu5; 
        else 
        c=nu6;	
        
        //numero mayor
        if(nu1>nu2 && nu1>nu3 && nu1>nu4 && nu1>nu5 && nu1>nu6)
            x=nu1;
        else  if(nu2>nu1 && nu2>nu3 && nu2>nu4 && nu2>nu5 && nu2>nu6) 
            x=nu2;
        else if(nu3>nu2 && nu3>nu4 && nu3>nu5 && nu3>nu6 && nu3>nu1) 
            x=nu3;
        else if (nu4>nu3 && nu4>nu5 && nu4>nu6 && nu4>nu1 && nu4>nu2)
        x=nu4;
        else  if (nu5>nu6 && nu5>nu1 && nu5 >nu2 && nu5>4 && nu5>nu3)
        x=nu5; 
        else 
        x=nu6;
        
			//doble alto
			
		if(dobles > nMayor){
			nMayor= dobles;   
            d=r;         
        }      
        
        
			cout << "INTENTO: " << cuenta << "  -   CARA 1:  " << dado1 << "  - CARA 2:   " << dado2 << endl;
			// cuando la suma de los dados lanzados de 100 o mas de 100 se pausa el ciclo
		}//cierre de for
					
		// va acumulando y sumando a la vez la cantidad de veces que 
		// salieron numeros pares y impares 
		totalpares = totalpares+pares+pares2;
		totalimpares = totalimpares+impares+impares2;


        	
			
		cout << "==================================================================== " << endl;
		cout << "Cantidad De Dobles: " << dobles << endl;
		cout << "Cantidad De Numeros Pares: " << totalpares << endl;
		cout << "Cantidad De Numeros Impares: " << totalimpares << endl;
		cout << "Sumatoria De Los Dados : " << suma << endl;	    
		cout << "Cuantas veces salio el numero 1 en el dado1:" << "" << num1 << endl;
		cout << "Cuantas veces salio el numero 2 en el dado1:" << "" << num2 << endl;
		cout << "Cuantas veces salio el numero 3 en el dado1:" << "" << num3 << endl;
		cout << "Cuantas veces salio el numero 4 en el dado1:" << "" << num4 << endl;
		cout << "Cuantas veces salio el numero 5 en el dado1:" << "" << num5 << endl;
		cout << "Cuantas veces salio el numero 6 en el dado1:" << "" << num6 << endl;
		cout << "Cuantas veces salio el numero 1 en el dado2:" << "" << nu1 << endl;
		cout << "Cuantas veces salio el numero 2 en el dado2:" << "" << nu2 << endl;
		cout << "Cuantas veces salio el numero 3 en el dado2:" << "" << nu3 << endl;
		cout << "Cuantas veces salio el numero 4 en el dado2:" << "" << nu4 << endl;
		cout << "Cuantas veces salio el numero 5 en el dado2:" << "" << nu5 << endl;
		cout << "Cuantas veces salio el numero 6 en el dado2:" << "" << nu6 << endl;
		cout <<"la cantidad que menos veces salio dado1 : " << "" << m << endl;
		cout <<"la cantidad que mas veces salio dado1 : " << "" << n << endl;
		cout <<"la cantidad que menos veces salio dado2 : " << "" << c << endl;
		cout <<"la cantidad que mas veces salio dado2 : " << "" << x << endl;
	}
	cout << "---------------------------------------------------------------------------" << endl;
	cout << "Jugador que saco mas dobles: " << d << endl;
	cout << "Cuantos jugadores perdieron : " << pierde << endl;
	cout << " la sumatoria mayor de numeros es el ganador: " << l << endl;
//	cout << " la sumatoria menor de numeros es el perdedor: " << h << endl;
	

	system("pause");
	return 0;
}

