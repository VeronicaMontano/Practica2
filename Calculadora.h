#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

using namespace std;


class Calculadora{
	
	private:
		double numero1;
		double numero2;
		
		
		
	public:
		Calculadora();
		~Calculadora();
		double getNumero1();
		double getNumero2();
		void setNumero1(double numero1);
		void setNumero2(double numero2);
		double sumar(double numero1, double numero2);
		double restar(double numero1, double numero2);
		double multiplicar(double numero1, double numero2);
		double dividir(double numero1, double numero2);
		
		
};


#endif
	
