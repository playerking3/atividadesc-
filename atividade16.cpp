#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float sm, hrs;
	
	cout<< "Informe seu sal�rio minimo: ";
	cin>> sm;
	cout<< "Informe suas horas de trabalho mensais: ";
	cin>> hrs;
	
	system("pause");
	system("cls");
	
	cout<< "Seu sal�rio base � de R$"<<sm+(12*hrs)<<"!";
	
}
