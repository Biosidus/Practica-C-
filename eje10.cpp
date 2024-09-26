/* Confeccionar un programa que permita ingresar un valor del 1 al 10 y nos muestre la tabla de 
multiplicar del mismo (los primeros 12 términos) 
Ejemplo: Si ingreso 3 deberá aparecer en pantalla los valores 3, 6, 9, hasta el 36.  Utilizar For  */

#include <iostream>
using namespace std;

int main(){
	int num;
	
	do{
		cout<<"Ingrese un numero del 1 al 10 y muestre su tabla:";
		cin>>num;
		if(num<1 || num>10){
			cout<<"Ni me gasto volve a ingresar"<<endl;
		}
	}while(num<1 || num>10);
	
	for(int i = 1; i <= 12;i++ ){
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
	}
	
	
}
