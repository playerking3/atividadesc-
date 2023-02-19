#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, "portuguese");
	float c, f;
	
	cout<< "Insira a temperatura em °C: ";
	cin>> c;
	f = c*1.8+ 32;
	
	system("pause");
	system("cls");
	
	cout<< "A temperatura "<<c<<"°c é "<<f<<"°f"; 
}
