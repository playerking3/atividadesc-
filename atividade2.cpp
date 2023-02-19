#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float n1,n2;
	cout << "Informe o primeiro número: ";
	cin >> n1;
	cout << "Informe o segundo número: ";
	cin >> n2;

	system("pause");
	system("cls");
	
	if(n1 > n2){
		cout << "O número " <<n1<< " é maior";
	}else if(n1==n2){
		cout << "Os dois números são iguais";
	}else{
		cout<< "O número " <<n2<< " é maior";
	}
}
