#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int num, total1, total2;
	
	cout<< "insira um numero: ";
	cin>> num;
	
	system("pause");
	system("cls");
	
	total1 = num/5;
	
	total2 = num/3;
	
	
	if(total1*5 == num && total2*3 == num){
		cout<< "O número é multiplo de 3 e de 5";
	}else{
		cout<< "O numero não é multiplo de 3 nem de 5";
	}
}
