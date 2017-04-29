/* Autores:Alejandro Reyes, Veronica Montaño
 * Archivo:Punto2Practica2
 * fecha:26-abril-2017
 * 
 */

#include <iostream>
#include <string>

using namespace std;

void recolectarDatos(string ** &datos){
	datos= new string * [3];
	for(int i=0;i<3;i++){
		datos[i]= new string [2];
		}
	for(int i=0;i<3;i++){
		for(int j=0;j<2;j++){
			if(j==0){
				cout<<"ingrese el nombre"<<endl;
				cin>>datos[i][j];
				}
				else{
					cout<<"ingrese el apellido"<<endl;
					cin>>datos[i][j];
					}
			}
		}	
	}

void recolectarSalariosPersona(double * &salarios,string ** &datos){
	salarios= new double [3] ;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<1;j++){
		cout<<"ingrese el salario de la persona"<<" "<<datos[i][j]<<" "<<datos[i][j+1]<<endl;
		cin>>salarios[i];
		    }
		}	
	}

void imprimirResultados(double * &salarios,string ** &datos){
	for(int i=0;i<3;i++){
	    for(int j=0;j<1;j++){
		cout<<"la persona"<<" "<<datos[i][j]<<" "<<datos[i][j+1]<<" "<<"devenga"<<" "<<salarios[i]<<endl;
	    }
	}	
}

int main(){
	string ** arrayDatosPersona;
	double * salariosPersona;
	
	recolectarDatos(arrayDatosPersona);
	
	recolectarSalariosPersona(salariosPersona,arrayDatosPersona);
	
	imprimirResultados(salariosPersona,arrayDatosPersona);

}
