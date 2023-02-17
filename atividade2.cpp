#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	int n1,n2;
	cout << "Informe o primeiro número";
	cin >> n1;
	cout << "Informe o segundo número";
	cin >> n2;
	
	if(n1 > n2){
		cout << "o número " <<n1<< " é maior";
	}else if(n1==n2){
		cout << "Os dois numeros são iguais";
	}else{
		cout<< "o número " <<n2<< " é maior";
	}
}
