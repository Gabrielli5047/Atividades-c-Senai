#include <iostream>
#include <stdlib.h>

    using namespace std;

    void menuPrincipal(){
        cout << "        | MENU PRINCIPAL |      " << endl;
        cout << "================================" << endl;
        cout << "1 - Adicionar valores no vetor  "<< endl;
        cout << "2 - Remover um valor especifico "<< endl;
        cout << "3 - Rotinas Especiais           "<< endl;
        cout << "4 - Exibir os elementos         "<< endl;
        cout << "5 - Sair                        "<< endl;
        cout << "================================" << endl;
    }

    void menuEspecial(){
        cout << "     | MENU ROTINAS ESPECIAIS |    " << endl;
        cout << "==================================" << endl;
        cout << "1 - Exibir os elementos em ordem crescente" << endl;
        cout << "2 - Exibir os elementos em ordem decrescente" << endl;
        cout << "3 - Mostrar o maior elemento do vetor" << endl;
        cout << "4 - Mostrar o menor elemento do vetor" << endl;
        cout << "5 - Exibir a soma total dos elementos" << endl;
        cout << "6 - Exibir a media dos elementos" << endl;
        cout << "7 - Retornar ao menu Principal" << endl;
        cout << "==================================" << endl;
    }

int main(){
    double valores[10] = {0,0,0,0,0,0,0,0,0,0}, valor, res, respEsp,resp, maiorEle = 0, menorEle = 0, soma, media, contador=0;
    int resposta, respostaEsp;
    
    do{
    	menuPrincipal();
    	cin >> resposta;

    switch (resposta){
        case 1 : 
        do {
			contador++;
          cout << "Adicione valor ao vetor" << endl;
            cin >> valor;
            for (int i = 0; i < 10; i++){
                if (valores[i] == 0){
                    valores[i] = valor;
                    break;
                }
            } 
            cout << "Deseja adicionar  outro valor? 1- Sim  2- Não" << endl;
            cin >> res;
            
        } while (res == 1);
				break;
        case 2 : 
        do {
			
          cout << "Remova valor do vetor" << endl;
            cin >> valor;
            for (int i = 0; i < 10; i++){
                if (valores[i] == valor){
                    valores[i] = 0;
                    contador--;
                }
            } 
            cout << "Deseja remover outro valor? 1- Sim  2- Não" << endl;
            cin >> res;
            
        } while (res == 1);
        	break;
        case 3:
        	do{
        	menuEspecial();
        	cin>>respostaEsp;
        		if(respostaEsp == 1){
        		for (int j = 0; j < 10; j++){
                for (int i = 0; i < 10; i++)
                {
                if (valores[i] > valores[i-1])
                {
                int temp = valores[i];
                valores[i] = valores[i-1];
                valores[i-1] = temp;
                cout<<temp;
  	                }
            }
        }
			   	
				}
				if(respostaEsp == 2){
                for (int j = 0; j < 10; j++){
                for (int i = 0; i < 10; i++)
                {
                if (valores[i] > valores[i+1])
                {
                int temp = valores[i];
                valores[i] = valores[i+1];
                valores[i+1] = temp;
                cout<<temp;
  	                }
            }
        }break;
				}
				if(respostaEsp == 3){
    				for(int i=0; i<10; i++){
    					if(maiorEle <= valores[i]){
    						maiorEle = valores[i];
						}
					}
					cout<<" O maior elemento: "<<maiorEle<<endl;
				}
				if(respostaEsp == 4){
        			for(int i = 0; i < 10; i++){	
							if(menorEle > valores[i] || menorEle != 0){
								menorEle = valores[i];
							}
					 }
				 	cout<<" O menor Elementor: "<<menorEle<<endl;
				}
				
				if(respostaEsp == 5){
        			for(int i=0; i<10; i++){
        				soma += valores[i];
					}
					cout<<" A soma deu: "<<soma<<endl;
					soma = 0;
				}
				if(respostaEsp == 6){
        			for(int i=0; i<10; i++){
        				soma += valores[i];
					}
					media = soma/contador;
					cout<<" A media deu: "<<media<<endl;
					media = 0;	
				}
				if(respostaEsp == 7){
					
				}
        	
        if(respostaEsp != 7){
        	cout<<" Deseja fazer mais alguma operação? 1- Sim | 2- Não"<<endl;
    		cin>>respEsp;
		}		
        	
    		
			}while(respEsp ==1);
        	
        	break;
        case 4:
        	for(int i = 0; i <10; i++){
        		if(valores[i] != 0){
        			cout<<valores[i]<<endl;
				}
			}
        	break;
        	case 5:
        		break;
        
        
	}
      
    
		if(resposta != 5){
		cout<<" Deseja fazer mais alguma operação? 1- Sim | 2- Não"<<endl;
    	cin>>resp;
}
	}while(resp == 1);
	
    return 0;
}
