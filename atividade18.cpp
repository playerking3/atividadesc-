#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float l1, l2, l3;
	
	cout<< "Insira o primeiro lado do triangulo: ";
	cin>> l1;
	
	cout<< "insira o segundo lado  do trinagulo: ";
	cin>> l2;
	
	cout<< "insira o terceiro lado do triangulo: ";
	cin>> l3;
	
	system("pause");
	system("cls");
	
	if(l1 == l2 && l2 == l3 && l3 == l1){
		cout<< "O triangulo � equil�tero, pois todos seus lados s�o iguais.";
	}else if(l1 == l2 or l2 == l3 or l3 == l1){
		cout<< "O triangulo � isoceles, pois dois lados s�o iguais.";
	}else{
		cout<<"O triangulo � escaleno, pois todos os lados s�o diferentes.";
	}
}
