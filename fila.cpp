#include <iostream>
#include <stdlib.h>

	using namespace std;

	
	void menuPrincipal(){
	cout<<"	Menu Fila         					    	 "<<endl;
	cout<<"	1 - Adicionar um elemento da fila.			 "<<endl; 
	cout<<"	2 - Remover um elemento da fila				 "<<endl;
	cout<<"	3 - Exibir os elementos da Fila				 "<<endl;
	cout<<"	4 - Sair									 "<<endl;
	}
	
	int vetor[4];
	int ini = 0, fim = 0, valor;


	void adicionarValor(){
	
		if(4 != fim){
			
		  	cout << "Adicione um elemento"<<endl;
		  	cin >> valor;
		  	vetor[fim]=valor;
		  	fim++;
	 	}else{
		  	cout << "Vetor cheio!"<<endl;
	  	}
	}
	void deletarValor(){

		if(ini != fim){
	  		
			cout << "Delete um elemento: " << vetor[ini] << endl;
			for(int i = 0; i < fim-1; i++){
				vetor[i] = vetor[i+1];
			}
			fim--;
	 	}else{
		  	cout << "Vetor vazio"<<endl;
		}
	}
	void exibirValores(){

		if(ini != fim){
				
			cout << "Valores do vetor: "<<endl;
			for(int i=0; i < fim; i++){
				cout <<" Posição "<< i+1 <<": "<< vetor[i] << endl;
			}
		}else{
			cout << "Vetor vazio"<<endl;
		}
	}
		

	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int res;
	do{
 		menuPrincipal();
	  	cin >> res;
	
		if(res == 1) adicionarValor();
		if(res == 2) deletarValor();
		if(res == 3) exibirValores();
			
		
	}while(res < 4);

}






