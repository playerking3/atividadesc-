#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float an1, an2, an3;
	
	cout<< "Insira o primeiro �ngulo: ";
	cin>> an1;
	
	cout<< "Insira o segundo �ngulo: ";
	cin>> an2;
	
	cout<< "Insira o terceiro �ngulo: ";
	cin>> an3;
	
	system("pause");
	system("cls");
	
	if(an1+an2+an3 != 180){
		cout<< "Os �ngulos apresentados n�o formam um tri�ngulo, pois a soma dos �ngulos internos de um tri�ngulo s�o iguais a 180�";
	}else if(an1 == 90 or an2 == 90 or an3 == 90){
		cout<< "O tri�ngulo � ret�ngulo, pois possui um �ngulo com 90�";
	}else if(an1 > 90 or an2 > 90 or an3 > 90){
		cout<< "O tri�ngulo � obtus�ngulo, pois possui um angulo maior que 90�";
	}else if(an1 < 90 && an2 < 90 && an3 < 90){
		cout<< "O tri�ngulo � acut�ngulo, pois todos os �ngulos s�o menores que 90�";
	} 
	
	
	
}
