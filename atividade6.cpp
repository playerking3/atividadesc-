#include <iostream>
using namespace std;

main(){
	setlocale (LC_ALL, 	"portuguese");
	float peso, tamanho, imc;
	cout<< "informe seu peso em kg";
	cin>> peso;
	
	cout<< "informe sua altura em metros";
	cin>> tamanho;
	
	imc = peso / (tamanho*tamanho);
	
	if(18.5 > imc){
		cout<< "seu imc é " << imc << " e você está abaixo do peso";
	}
	if (24.9 > imc >= 18.5){
		cout<< "seu imc é " << imc << " e você tem o peso normal";
	}
	if (29.9 > imc > 25){
		cout<< "seu imc é " << imc << " e você está em sobrepeso";
	}
	if (34.9 > imc > 30){
		cout<< "seu imc é " << imc << " e você está  em obesidade grau I";
	}
	if (93.9 > imc > 35){
		cout<< "seu imc é " << imc << " e você está em oesidade grau II";
	}else{
		cout<< "seu imc é " << imc << " e você eatá em obesidade grau III";
	}
	
}
