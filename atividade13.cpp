#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float r;
	cout<< "insira o raio da circunferencia em metros: ";
	cin>> r;
	
	
	system("pause");
	system("cls");
	
	cout<< "a area da circunferencia é " <<r*r*3.14<< "m";
	
}
