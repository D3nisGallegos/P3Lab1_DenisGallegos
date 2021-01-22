#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 


int main(int argc, char** argv) {
	int opcion = 0;
	while (opcion != 3){
		cout << "     M E N U:" <<endl;
		cout << "1) Sumatoria. "<<endl;
		cout << "2) Funcion. "<<endl;
		cout << "3) Salir. "<<endl;
		cout << "Ingrese la opcion: "<<endl;
		cin >> opcion; 
		if (opcion < 0){
			cout << "Entrada no valida. "; 
		}else { 
			switch(opcion){
				case 1:
					{
					cout << "          SUMATORIA: " <<endl; 
					cout << "Ingrese el limite de la sumatoria: " <<endl; 
					int lim;
					cin >> lim; 
					if (lim < 0){
						cout << "!!!Entrada no valida!!!" <<endl; 
					}else {
						int sumatoria = 0;
						for (int c =0; c <= lim; c++){
							int elemento = c * pow(c + 1, 2); 
					    	sumatoria += elemento;
					   }//Fin del for que calcula los elementos.
						cout << "El resultado de la sumatoria es: " << sumatoria << endl; 
						cout << "" << endl; 
					}//Fin del if que valida los numeros negativos. 
				 	break; 
					}//Fin del caso 1. 
				case 2:
					{
					cout << "          FUNCION: " <<endl; 
					cout << "Ingrese el numero designado para x: " << endl;
			   		int x;
					cin >> x;  
			   		double funcion = (double) (1 / (1 + (exp(x)));
					cout << "El resultado de la funcion es: " << funcion <<endl;  
			   		cout << "" <<endl;
				    break; 
					}//Fin del caso 2. 
			}//Fin del switch que evalua la opcion. 
		}
	}//Fin del while que reinicia el menu. 
	return 0;
}
