/* Obtener el promedio de 10 números dados, ingresados por teclado,  utilizando For */

#include <iostream>
using namespace std;

int main(){
	int num;
	double promedio,suma;
	
	promedio=0.0;
	suma=0.0;
	
	for(int i = 1; i <= 10;i++){
		cout<<"Ingrese el numero en la posicion: "<<i<<" ";
		cin>>num;
		suma=suma+num;
		
	}
	promedio=suma/10;
	
	cout<<"El promedio de su suma es: "<<promedio;
	
	
}
