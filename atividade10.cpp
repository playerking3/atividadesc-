#include <iostream>
using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	
	int u, i, f;
	i = 1;		
	cout<< "Insira um n�mero: ";
	cin>> u;
	
	system("pause");
	system("cls");
	
	while(i< u){
		i++;
		f= u/i;

		if(u==i*f && i!= u){
			cout<<"O n�mero n�o � primo";
			break;
		}
		if(i== u){
			cout<<"O n�mero � primo";
			break;
		}
	
}
}
