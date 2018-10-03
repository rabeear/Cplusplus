#include <iostream>
using namespace std;


bool comprobar(int numero){
	for(int i=2; i<numero;){
		if(numero%i != 0){
			i++;
			if(i == numero-1;){
				return true;
			}
		}
		else
			return false;
	}


}
int main(){

	cout << "Numero a introducir: ";
	int numero, comprobacion;
	cin >> numero;
	comprobacion = comprobar(numero);
	switch(comprobacion){
		case false:
		cout << "No es numero primo.";
		break;
		case true:
		cout << "Es numero primo.";
		break;
	}
	return 0;

}