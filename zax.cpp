
#include <locale.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
//	vector<double>pedidos;

	int moto, loja, verificacao, recebido = 0, qtdMotos, qtdPedidos = 0, pedidos = 0;
	 
	
	
	do{ 
		cout<<"Deseja verificar (1) | Deseja sair (0)"<<endl;
		cin>> verificacao;
			
		
		if(verificacao == 1){
			cout<<"Quantos pedidos?"<<endl;
			cin>> qtdPedidos;
			cout<<"Quantos motoboys?"<<endl;
			cin>> qtdMotos;
			
			pedidos = qtdPedidos/ qtdMotos;
			
			cout<<"Qual motoboy você quer verificar?"<<endl;
			cin>>moto;
			
			
				if(moto == 4){
					cout<<"Motoboy "<< moto <<", terá " << pedidos<<" pedidos"<<endl;
					cout<<"Loja 1"<<endl;
					recebido = 2*2 + 50*5/100;
					cout<<"Receberá: R$"<<recebido<<",00"<<endl;
					
				}
				if(moto == 1){
					cout<<"Motoboy "<< moto <<", terá " << pedidos<<" pedidos"<<endl;
					cout<<"Loja 1"<<endl;
					recebido = 2*2 + 50*5/100;
				}
				if(moto == 2){
					cout<<"Motoboy "<< moto <<", terá " << pedidos<<" pedidos"<<endl;
					cout<<"Loja 1"<<endl;
					recebido = 2*2 + 50*5/100;
				}
				if(moto == 3){
					cout<<"Motoboy "<< moto <<", terá " << pedidos<<" pedidos"<<endl;
					cout<<"Loja 1"<<endl;
					recebido = 2*2 + 50*5/100;
				}
				if(moto == 5){
					cout<<"Motoboy "<< moto <<", terá " << pedidos<<" pedidos"<<endl;
					cout<<"Loja 1"<<endl;
					recebido = 2*2 + 50*5/100;
				}
				
		}
					
			
	}while(verificacao != 0);
	
return 0;
}
