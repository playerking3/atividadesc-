#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n1,n2;
	cout << "Informe o primeiro n�mero";
	cin >> n1;
	cout << "Informe o segundo n�mero";
	cin >> n2;
	
	if(n1 > n2){
		cout << "o n�mero " <<n1<< " � maior";
	}else if(n1==n2){
		cout << "Os dois numeros s�o iguais";
	}else{
		cout<< "o n�mero " <<n2<< " � maior";
	}
}
