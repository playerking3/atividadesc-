#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float result, nasc;
	cout<< "Informe seu ano de nascimento: ";
	cin>> nasc;
	result = 2023-nasc;
	
	cout<< "Sua idade é de " <<result<< " anos";
	
}
