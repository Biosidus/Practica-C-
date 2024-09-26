/*  Construya un algoritmo que permita calcular lo que hay que pagarle a un trabajador teniendo 
en cuenta su sueldo y las horas extras trabajadas. Para el pago de horas extras se toma en 
cuenta la categoría del trabajador:  */

#include <iostream>
using namespace std;

int main(){
	int horas,categoria,valor_horas;
	double sueldo_base, sueldo_horas, sueldo_final;
	
	sueldo_base=0.0;
	sueldo_horas=0.0;
	sueldo_final=0.0;
	
	do{
		cout<<"Ingrese el sueldo base del empleado: ";
		cin>>sueldo_base;
		
		if(sueldo_base<=0){
			cout<<"Dale, no creo que pagues por trabajar."<<endl;
		}
		
	}while(sueldo_base<=0);
	
	do{
		cout<<"Ingrese la cantidad de horas extras: ";
		cin>>horas;
		if(horas<=0){
			cout<<"Dale, minimo una vez se tuvo que poner la camiseta de la empresa."<<endl;
		}
	}while(horas<=0);
	
	do{
		cout<<"Precios por categoria:"<<endl;
		cout<<"1. $3500"<<endl;
		cout<<"2. $5000"<<endl;
		cout<<"3. $6500"<<endl;
		cout<<"4. $7800"<<endl;
		cout<<"En que categoria esta el empleado: ";
		cin>>categoria;
		
		switch(categoria){
			case 1:
				valor_horas=3500;
				break;
			case 2:
				valor_horas=5000;
				break;
			case 3:
				valor_horas=6500;
				break;
			case 4:
				valor_horas=7800;
				break;
			default:
				cout<<"Dale solo son 4 numeros, ponelo bien."<<endl;
				break;
		}	
	}while(categoria<=0 or categoria > 4);
	
	sueldo_horas=valor_horas*horas;
	cout<<"El sueldo de las horas extras es de $"<<sueldo_horas<<endl;
	sueldo_final=sueldo_horas+sueldo_base;
	cout<<"El sueldo final es de 4"<<sueldo_final;
	
	
	
	
}


