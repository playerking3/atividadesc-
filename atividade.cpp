#include <iostream>

using namespace std;

main(){
	setlocale(LC_ALL, "portuguese");
	float p1,p2,result;
	cout << "informe a primeira nota";
	cin >> p1;
	cout << "informe a segunda nota";
	cin >> p2;
	
	result = (p1+p2) / 2;
	if (result >= 7){
		cout<<"voc� passou com a nota: " << result << " parab�ns";
	}else{
		cout<<"n�o foi dessa vez";
	}
}
