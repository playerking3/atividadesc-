#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL,  "portuguese");
	float sal, result;
	cout<< "Informe aqui seu salário: ";
	cin>> sal;
	
	system("pause");
	system("cls");
	
	if(sal <= 1000.00 ){
		result = sal*1.15;
		cout<< "Após o aumento de 15% seu salário atual é R$"<<result<<"!";
	}
	if ( sal <= 2000.00 && sal >= 1000.01){
		result = sal*1.10;
		cout<< "Após o aumento de 10% seu salário atual é R$"<<result<<"!";
	}
	if (sal > 2000.00){
		result = sal*1.05;
		cout<< "Após o aumento de 5% seu salário atual é R$"<<result<<"!";
	}
}
