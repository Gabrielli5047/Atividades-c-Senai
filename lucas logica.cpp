#include <iostream>
#include <locale.h>

using namespace std;

double valores[10]= {0,0,0,0,0,0,0,0,0,0};
int cont = 0;

void addvetor(double valor){
	for(int i = 0; i < 10; i++){
		valores[i] = 0;
		valores[i] = valor;
		cont++;
		break;
	}
}

void RemoveValor(int remove){
	for( int i = 0; i <10 ; i++){ 
		if (valores[i] = remove){ 
		    valores[i] = 0;
		    cont--;
			break; 
		}
	}
}

void ExibirElementos(){
	for(int i=0; i < 10; i++){
		if(valores[i] != 0){
		cout<<"Vetor["<<i<<"]"<<" = "<<valores[i]<<endl;	
		}
	}
}

void MenuPrincipal(){
	cout<<"        Menu Principal     "<<endl<<endl;
	
	cout<<"1 - Adicionar valores no vetor  "<<endl;
	cout<<"2 - Remover um valor especifico "<<endl;
	cout<<"3 - Rotinas Especiais           "<<endl;
	cout<<"4 - Exibir os elementos         "<<endl;
}

void RotinasEspeciais(){
	cout<<"          Menu Rotinas Especiais       "<<endl<<endl;
	
	cout<<"1 - Exibir os elementos em ordem crescente   "<<endl;
	cout<<"2 - Exibir os elementos em ordem decrescente "<<endl;
	cout<<"3 - Mostrar o maior elemento do vetor        "<<endl;
	cout<<"4 - Mostrar o menor elemento do vetor        "<<endl;
	cout<<"5 - Exibir a soma total dos elementos        "<<endl;
	cout<<"6 - Exibir a media dos elementos             "<<endl;
	cout<<"7 - Retornar ao menu Principal               "<<endl;
}



int main(){
	setlocale(LC_ALL,"Portuguese");
	
    string resp, resp1, resp2;
	double op, cont = 0,valor,remove;
 
	
	do{
		system ("cls");
		MenuPrincipal();
		cout<<"informe a opção desejada"<<endl;
		cin>>op;
		
		if(op == 1){
			do{ 
				cout<<"Informe um valor"<<endl;
				cin>>valor;
				addvetor(valor);

				
				system("cls");
				cout<<"Deseja infomar outro valor? [S] = Sim e [N] = Não"<<endl;
				cin>>resp1;			
			}while(resp1 == "s" || resp1 == "S");
			
			
		}else if(op == 2){
			do{
				system("cls");
				cout<<"Informe o valor que deseja remover"<<endl;
				cin>>remove;
				RemoveValor(remove);
				break;
							
				cout<<"Deseja remover outro valor? [S] = Sim e [N] = Não"<<endl;
				cin>>resp2;			
			}while(resp2 == "s" || resp2 == "S");
			
		}else if(op == 3){
			
			RotinasEspeciais();
			
			
		}else if(op == 4){
			ExibirElementos();
		}
		
		
		
		cout<<"Deseja retonar ao menu principal? [S] = Sim"<<endl;
		cin>>resp;
	}while(resp == "S" || resp == "s");
	
	return 0;
	
}
