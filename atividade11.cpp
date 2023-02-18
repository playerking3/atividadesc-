#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float n1, n2, n3;
	
	cout<< "Informe o primeiro número: ";
	cin>> n1;
	cout<< "Informe o segundo número: ";
	cin>> n2;
	cout<< "Informe o terceiro número: ";
	cin>> n3;
	
	system("pause");
	system("cls");
	
	if(n1>n2&&n1>n3){
		cout<< "O número "<<n1<<" é o maior.";
	}else if(n2>n1&&n2>n3){
		cout<<"O número "<<n2<<" é o maior.";
	}else if(n3>n1&&n3>n2){
		cout<< "O número "<<n3<<" é o maior.";
	}
}
