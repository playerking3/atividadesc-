#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL,  "portuguese");
	float sal, result;
	cout<< "Informe aqui seu sal�rio";
	cin>> sal;
	
	if(sal <= 1000.00 ){
		result = sal*1.15;
		cout<< "seu sal�rio atual � R$"<<result<<"!";
	}
	if ( sal <= 2000.00 && sal >= 1000.01){
		result = sal*1.10;
		cout<< "seu sal�rio atual � R$"<<result<<"!";
	}
	if (sal > 2000.00){
		result = sal*1.05;
		cout<< "seu sal�rio atual � R$"<<result<<"!";
	}
}
