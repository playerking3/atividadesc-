#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, 	"portuguese");
	float peso, tamanho, imc;
	cout<< "Informe seu peso em kg: ";
	cin>> peso;
	
	cout<< "Informe sua altura em metros: ";
	cin>> tamanho;
	
	imc = peso / (tamanho*tamanho);
	
	system("pause");
	system("cls");
	
	if(18.5 > imc){
		cout<< "Seu imc � " << imc << " e voc� est� abaixo do peso";
	}
	if (24.9 > imc && imc>= 18.5){
		cout<< "Seu imc � " << imc << " e voc� tem o peso normal";
	}
	if (29.9 > imc && imc> 25){
		cout<< "Seu imc � " << imc << " e voc� est� em sobrepeso";
	}
	if (34.9 > imc && imc> 30){
		cout<< "Seu imc � " << imc << " e voc� est�  em obesidade grau I";
	}
	if (39.9 > imc && imc> 35){
		cout<< "Seu imc � " << imc << " e voc� est� em oesidade grau II";
	}
	if (imc > 40){
		cout<< "Seu imc � " << imc << " e voc� eat� em obesidade grau III";
	}
	
}
