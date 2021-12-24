#include <locale.h>
#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");

	double num1, num2, som = 0, div= 0, sub= 0, mult= 0, 
	totalOp, mediaOp = 0, somaOp = 0,op, contador = 0, soma = 0, item, i = 0;
	
	double valores[10]= {0,0,0,0,0,0,0,0,0,0};
	
	do{ 
		cout<<"Deseja realizar alguma operação?"<<endl;
		cout<<"1-Somar| 2-Subtrair| 3-Dividir| 4-Multiplicar| 5-Total das operações| 6-Media geral das operações| 7-Sair"<<endl;
		cin>>op;
		
		if(op <= 4 ){
			cout<<"Qual valor do primeiro numero?"<<endl;
			cin>>num1;
			cout<<"Qual valor do segundo numero?"<<endl;
			cin>>num2;	
		}
		
		if(op == 1){
				som = num1 + num2;
				for(int i = 0; i<10; i++){
					if(valores[i]== 0){
						valores[i] = som;
						break;
					}
				}
				cout<<"A soma Deu: "<<som<<endl;
				contador++;
		}
		
		if(op == 2){
				sub = num1 - num2;
				for(int i = 0; i<10; i++){
					if(valores[i]== 0){
						valores[i] = sub;
						break;
					}
				}
				cout<<"A subtração Deu: "<<sub<<endl;
				contador++;
		}
		
		if(op == 3){
				div = num1 / num2;
				for(int i = 0; i<10; i++){
					if(valores[i]== 0){
						valores[i] = div;
						break;
					}
				}
				cout<<"A divisão Deu: "<<div<<endl;
				contador++;
		}
		
		if(op == 4){
				mult = num1 * num2;
				for(int i = 0; i<10; i++){
					if(valores[i]== 0){
						valores[i] = mult;
						break;
					}
				}
				cout<<"A multiplicação Deu: "<<mult<<endl;
				contador++;
		}
		
		if(op == 5){
				totalOp = contador;
				cout<<"Total de operações: "<<totalOp<<endl;
		}
		if(op == 6){
				for(int i = 0; i<10; i++){
					somaOp = somaOp + valores[i];
				}
				
				mediaOp = somaOp/contador;
				if(contador == 0){
					mediaOp = 0;
				}
				cout<< mediaOp <<" Media geral"<<endl;
		}
		
		
		if(op == 7){
			op = 7;
			cout<<"Calculadora desligada!"<<endl;
			contador = 0;
		}
						
			
	}while(op != 7);
	
return 0;
}
