#include <locale.h>
#include <iomanip>
#include <iostream>
#include <stdlib.h>


using namespace std;

void menuPrincipal();
void menuRotinaEspeciais();


							
int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	double valor, res, resEsp, contador, somaTotal = 0, soma,i= 0, item;
  	double numeros[30]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    	
		
    	do{		
    			menuPrincipal();
	    		cin>>res;
	    		
	    		if(res == 1){
	    			
	    			cout<<" Deseja adicionar qual valor?"<<endl;
	    			cin>>valor;
	    			for(int i = 0; i < 30; i++){
	    				if(numeros[i] == 0){
	    					numeros[i] = valor;
	    					break;
						}
					}
					contador++;
				}	
				
	    		
	    		if(res == 2){
	    			cout<<" Deseja remover qual valor?"<<endl;
	    			cin>>valor;
	    			for(int i = 0; i < 30; i++){
	    				if(numeros[i] == valor){
	    					numeros[i] = 0;
						}
					}
	    			contador--;
				}
				
				if(res == 3){
				
				menuRotinaEspeciais();
				cin>> resEsp;
				 
				 if(resEsp == 1){
				 	cout<<" Ordem crescente dos valores: "<<endl;
				 }
				 
				 if(resEsp == 2){
				 	cout<<" Ordem decrescente dos valores: "<<endl;
				 }
				 
				 if(resEsp == 3){
				 	cout<<" O maior valor: "<<endl;
				 	
				 }
				 
				 if(resEsp == 4){
				 	cout<<" O menor valor: "<<endl;
				 }
				 
				 if(resEsp == 5){
				 	while(i < 30){
				 		item = numeros[i];
				 		somaTotal = somaTotal + item;
						i++; 
					 }
					cout<<" Soma total: "<<somaTotal<<endl;
				
				 }
				 
				 if(resEsp == 6){
				 	cout<<" Media dos elementos: "<<endl;
				 	
				 }
				 
				 if(resEsp == 7){
					menuPrincipal();
	    			cin>>res;
				 }	
				
				
				}
    			
	    		if(res == 4){
	    			cout<<" Lista de valores:"<<endl;
		    		for(int i = 0; i < 30; i++){
		    			if(numeros[i] != 0){
		    				cout<<" "<<numeros[i]<<endl;
						}
					}
	   			}
	    		
				if(res == 0){
					cout<<" Menu encerrado"<<endl;
				}
					
					
		}while(res != 0);
    				
    	return 0; 		 			
}

		//FUNÇÕES
		
		void menuPrincipal(){
			cout<<"  Menu principal: "<<endl;
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
		
		double calcularIMC(double peso, double altura){
			return peso/(altura*altura);
		}
		
		
	






