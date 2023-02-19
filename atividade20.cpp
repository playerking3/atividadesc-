#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	string email, senha;
	
	cout<< "Insira o e-mail: ";
	cin >> email;
	
	cout<<"Insira a senha: ";
	cin>> senha;
	
	system("pause");
	system("cls");
	
	if(email == "admin@gmail.com" && senha == "1234abc"){
		cout<< "Acessso concedido";
	}else{
		cout<< "Acesso negado, tente novamente.";
	}
	
}
