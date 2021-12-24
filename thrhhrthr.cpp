//registros
#include <iostream>
#include <stdlib.h>

	using namespace std;
	
	int topo;
	
	struct mercadoria{
		int id;
		string nome;
		string categoria;
		double valor;
	};
	
	mercadoria superMercado[20];
	
	void menuPrincipal(){
		cout<<"	Menu Principal        "<<endl;
		cout<<"	1 - Cadastrar produto "<<endl;
		cout<<"	2 - Exibir produtos   "<<endl;
		cout<<"	3 - Relatorio de estoque"<<endl;
		cout<<"	4 - Relatorio de estoque"<<endl;
		cout<<"	4 - sair"<<endl;
	}
	
	
	bool validaProduto(int idProduto){
	bool valida = false;
	for(int i = 0; i < topo; i++){
		if(superMercado[i].id == idProduto){
			valida = true;			
			break;
		}
	}
	return valida;
}
	
	void cadastrarProduto(){
		cout<<"	CADASTRAR PRODUTO: "<<endl;
		int idProduto = 0;
		string nome, categoria;
			
		for(int i = 0; i < 10; i++){
			if(superMercado[i].id == 0){
				cout<<"Informe o id do produto"<<endl;
				cin>>idProduto;
			if(validaProduto(idProduto) == true){
				cout<<"Por favor informe uma matricula diferente!"<<endl;
				break;
			}else{
				superMercado[i].id = idProduto;		
				cout<<"	Informe o nome do produto "<<endl;
				cin>>superMercado[i].nome;
				cout<<"	Informe a categoria do produto "<<endl;
				cin>>superMercado[i].categoria;
				cout<<"	Informe o valor do produto "<<endl;
				cin>>superMercado[i].valor;
				topo++;
				break;
			}	
		}
	}
}

	void exibirProdutos(){
		cout<<"	PRODUTOS CADASTRADOS "<<endl;
		for(int i = 0; i < topo; i++){
			cout<<" ID: "<<superMercado[i].id;
			cout<<" Nome: "<<superMercado[i].nome;
			cout<<" Categoria: "<<superMercado[i].categoria;
			cout<<" Valor: R$ "<<superMercado[i].valor<<" reais"<<endl;
	}
}
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int op;
	string resp;
	
	do{
		system("cls");	
		menuPrincipal();
		cout<<"	Informe a opção desejada "<<endl;
		cin>>op;
		switch(op){
			case 1:
				//cadastro
				cadastrarProduto();
				break;
			case 2:
				//exibir
				exibirProdutos();
				break;				
		}
		cout<<"	Deseja realizar outra operação? [S = sim]"<<endl;
		cin>>resp;
		
	}while(resp == "S" || resp == "s");
}
