#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	float an1, an2, an3;
	
	cout<< "Insira o primeiro ângulo: ";
	cin>> an1;
	
	cout<< "Insira o segundo ângulo: ";
	cin>> an2;
	
	cout<< "Insira o terceiro ângulo: ";
	cin>> an3;
	
	system("pause");
	system("cls");
	
	if(an1+an2+an3 != 180){
		cout<< "Os ângulos apresentados não formam um triângulo, pois a soma dos ângulos internos de um triângulo são iguais a 180º";
	}else if(an1 == 90 or an2 == 90 or an3 == 90){
		cout<< "O triângulo é retângulo, pois possui um ângulo com 90°";
	}else if(an1 > 90 or an2 > 90 or an3 > 90){
		cout<< "O triângulo é obtusângulo, pois possui um angulo maior que 90º";
	}else if(an1 < 90 && an2 < 90 && an3 < 90){
		cout<< "O triângulo é acutângulo, pois todos os ângulos são menores que 90°";
	} 
	
	
	
}
