/*  Se carga una fecha (dia, mes, año) por teclado. Mostrar un mensaje si corresponde al primer 
trimestre del año (enero, febrero, marzo). Cargar por teclado el valor numérico del día, mes y 
año. Ejemplo Dia: 10 Mes: 01 Año: 2019  
do{
		cout<<"Ingrese el dia: ";
		cin>>dia<<endl;
	}while(dia<0 && dia > 31)
	*/

#include <iostream>
using namespace std;

int main(){
	int dia,mes,anio;
	
	do{
		cout<<"Ingrese el mes para registrar: "<<endl;
		cout<<"1. Enero"<<endl;
		cout<<"2. Febrero"<<endl;
		cout<<"3. Marzo"<<endl;
		cout<<"4. Abril"<<endl;
		cout<<"5. Mayo"<<endl;
		cout<<"6. Junio"<<endl;
		cout<<"7. Julio"<<endl;
		cout<<"8. Agosto"<<endl;
		cout<<"9. Septiembre"<<endl;
		cout<<"10. Octubre"<<endl;
		cout<<"11. Noviembre"<<endl;
		cout<<"12. Diciembre"<<endl;
		cin>>mes;
		cout<<'\n';
		
		switch(mes){
			case 1:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 2:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 28);
				break;
			
			case 3:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 4:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 30);
				break;
			
			case 5:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 6:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 30);
				break;
			
			case 7:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 8:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 9:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 30);
				break;
			
			case 10:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			case 11:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 30);
				break;
			
			case 12:
				do{
					cout<<"Ingrese el dia: ";
					cin>>dia;
				}while(dia<0 || dia > 31);
				break;
			
			default:
				cout<<"No ingreso un mes valido."<<endl;
				break;
			}
		}while(mes<=0 || mes>12);
		do{
			cout<<"Ingrese el anio: "<<endl;
			cin>>anio;
		}while(anio>2024);
		if (mes<=3){
			cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
			cout<<"La fecha ingresada corresponde al primer trimestre";
		}else{
			cout<<dia<<"/"<<mes<<"/"<<anio<<endl;
			cout<<"La fecha ingresada NO corresponde al primer trimestre";
		}
	}
