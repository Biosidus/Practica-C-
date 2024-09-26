/*  Desarrollar un programa que solicite la carga de 10 números e imprima la suma de los últimos 5 
valores ingresados.  Utilizar For  */

#include <iostream>
using namespace std;

int main(){
	int num,suma;
	suma=0;
	
	for(int i = 1; i <= 10;i++){
		cout<<"Ingrese el numero en posicion "<<i<<" :";
		cin>>num;
		if(i>5){
			suma=suma+num;
		}
		
	}
	cout<<"La suma de los ultimos 5 numeros es: "<<suma;
}
