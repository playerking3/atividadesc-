#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float n1,n2;
	cout << "Informe o primeiro n�mero: ";
	cin >> n1;
	cout << "Informe o segundo n�mero: ";
	cin >> n2;

	system("pause");
	system("cls");
	
	if(n1 > n2){
		cout << "O n�mero " <<n1<< " � maior";
	}else if(n1==n2){
		cout << "Os dois n�meros s�o iguais";
	}else{
		cout<< "O n�mero " <<n2<< " � maior";
	}
}
