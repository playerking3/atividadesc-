#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3;
	
	cout<< "Informe o primeiro n�mero: ";
	cin>> n1;
	cout<< "Informe o segundo n�mero: ";
	cin>> n2;
	cout<< "Informe o terceiro n�mero: ";
	cin>> n3;
	
	system("pause");
	system("cls");
	
	if(n1>n2&&n1>n3){
		cout<< "O n�mero "<<n1<<" � o maior.";
	}else if(n2>n1&&n2>n3){
		cout<<"O n�mero "<<n2<<" � o maior.";
	}else if(n3>n1&&n3>n2){
		cout<< "O n�mero "<<n3<<" � o maior.";
	}
}
