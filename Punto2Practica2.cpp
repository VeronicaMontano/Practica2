/* Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Punto2Practica2
 * fecha:26-abril-2017
 * 
 */

#include <iostream>

using namespace std;

void modificar(int * ptr){
	*ptr=*ptr * *ptr;
	}

int main(){
	int * ptrvariable=0;
	int entero1=100;
	int entero2=300;
	
	ptrvariable=&entero1;
	modificar(ptrvariable);
	
	ptrvariable=&entero2;
	modificar(ptrvariable);
	
	cout<<entero1<<endl;
	cout<<entero2<<endl;

}
