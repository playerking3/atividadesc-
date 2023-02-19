#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int nasc,result;
	cout << "Informe o ano de nascimento: ";
	cin >> nasc;
	int hoje = 2023;
	result = hoje-nasc;
	
	system("pause");
	system("cls");
	
	if (result >= 16){
		cout << "Você já pode votar, vote consciente.";
	}else{
		cout << "Você ainda tem " <<result<< " anos, agurade para votar." ;
	}
}
