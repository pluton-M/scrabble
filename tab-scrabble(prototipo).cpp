#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	vector< vector<int> > a (15, vector<int> (15, 0)); // es un array de un array (una matriz)
	for(int i = 1; i <= 15; i++) cout << "|" << i << "| "; // linea del tablero separada del for para indicar los numeros de las columnas
	cout << "\n";
	
	for(int i = 1;  i <= 15; i++){ // empieza el for para el tablero
		cout << "|" << i << "| "; //para que antes de todas las filas las numere
		for(int j = 1; j <= 15; j++){
			cout << "|" << a[i][j] << "| ";
		}
		cout << "\n";
	}
	
	
}
/*tenemos que lograr:
-que el usuario posiciones sus fichas
-marcar los simbolos matematicos en el orden correspondiente a los valores que da el usuario
-incluirlo en el otro codigo
-que las fichas de ambos usuarios interactuen entre si
*/

/*NO BORRAR
#include<bits/stdc++.h>

using namespace std;

int main(){
	vector< vector<int> > a (15, vector<int> (15, 0)); // es un array de un array (una matriz)
	
	for(int i = 1; i <= 15; i++) cout << "|" << i << "| "; // linea del tablero separada del for para indicar los numeros de las columnas
	cout << endl;
	for(int i = 1;  i <= 15; i++){ // empieza el for para el tablero
		cout << "|" << i << "| "; //para que antes de todas las filas las numere
		for(int j = 1; j <= 15; j++){
			cout << "|" << a[i][j] << "| ";
		}
		cout << endl;
	}
}
*/
