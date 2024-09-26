/* Desarrollar un programa que permita la carga de 10 valores por teclado y nos muestre 
posteriormente la suma de los valores ingresados y su promedio. */

#include <iostream>
using namespace std;

int main(){
	int num;
	double promedio, suma;
	suma=0;
	
	for (int i = 1; i <= 10; i++){
		
		cout<<"Ingrese el valor para sumar, debe ser entero: "<<endl;
		cin>>num;
		suma = suma+num;
		
	}
	promedio = suma/10;
	cout<<"La suma de los numeros ingresados da: "<<suma<<endl;
	cout<<"El promedio de la suma de los numeros da: "<<promedio<<endl;
}
