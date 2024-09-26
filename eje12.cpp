/*  Armar un algoritmo que lea tres números y emita un mensaje que indique si están ordenados o 
no.  */

#include <iostream>
using namespace std;

int main(){
	int n1,n2,n3;
	
	cout<<"Ingrese los 3 numeros:"<<endl;
	cin>>n1>>n2>>n3;
	
	if(n1<n2 and n2<n3){
		cout<<"Los numeros estan ordenados."<<endl;
	}else{
		cout<<"Anda a primaria de nuevo.";
	}
	
	return 0;
	
}
