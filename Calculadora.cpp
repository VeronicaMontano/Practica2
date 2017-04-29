#include "Calculadora.h"

Calculadora::Calculadora(){
		numero1=0;
		numero2=0;
		
}

Calculadora::~Calculadora(){
	cout << " " << endl;
}

double Calculadora::getNumero1(){
	return numero1;
}

double Calculadora::getNumero2(){
	return numero2;
}

void Calculadora::setNumero1(double numero1In){
	numero1 = numero1In;
}
void Calculadora::setNumero2(double numero2In){
	numero2 = numero2In;
}

double sumar (double numero1, double numero2){
	double resultado;
	resultado= numero1 + numero2;
	return resultado;
}

double restar (double numero1, double numero2){
	double resultado;
	resultado= numero1 - numero2;
	return resultado;
}

double multiplicar (double numero1, double numero2){
	double resultado;
	resultado= numero1 * numero2;
	return resultado;
}
double dividir (double numero1, double numero2){
	double resultado;
	if (numero2 != 0){
	    resultado = numero1 / numero2;}
	  else {
		  cout<< "no se puede realizar la operación"<< endl;}
	return resultado;
}
		
		
		
