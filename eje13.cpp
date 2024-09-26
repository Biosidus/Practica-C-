/*  Hacer  un  algoritmo  que  lea  dos  números  N1  y  N2, si N1 es mayor que N2 que muestre la suma 
de  los  dos  números,  si  N1  es  menor  que  N2  muestre  el  producto  de  los  dos  números,  si  son 
iguales ingresar un tercer número y determinar cuál es el mayor. */

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3,mayor,resultado;
	
	cout<<"Ingrese los 2 numeros:"<<endl;
	cin>>n1>>n2;
	
	if(n1>n2){
		resultado=n1+n2;
		cout<<"Como el primer numero es mayor la suma de ambos es: "<<resultado;
	}else if(n1<n2){
		resultado=n1*n2;
		cout<<"Como el segundo numero es mayor el producto de ambos es: "<<resultado;
	}else{
		mayor=n1;
		cout<<"Como son iguales ingrese un 3er numero:"<<endl;
		cin>>n3;
		if (mayor<n3){
			cout<<"El 3er numero ingresado es mayor."<<endl;
			
		}else{
			cout<<"Los 2 primeros numeros son mayores al 3er numero."<<endl;
		}
	}
	
	
}
