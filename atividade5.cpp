#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	string letra;
	
	cout << "Informe apenas uma letra: ";
	cin >> letra;
	
	system("pause");
	system("cls");
	
	if (letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u") {
		cout << "A letra "<<letra<< " � vogal";
	}else{
		cout << "A letra "<< letra<< " � consoante";
	}
}
