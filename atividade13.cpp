#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float r;
	cout<< "Insira o raio da circunferencia em metros: ";
	cin>> r;
	
	
	system("pause");
	system("cls");
	
	cout<< "A área da circunfêrencia é " <<r*r*3.14<< "m";
	
}
