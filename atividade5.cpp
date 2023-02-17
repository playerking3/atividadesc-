#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	string letra;
	
	cout << "informe apenas uma letra: ";
	cin >> letra;
	
	if (letra == "a" or letra == "e" or letra == "i" or letra == "o" or letra == "u") {
		cout << "a letra "<<letra<< " é vogal";
	}else{
		cout << " a letra "<< letra<< " é consoante";
	}
}
