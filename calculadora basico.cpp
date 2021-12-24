#include <locale.h>
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <vector>

using namespace std;
							
int main(){
	
	vector<int>valores;
	setlocale(LC_ALL,"Portuguese");
	
	int valor, res, novoValor = 2, lenghtArray = 0;
  
    	cout<<"Escreva um valor"<<endl;
    	cin>>valor;
    	
    	while(lenghtArray <= 10){
    			cout<<"N["<<lenghtArray<<"]"<<" = "<<valor<<endl;
	    		novoValor = valor*2 ;
	    		valor = novoValor;
	    		lenghtArray++;
	    		valores.push_back(novoValor);	
    		
		}
				
    	return 0; 		 			
}

