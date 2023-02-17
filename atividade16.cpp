#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float sm, hrs;
	
	cout<< "Informe seu salário minimo: ";
	cin>> sm;
	cout<< "informe suas horas de trabalho mensais: ";
	cin>> hrs;
	
	system("pause");
	system("cls");
	
	cout<< "Seu salário base é R$"<<sm+(12*hrs)<<"!";
}
