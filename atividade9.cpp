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
	
	cout<< "Sua idade � de " <<result<< " anos (se voc� j� fez anivers�rio esse ano)";
	
}
