#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int u, i, f;
	i = 1;		
	cout<< "Insira um numero: ";
	cin>> u;
	
	system("pause");
	system("cls");
	
	while(i< u){
		i++;
		f= u/i;

		if(u==i*f && i!= u){
			cout<<"O numero não é primo";
			break;
		}
		if(i== u){
			cout<<"O numero é primo";
			break;
		}
	
}
}
