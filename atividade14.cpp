#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float l;
	cout<< "Informe o lado do quadrado em metros: ";
	cin>> l;
	
	system("pause");
	system("cls");
	
	cout<< "A area do quadrado é " <<l*l<<"m";
	
}
