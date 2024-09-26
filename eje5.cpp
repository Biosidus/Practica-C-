/* Armar un algoritmo que permita ingresar dos números positivos e imprimir la suma. Verificar 
que sean positivos, en caso contrario mostrar por pantalla un mensaje de error y volver a pedir 
el número  */

#include <iostream>
using namespace std;

int main(){
	int num1,num2,suma;
	
	do{
		cout<<"Ingrese el primer numero a sumar: ";
		cin>>num1;
		cout<<'\n';
		
		cout<<"Ingrese el segundo numero a sumar: ";
		cin>>num2;
		
		if(num1 < 0 || num2 < 0){
			cout<<"Uno de los 2 numeros es negativo, por pendejo volve a ingresar los 2."<<endl;
			cout<<'\n';
		}
	}while(num1 < 0 || num2 < 0);
	
	suma=num1+num2;
	cout<<"Ingreso los numeros "<<num1<<" y "<<num2<<" la suma de ambos es: "<<suma;
}
