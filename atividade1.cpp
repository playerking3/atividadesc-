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
		cout << "Voc� j� pode votar, vote consciente.";
	}else{
		cout << "Voc� ainda tem " <<result<< " anos, agurade para votar." ;
	}
}
