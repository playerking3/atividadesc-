#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float num;
	cout<< "Informe um numero: ";
	cin>> num;
	
	system("pause");
	system("cls");
	
	if(num >= 1){
		cout<< "O numero informado ("<<num<<") � positivo";
	}else if(num <= -1){
		cout<< "O numero informado ("<<num<<") � negativo";
	}else{
		cout<< "O n�mero informado ("<<num<<") � zero";
	}
}
