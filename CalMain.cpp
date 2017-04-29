#include "Calculadora.h"
#include <iostream>

using namespace std;


void operar (int &parar1, Calculadora &calc, int &opcions){
	
	
	Calculadora cal;
	
	cal= calc;
	while (parar1 == 0){
		cout << "¿Que operación desea realizar?"<< endl;
		cout << "1. sumar\n 2.restar \n 3. multiplicar \n 4. dividir"<< endl;
		cin >> opcions;
		
		switch(opcions){
			case 1: 
			       cout<< cal.sumar((cal.getNumero1()), (cal.getNumero2()))<<endl;
			       break;
			case 2: 
			       cout<<cal.restar((cal.getNumero1()), (cal.getNumero2()))<<endl;
			       break;
		    case 3: 
			       cout<<cal.multiplicar((cal.getNumero1()), (cal.getNumero2()))<<endl;
			       break;
			case 4: 
			       cout<<cal.dividir(cal.getNumero1(), cal.getNumero2())<<endl;
			       break;
		}
		
	  cout <<"Desea salir del menu: \nSi=1 \nNo=0"<< endl;
	  cin>> parar1;
	  
	      
	}
}	


int main(int argc, char ** argv){
	
	int opcion;
	int parar=0;
	double numero1;
	double numero2;
	Calculadora cal;
	
	cout << "Digite el primer número"<< endl;
    cin>> numero1;
    cal.setNumero1(numero1);
    cout << "Digite el segundo número"<< endl;
	cin>>numero2;
	cal.setNumero2(numero2);
	cout << "¿Que operación desea realizar?"<< endl;
	cout << "1. sumar\n 2.restar \n 3. multiplicar \n 4. dividir"<< endl;
	cin >> opcion;
	operar(parar, cal, opcion);	
	
	
	
}
