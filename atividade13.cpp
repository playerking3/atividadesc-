#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float r;
	cout<< "Insira o raio da circunferencia em metros: ";
	cin>> r;
	
	
	system("pause");
	system("cls");
	
	cout<< "A �rea da circunf�rencia � " <<r*r*3.14<< "m";
	
}
