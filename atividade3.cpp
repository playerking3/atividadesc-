#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float p1,p2,result,falta;
	cout << "Informe a primeira nota: ";
	cin >> p1;
	cout << "Informe a segunda nota: ";
	cin >> p2;
	cout << "Informe suas faltas (limite de 100 faltas) ";
	cin >> falta;
	result = (p1+p2) / 2;
	
	system("pause");
	system("cls");

	if(result >=6 && falta <25){
	
		cout<< "Você foi aprovado, parabéns!";
	}else{
		cout <<"Você foi reprovado!";
	}
}

