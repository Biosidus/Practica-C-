/*l algoritmo para determinar 
cuánto dinero ahorra una persona en un año si considera que cada semana ahorra 15% de su 
sueldo (considere cuatro semanas por mes y que no cambia el sueldo). */

#include <iostream>
using namespace std;
#define AHORRO 0.15

int main(){
	double sueldo, ahorro_acum;
	int semanas;
	semanas = 12*4;
	do{
		cout<<"A continuacion ingrese su sueldo semanal:"<<endl;
		cin>>sueldo;
		if (sueldo<=0){
			cout<<"Error ingreso un numero negativo, no creo que usted pague por trabajar."<<endl;
		}
	}while(sueldo<=0);
	
	ahorro_acum = (sueldo*AHORRO)*semanas;
	
	cout<<"Con un sueldo de $"<<sueldo<<" y ahorrando un 15%, en un año se ahorrarian $"<<ahorro_acum<<endl;
	
	return 0;
	
}
