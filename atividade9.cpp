#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	int result, nasc;
	cout<< "Informe seu ano de nascimento: ";
	cin>> nasc;
	result = 2023-nasc;
	
	system("pause");
	system("cls");	
	
	cout<< "Sua idade é de " <<result<< " anos (se você já fez aniversário esse ano)";
	
}
