#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	string email, senha;
	
	cout<< "insira o e-mail: ";
	cin >> email;
	
	cout<<"insira a senha: ";
	cin>> senha;
	
	system("pause");
	system("cls");
	
	if(email == "admin@gmail.com" && senha == "1234abc"){
		cout<< "acessso concedido";
	}else{
		cout<< "acesso negado, tente novamente.";
	}
	
}
