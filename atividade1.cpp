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
		cout << "voc� j� pode votar, vote consciente";
	}else{
		cout << "voc� ainda tem " <<result<< " anos, agurade para votar" ;
	}
}
