/*  Se ingresan un conjunto de n alturas de personas por teclado. Mostrar la altura promedio de las 
personas.  */

#include <iostream>
using namespace std;

int main(){
	int n;
	double altura, promedio,sum_altura;
	promedio=0.0;
	altura =0.0;
	sum_altura = 0.0;
	
	do{
		cout<<"Ingrese la cantidad de alturas a ingresar:"<<endl;
		cin>>n;
		if(n<=0){
			cout<<"Ingrese 1 o mas alturas bobo."<<endl;
		}
		
	}while(n<=0);
	
	for(int i = 1; i <= n; i++){
		cout<<"Ingrese la altura numero "<<i<<" :";
		cin>>altura;
		sum_altura = sum_altura+altura;
	}
	
	promedio = sum_altura / n;
	
	cout<<"La suma total de las alturas es: "<<sum_altura<<endl;
	cout<<"EL promedio de las alturas es: "<<promedio<<endl;
	
	return 0;
}
