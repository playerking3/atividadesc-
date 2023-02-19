#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, n;
	
	cout<< "Insira um número: ";
	cin>> num;
	
	
	system("pause");
	system("cls");
	
	while(n!=num){
		n = n+2;		
		if(n==num){
			cout<< "O número escolhido ("<<num<<") é par.";
			break;
		}
	
		if (n>num){
			cout<< "O número escolhido ("<<num<<") é impar.";
			break;
		}
	}
}
	
	


