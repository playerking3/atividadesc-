#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, an, n;
	
	cout<< "Insira um n�mero: ";
	cin>> num;
	
	
	
	system("pause");
	system("cls");
	
	while(an!=num){
		n = n+1;
		an = 0+( n-1 )*2;		
		if(an==num){
			cout<< "O n�mero escolhido � par.";
			break;
		}
	
		if (an>num){
			cout<< "O n�mero escolhido � impar.";
			break;
		}
	}
}
	
	


