#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float p1,p2,result,falta;
	cout << "informe a primeira nota";
	cin >> p1;
	cout << "informe a segunda nota";
	cin >> p2;
	cout << "informe suas faltas (limite de 100 faltas)";
	cin >> falta;
	result = (p1+p2) / 2;

	if(result >=6 && falta <25){
	
		cout<< "você foi aprovado";
	}else{
		cout << "você foi reprovado";
	}
}

