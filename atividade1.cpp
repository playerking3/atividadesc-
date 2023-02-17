#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int nasc,result;
	cout << "informe o ano de nascimento: ";
	cin >> nasc;
	int hoje = 2023;
	result = hoje-nasc;
	
	if (result >= 16){
		cout << "você já pode votar, vote consciente";
	}else{
		cout << "você ainda tem " <<result<< " anos, agurade para votar" ;
	}
}
