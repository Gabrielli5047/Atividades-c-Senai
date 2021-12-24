#include <locale.h>
#include <iomanip>
#include <iostream>
#include <stdlib.h>


using namespace std;
void menu();
double calcularIMC(double peso, double altura);
							
int main(){
	
	
	setlocale(LC_ALL,"Portuguese");
	
	double peso,altura, imc, res, contador = 0, valor, soma, media, i=0;
  	double valoresIMC[10]= {0,0,0,0,0,0,0,0,0,0};
    	
    		
		
		
    	do{		
    			menu();
	    		cin>>res;
	    		
	    		if(res == 1){
	    			cout<<"Escreva um seu peso"<<endl;
		    		cin>>peso;
		    		cout<<"Escreva um sua altura"<<endl;
		    		cin>>altura;
		    		
		    		double resp = calcularIMC(peso, altura);
		    		cout<<" IMC DE: "<<resp<<endl;
    				contador++;
    				
    				for(int i= 0; i < 10; i++){
							if(valoresIMC[i] == 0){
								valoresIMC[i] = resp;
								break;
							}			
	    			}
				}	
				
				
	    		
	    		if(res == 2){
	    			cout<<" Abaixo do peso"<<endl;
	    			for(int i=0; i<10; i++){
						valor = valoresIMC[i];
							if(valor < 18.5){
								cout<<valor<<"entrou"<<endl;
							}	
	    			}	
				}
				
				if(res == 3){
					cout<<"  Saudavel"<<endl;
	    			for(int i=0; i<10; i++){
						valor = valoresIMC[i];
							if(valor >=18.6&& valor <= 24.9){
								cout<<valor<<endl;
							}	
	    			}	
				}
    			
	    		if(res == 4){
		    		cout<<"  Obsidade grau I"<<endl;
					for(int i=0; i<10; i++){
						valor = valoresIMC[i];
							if(valor >=30&& valor <= 34.9){
								cout<<valor<<endl;
						}	
	    			}
	   			}
	   			
	    		if(res == 5){
					cout<<"  Total de IMCs: "<<contador<<endl;
				}	
		    
		
				if(res == 6){
					cout<<"  Media dos IMCs"<<endl;
    					while(i < 10){
							soma = soma + valor;
							i++;
						}
				
						media = soma/contador;
							if(contador == 0){
								media = 0;
						}
					cout<<"  "<<media <<" Media geral"<<endl;
	    		}
	    		
				if(res == 7){
					cout<<" CALCULADORA DESLIGADA"<<endl;
				}
					
					
		}while(res != 7);
    				
    	return 0; 		 			
}
		
		//FUNÇÕES
		void menu(){
			cout<<"[1]Calcular IMC |  [2]Abaixo do peso | [3]Saudaveis | [4]Obesidade Grau I | [5]Total de IMC | [6]Media dos IMCs | [7]Sair"<<endl;
		}
		
		double calcularIMC(double peso, double altura){
			return peso/(altura*altura);
		}
		
		int resposta(int res){
			
		}






