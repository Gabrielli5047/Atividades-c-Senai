#include <locale.h>
#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");

	
	double num1, num2, som = 0, div= 0, sub= 0, mult= 0, 
	totalOp, mediaOp = 0, somaOp = 0,op, contador = 0, soma = 0, item, i = 1;
	int valores []={};
	
	cout<< sizeof(valores)<<endl;
	
	do{ 
		cout<<"Deseja realizar alguma operação?"<<endl;
		cout<<"1-Somar| 2-Subtrair| 3-Dividir| 4-Multiplicar| 5-Total das operações| 6-Media geral das operações| 7-Sair"<<endl;
		cin>>op;
		
		if(op <= 4 ){
			cout<<"Qual valor do primeiro numero?"<<endl;
			cin>>num1;
			cout<<"Qual valor do primeiro numero?"<<endl;
			cin>>num2;	
		}
		
		if(op == 1){
				som = num1 + num2;
				cout<<"A soma Deu: "<<som<<endl;
				contador++;
					valores[i] = som;
					i++;
		}
		if(op == 2){
				sub = num1 - num2;
				cout<<"A subtração Deu: "<<sub<<endl;
				contador++;
					valores[i] = sub;
					i++;
		}
		if(op == 3){
				div = num1 / num2;
				cout<<"A divisão Deu: "<<div<<endl;
				contador++;
					valores[i] = div;
					i++;
		}
		if(op == 4){
				mult = num1 * num2;
				cout<<"A multiplicação Deu: "<<mult<<endl;
				contador++;
					valores[i] = mult;
					i++
		}
		
		if(op == 5){
				totalOp = contador;
				cout<<"Total de operações: "<<totalOp<<endl;
		}
		
	
		
		if(op == 7){
			op = 7;
			cout<<"Calculadora desligada!"<<endl;
			contador = 0;
		}
						
			
	}while(op != 7);
	
return 0;
}
