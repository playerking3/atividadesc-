#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float num;
	cout<< "informe um numero: ";
	cin>> num;
	
	if(num >= 1){
		cout<< "o numero informado � positivo";
	}else if(num <= -1){
		cout<< "o numero informado � negativo";
	}else{
		cout<< "O n�mero informado � zero (0)";
	}
}
