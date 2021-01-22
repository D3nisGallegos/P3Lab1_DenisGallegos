#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 

int main(int argc, char** argv) {
	int opcion = 0;
	while (opcion != 3){
		cout << "          M E N U:" <<endl;
		cout << "  1) Sumatoria. "<<endl;
		cout << "  2) Funcion. "<<endl;
		cout << "  3) Salir. "<<endl;
		cout << "  Ingrese la opcion: "<<endl;
		cin >> opcion; 
		
		
		 
		cout << "   Ingrese la opcion: ";
		opcion = 3; 
	}//Fin del while que reinicia el menu. 
	return 0;
}
