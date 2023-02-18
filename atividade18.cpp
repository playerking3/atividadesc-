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
		cout<< "O triangulo é equilátero, pois todos seus lados são iguais.";
	}else if(l1 == l2 or l2 == l3 or l3 == l1){
		cout<< "O triangulo é isoceles, pois dois lados são iguais.";
	}else{
		cout<<"O triangulo é escaleno, pois todos os lados são diferentes.";
	}
}
