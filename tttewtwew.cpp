
#include <locale.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
//	vector<double>pedidos;

	int moto, loja, verificacao, recebido = 0, qtdMotos, qtdPedidos = 0, pedidos = 0;
	char vet[]= {"loja1", "loja2", "loja3", "loja4", "loja5", "loja1", "loja2", "loja3", "loja4", "loja5"}
	cout<<vet[0]<<endl;
	
	do{ 
		cout<<"Deseja verificar (1) | Deseja sair (0)"<<endl;
		cin>> verificacao;
			
				
			
	}while(verificacao != 0);
	
return 0;
}
