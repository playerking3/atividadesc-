#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	string n1, n2;
	float id1, id2;
	
	cout<< "Insira o nome da primeira pessoa: ";
	cin>> n1;
	
	cout<< "Insira a idade da primeira pessoa: ";
	cin>> id1;
	
	system("pause");
	system("cls");
	
	cout<< "Insira o nome da segunda pessoa: ";
	cin>> n2;
	
	cout<< "Insira a idade da segunda pessoa: ";
	cin>> id2;
	
	system("pause");
	system("cls");
	
	if(id1 > id2){
		cout<< "O(a) "<<n1<< " é mais velho(a).";
	}else{
		cout<< "O(a) "<<n2<< " é mais velho(a).";
	}
	
}

