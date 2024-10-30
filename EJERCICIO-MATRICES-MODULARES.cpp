/*
1) almacenar nums aleatorios menores o iguales 1000 en una matriz 10*10
2) mostrar los elementos de la matriz
3) imprimir la suma de los numeros de la matriz
4) imprimir la suma de los numeros pares de la matriz
5) imprimir la suma de los numeros impares de la matriz
6) imprimir la suma de cada fila
7) imprimir la suma de cada columna
8) imprimir la suma de la diagonal principal
9) imprimir la transpuesta de la matriz
10) copie los elementos de la matriz en un vector
11) imprima el vector
12) ordene el vector Bubble Sort
13) imprima el vector ordenado
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define FILAS 10
#define COLUMNAS 10
#include <vector>

void almacenamiento(int matriz[FILAS][COLUMNAS]);
void mostrarMatriz(int matriz[FILAS][COLUMNAS]);
int sumaDeLaMatriz(int matriz[FILAS][COLUMNAS]);
int sumaDePares(int matriz[FILAS][COLUMNAS]);
int sumaDeImpares(int matriz[FILAS][COLUMNAS]);
int sumaDiagPrincipal(int matriz[FILAS][COLUMNAS]);
void imprimirSumaFila(int matriz[FILAS][COLUMNAS]);
void imprimirSumaColumna(int matriz[FILAS][COLUMNAS]);
void imprimirTranspuesta(int matriz[FILAS][COLUMNAS]);
vector<int> matrizAvector(int matriz[FILAS][COLUMNAS]);
void imprimirVector(vector<int> vector);
void imprimirVectorOrdenado(vector<int> vector);

int main(){
    int matriz [FILAS][COLUMNAS];
    int suma=0;
    int sumaPar=0;
    int sumaImpar=0;
    int sumaDiagPr=0;


    almacenamiento(matriz);
    suma=sumaDeLaMatriz(matriz);
    sumaPar=sumaDePares(matriz);
	sumaImpar=sumaDeImpares(matriz);
	sumaDiagPr=sumaDiagPrincipal(matriz);
	vector<int> vector = matrizAvector(matriz);
	
    cout<<"Contenido de la matriz"<<endl;
    mostrarMatriz(matriz);
    cout<<'\n';
    
    cout<<endl<<"La suma de la matriz es: "<<suma<<endl;
    cout<<'\n';
    cout<<"La suma de los pares de la matriz es: "<<sumaPar<<endl;
    cout<<'\n';
    cout<<"La suma de los Impares de la matriz es: "<<sumaImpar<<endl;
    cout<<'\n';
    
    cout<<"La suma de cada fila:"<<endl;
    imprimirSumaFila(matriz);
    cout<<'\n';
    
    cout<<"La suma de cada columna:"<<endl;
    imprimirSumaColumna(matriz);
    cout<<'\n';
    
    cout<<"La suma de la diagonal principal es: "<<sumaDiagPr<<endl;
    cout<<'\n';
    
    cout<<"La matriz transpuesta es: "<<endl;
    imprimirTranspuesta(matriz);
    cout<<'\n';
    
	cout<<"El vector con el contenido de la matriz: "<<endl;
    imprimirVector(vector);
    cout<<'\n';
    
    cout<<"El vector ordenado es: "<<endl;
    imprimirVectorOrdenado(vector);
    
    
    
    
}

/*1*/
void almacenamiento(int matriz[FILAS][COLUMNAS]){
    srand((time(0)));
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            matriz[i][j]=rand() % 1001;
        }
    }
}

/*2*/
void mostrarMatriz(int matriz[FILAS][COLUMNAS]){
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            cout<<matriz[i][j]<<"\t";
        }
    }
}

/*3*/
int sumaDeLaMatriz(int matriz[FILAS][COLUMNAS]){
	int sum = 0;
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            sum=sum+matriz[i][j];
        }
    }
    return sum;
}

/*4*/
int sumaDePares(int matriz[FILAS][COLUMNAS]){
	int sumaP = 0;
    int numActual;
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            numActual=matriz[i][j];
            if(numActual % 2 == 0){
                sumaP=sumaP+numActual;
            }

        }
    }
    return sumaP;
}

/*5*/
int sumaDeImpares(int matriz[FILAS][COLUMNAS]){
	int sumaImp;
    int numActual;
    for(int i = 0; i < FILAS; i++){
        for(int j = 0; j < COLUMNAS; j++){
            numActual=matriz[i][j];
            if(numActual % 2 != 0){
                sumaImp=sumaImp+numActual;
            }

        }
    }
    return sumaImp;
}

/*6*/
void imprimirSumaFila(int matriz[FILAS][COLUMNAS]){
	for(int i = 0; i < FILAS; i++){
		int sumaFil=0;
		for(int j = 0; j < COLUMNAS; j++){
			sumaFil = sumaFil + matriz[i][j];
		}
		
		cout<<"Suma de la Fila "<<i+1<<": "<<sumaFil<<endl;
	}
	
}

/*7*/
void imprimirSumaColumna(int matriz[FILAS][COLUMNAS]){
	for(int j = 0; j < COLUMNAS; j++){
		int sumaCol=0;
		for(int i = 0; i < FILAS; i++){
			sumaCol = sumaCol + matriz[i][j];
		}
		
		cout<<"Suma de la columna "<<j+1<<": "<<sumaCol<<endl;
	}
	
}

/*8*/
int sumaDiagPrincipal(int matriz[FILAS][COLUMNAS]){
	int sumaDiag=0;
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			if(i==j){
				sumaDiag=sumaDiag+matriz[i][j];
			}
		}
	}
	return sumaDiag;
}

/*9*/
void imprimirTranspuesta(int matriz[FILAS][COLUMNAS]){
	for(int j = 0; j < COLUMNAS; j++){
		for(int i = 0; i < FILAS; i++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<endl;
	}
}

/*10*/
vector<int> matrizAvector(int matriz[FILAS][COLUMNAS]){
	int k = 0;
	vector<int> vectorM(FILAS*COLUMNAS);
	
	for(int i = 0; i < FILAS; i++){
		for(int j = 0; j < COLUMNAS; j++){
			vectorM[k]=matriz[i][j];
			k++;
		}
	}
	return vectorM;	
}

/*11*/
void imprimirVector(vector<int> vector){
	for(int i = 0; i < FILAS*COLUMNAS; i++){
		cout<<vector[i]<<endl;
	}
	cout<<endl;
}

/*12*/
void imprimirVectorOrdenado(vector<int> vector){
	int aux;
	for(int i = 0; i < FILAS*COLUMNAS; i++){
		for(int j = 0; j < (FILAS*COLUMNAS)-1; j++)	{
			if(vector[j]<vector[j+1]){
				aux = vector[j+1];
				vector[j+1] = vector[j];
				vector[j] = aux;
			}
		}
	}
	
	
	for(int i = 0; i < FILAS*COLUMNAS; i++){
		cout<<vector[i]<<endl;
	}
	cout<<endl;
}






