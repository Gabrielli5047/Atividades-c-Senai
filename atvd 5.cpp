#include <locale.h>
#include <iomanip>
#include <iostream>
#include <stdlib.h>


using namespace std;

	double valor, res, resEsp, contador, somaTotal = 0, media = 0, item, auxD,auxC, resp;	
  	double numeros[30]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}, menorValor = 0, maiorValor = numeros[0] ;

		void menuPrincipal(){
			cout<<"\n Menu principal: "<<endl;
			cout<<"  1 - Adicionar valores no vetor "<<endl;
			cout<<"  2 - Remover um valor especifico "<<endl;
			cout<<"  3 - Rotinas Especiais "<<endl;
			cout<<"  4 - Exibir os elementos "<<endl;
			cout<<"  0 - Fechar menu "<<endl;
		}
		
		void menuRotinaEspeciais(){
			cout<<"  Menu Rotinas Especiais: "<<endl;
			cout<<"  1 - Exibir os elementos em ordem crescente  "<<endl;
			cout<<"  2 - Exibir os elementos em ordem decrescente "<<endl;
			cout<<"  3 - Mostrar o maior elemento do vetor "<<endl;
			cout<<"  4 - Mostrar o menor elemento do vetor "<<endl;
			cout<<"  5 - Exibir a soma total dos elementos  "<<endl;
			cout<<"  6 - Exibir a media dos elementos "<<endl;
			cout<<"  7 - Retornar ao menu Principal "<<endl;
		}
		
		double adicionarValor(double valor){
			for(int i = 0; i < 30; i++){
	    				if(numeros[i] == 0){
	    					numeros[i] = valor;
	    					break;
						}
					}
		}
		
		double removerValores(double valor){
			for(int i = 0; i < 30; i++){
	    				if(numeros[i] == valor){
	    					numeros[i] = 0;
	    					contador--;
						}
					}
		}
		
		void exibirValores(){
				cout<<" Lista de valores:"<<endl;
		    		for(int i = 0; i < 30; i++){
		    			if(numeros[i] != 0){
		    				cout<<" | Posição["<<i<<"] = valor: "<<numeros[i];
						}
					}
		}
		
			
int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	
    	do{		
    		
    			menuPrincipal();
	    		cin>>res;
	    		system("cls");
	    		
	    		if(res == 1){
	    			

	    			
	    			do{
	    			cout<<" Deseja adicionar qual valor?"<<endl;
	    			cin>>valor;
	    			 adicionarValor(valor);
	    			 cout<<" Deseja adicionar mais algun valor? 1- SIm | 2- Não"<<endl;
	    			 cin>>resp;
//	    			 system("cls");
					 contador++;
					}while(resp == 1);
				}	
				
	    		
	    		if(res == 2){
	    			do{
	    			cout<<" Deseja remover quais valores?"<<endl;
	    			cin>>valor;
	    			 removerValores(valor);
					 cout<<" Deseja remover mais algum valor? 1- SIm | 2- Não"<<endl;
	    			 cin>>resp;	   
//					 system("cls"); 		
					}while(resp == 1);
;

				}
				
				if(res == 3){
				
				do{
					menuRotinaEspeciais();
				cin>> resEsp;
				 if(resEsp == 1){
					cout<<" Ordem crescente dos valores: "<<endl;
				 	 
					for(int x = 0; x < 30; x++){
						for(int y = x + 1; y < 30; y++){
						if(numeros[x] > numeros[y]){
							auxC = numeros[x];
							numeros[x] = numeros[y];
							numeros[y] = auxC;
						}
					}
				}
						for(int i = 0; i < 30; i++){
							if(numeros[i] > 0){
								cout << numeros[i] <<endl;
							}
					}	
				 	
				 }
				 
				 if(resEsp == 2){
				 	cout<<" Ordem decrescente dos valores: "<<endl;
				 
					for(int x = 0; x < 30; x++){
						for(int y = x + 1; y < 30; y++){
						if(numeros[x] < numeros[y]){
							auxD = numeros[x];
							numeros[x] = numeros[y];
							numeros[y] = auxD;
						}
					}
				}
						for(int i = 0; i < 30; i++){
							if(numeros[i] > 0){
								cout << numeros[i] <<endl;
							}
					}	
				 	
				 }
				 
				 if(resEsp == 3){
				 	for(int i = 0; i < 30; i++){	
					 	item = numeros[i];		 				 
							if(maiorValor < item){
								maiorValor = item;
							}
					 }
				 	cout<<" O maior valor: "<<maiorValor<<endl;	
				 }
				 
				 if(resEsp == 4){
				 	menorValor = numeros[0];
				 	for(int i = 0; i < 30; i++){
				 		if(numeros[i] != 0){
				 			if(menorValor > numeros[i]){
					 		menorValor = numeros[i];
						 }	
						}
					 }
				 	cout<<" O menor valor: "<<menorValor<<endl;
				 }
				 
				 if(resEsp == 5){
				 	for(int i = 0; i < 30; i++){			 				 	
							somaTotal += numeros[i];
					 }
					cout<<" Soma total: "<<somaTotal<<" Total de itens: "<<contador<<endl;
					somaTotal = 0;
				 }
				 
				 if(resEsp == 6){
				 	for(int i = 0; i < 30; i++){			 				 	
							somaTotal += numeros[i];
					 }
					 media = somaTotal / contador;
					 
				 	cout<<" Media dos elementos: "<<media<<endl;
				 	somaTotal = 0;
				 	media = 0;
				 }
				 
				 if(resEsp == 7){
					menuPrincipal();
	    			cin>>res;
				 }
				 
				 cout<<" Deseja continuar no Menu especial? 1- sim | 2- Não"<<endl;
				 cin>>resp;
//				 system("cls");
				 
			  }while(resp == 1);
			}
    			
	    		if(res == 4){
	    		 exibirValores();
	    		 
	   			}
	    		
				if(res == 0){
					cout<<" Menu encerrado"<<endl;
					cout<<" "<<endl;
					cout<<" xxxxx"<<"      xxxxx"<<endl;
					cout<<"   xxxx"<<"    xxxx"<<endl;
					cout<<"     xxx"<<"  xxx"<<endl;
					cout<<"       xx"<<"xx"<<endl;
					cout<<"        x"<<"x"<<endl;
					cout<<"       xx"<<"xx"<<endl;
					cout<<"     xxx"<<"  xxx"<<endl;
					cout<<"   xxxx"<<"    xxxx"<<endl;
					cout<<" xxxxx"<<"      xxxxx"<<endl;
				}
					
					
		}while(res != 0);
    				
    	return 0; 		 			
}

		//FUNÇÕES
		
	
		
		
	





