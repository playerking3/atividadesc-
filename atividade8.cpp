#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float num;
	cout<< "informe um numero: ";
	cin>> num;
	
	if(num >= 1){
		cout<< "o numero informado é positivo";
	}else if(num <= -1){
		cout<< "o numero informado é negativo";
	}else{
		cout<< "O número informado é zero (0)";
	}
}
