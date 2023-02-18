#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	string n1, n2;
	float id1, id2;
	
	cout<< "Insira o nome da primeira pessoa: ";
	cin>> n1;
	
	cout<< "insira a idade da primeira pessoa: ";
	cin>> id1;
	
	system("pause");
	system("cls");
	
	cout<< "Insira o nome da segunda pessoa: ";
	cin>> n2;
	
	cout<< "insira a idade da segunda pessoa: ";
	cin>> id2;
	
	system("pause");
	system("cls");
	
	if(id1 > id2){
		cout<< "o(a) "<<n1<< " é mais velho(a).";
	}else{
		cout<< "o(a) "<<n2<< " é mais velho(a).";
	}
	
}

