/* Obtener el promedio de 10 n�meros dados, ingresados por teclado,  utilizando While  */

#include <iostream>
using namespace std;

int main(){
	int i,numero;
	double promedio,suma;
	promedio=0.0;
	suma=0.0;
	
	i=0;
	
	while(i<10){
		cout<<"Ingrese el numero en la posicion: "<<i+1<<" ";
		cin>>numero;
		suma=suma+numero;
		i++;
	}
	promedio=suma/10;
	
	cout<<"El promedio de su suma es: "<<promedio;
	
}
