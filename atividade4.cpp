#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, n;
	
	cout<< "Insira um n�mero: ";
	cin>> num;
	
	
	system("pause");
	system("cls");
	
	while(n!=num){
		n = n+2;		
		if(n==num){
			cout<< "O n�mero escolhido ("<<num<<") � par.";
			break;
		}
	
		if (n>num){
			cout<< "O n�mero escolhido ("<<num<<") � impar.";
			break;
		}
	}
}
	
	


