//registros
#include <iostream>
#include <stdlib.h>

	using namespace std;

	int topo;
	string nomesCliente[20] = {"","","","","","","","","","","","","","","","","","","",""};
	
	struct mercadoria{
		int id;
		string nome;
		string categoria;
		double valor;
		int quantidade;
	};
	
	mercadoria superMercado[20];
	
	void menuPrincipal(){
		cout<<"	Menu Principal        "<<endl;
//cadastra mais de um item, sem precisar voltar ao menu, 
//não deixa cadastrar itens com o mesmo id ou nome.
		cout<<"	1 - Cadastrar produtos"<<endl; 
//edita todas as propriedades dos itens, calcula a quantidade de itens nova 
//e  verifica se existe o item que quer editar, mostra a lista de itens.
		cout<<"	2 - Editar produtos   "<<endl; 
//exibe todo os itens que tem cadastrado;
		cout<<"	3 - Exibir produtos   "<<endl;
//valida se o item existe, verifica se tem quantidade suficiente para comprar,
//ao comprar reduz a quantidade de itens do estoque automaticamente.	
		cout<<"	4 - Comprar produtos  "<<endl;
//Relatorio de clientes e suas compras
//Relatorio total do total das vendas totais.
		cout<<"	5 - Relatorios        "<<endl;
		cout<<"	6 - sair"<<endl;
	}
	
	bool validaIdProduto(int idProduto){
	bool valida = false;
	for(int i = 0; i < topo; i++){
		if(superMercado[i].id == idProduto ){
			valida = true;			
			break;
		}
	}
	return valida;
}
	bool produtoExiste(string nomeProd){
	bool valida = false;
	for(int i = 0; i < topo; i++){
		if(superMercado[i].nome == nomeProd ){
			valida = true;			
			break;
		}
	}
	return valida;
}
	
	void cadastrarProduto(){
		int res;
		do{
			cout<<"	CADASTRAR PRODUTO: "<<endl;
		int idProduto = 0, quantidade;
		string nome;
			
		for(int i = 0; i < 10; i++){
			if(superMercado[i].id == 0){
				cout<<" Informe o id do produto"<<endl;
				cin>>idProduto;
				
			if(validaIdProduto(idProduto)){
				cout<<" Por favor, volte ao menu -> cadastrar de produtos e informe um ID que ainda não tenha sido cadastrado!"<<endl;
				break;
				
			}else{
				cout<<"	Informe o nome do produto "<<endl;
				cin>>nome;
				
				if(produtoExiste(nome)){
					cout<<" Este produto já existe em estoque, favor ir em menu -> adicionar produto"<<endl;
					break;
				}
				superMercado[i].id = idProduto;	
				superMercado[i].nome = nome;	
				cout<<"	Informe a categoria do produto "<<endl;
				cin>>superMercado[i].categoria;
				cout<<"	Informe o valor do produto "<<endl;
				cin>>superMercado[i].valor;
				cout<<"	Informe a quantidade do produto "<<endl;
				cin>>superMercado[i].quantidade;
				topo++;
				break;
				
			}	
		}
	}
			cout<<"Cadastrar outro produto? [1 - sim | 2 - não]"<<endl;
			cin>>res;
		}while(res != 2);
		
}

	void exibirProdutos(){
		cout<<"========================================================="<<endl;
		cout<<"	PRODUTOS CADASTRADOS "<<endl;
		for(int i = 0; i < topo; i++){
			cout<<" ID: "<<superMercado[i].id<<endl;
			cout<<" Nome: "<<superMercado[i].nome<<endl;
			cout<<" Categoria: "<<superMercado[i].categoria<<endl;
			cout<<" Valor: R$ "<<superMercado[i].valor<<" reais a unidade"<<endl;
			cout<<" Quantidade: "<<superMercado[i].quantidade<<" kg de "<<superMercado[i].nome<<" em estoque"<<endl;
		cout<<"========================================================="<<endl;
	}
}
	
	void editarProduto(){
		int quantAdd;
		string nome, propriedade;
		
		cout<<"	Informe o item que desejas editar do estoque"<<endl;
		exibirProdutos();
		cin>>nome;
		if(produtoExiste(nome)){
			cout<<"	O que gostaria de editar no item "<<nome<<": nome, categoria, quantidade, valor ou id "<<endl;
			cin>>propriedade;
		
		if(propriedade == "quantidade"){
			for(int i = 0; i < topo; i++){
			if(superMercado[i].nome == nome){
				cout<<" Informe a quantidade que irá adicionar ao estoque"<<endl;
				cin>>quantAdd;
				double novaQuant = superMercado[i].quantidade + quantAdd;
				cout<<" Antes tinha "<<superMercado[i].quantidade<<" itens, agora tem: "<<novaQuant<<" itens de "<<superMercado[i].nome<<endl;
				superMercado[i].quantidade = novaQuant;				
			}
		}
	}
		if(propriedade == "nome"){
			for(int i = 0; i < topo; i++){
			if(superMercado[i].nome == nome){
				cout<<" Informe o novo nome do item"<<endl;
				cin>>superMercado[i].nome;
				cout<<" Novo nome do produto: "<<superMercado[i].nome<<endl;
			}
		}
	}
		if(propriedade == "categoria"){
			for(int i = 0; i < topo; i++){
			if(superMercado[i].nome == nome){
				cout<<" Informe a nova categoria do item"<<endl;
				cin>>superMercado[i].categoria;
				cout<<" Nova categoria do produto: "<<superMercado[i].categoria<<endl;
			}
		}
	}
		if(propriedade == "valor"){
			for(int i = 0; i < topo; i++){
			if(superMercado[i].nome == nome){
				cout<<" Informe o novo valor do item"<<endl;
				cin>>superMercado[i].valor;
				cout<<" Novo valor do produto: "<<superMercado[i].valor<<endl;
			}
		}
	}	
		if(propriedade == "id"){
			for(int i = 0; i < topo; i++){
			if(superMercado[i].nome == nome){
				cout<<" Informe o novo id do item"<<endl;
				cin>>superMercado[i].id;
				cout<<" Novo id do produto: "<<superMercado[i].id<<endl;
			}
		}
	}	
		}else{
				cout<<" Não escontramos esse produto em nosso sistema"<<endl;
		}
	};

	void comprarProdutos(){
		string nome, nomeCliente;
		double valorPagar = 0, quantidade, res, valorTotal, clientes, novaQuantidade;
			cout<<" Seja bem vindo à sessão de compras, qual seu nome?"<<endl;
			cin>>nomeCliente;
			for(int i = 0; i < 20; i++){
				if(nomesCliente[i] == ""){
					nomesCliente[i] = nomeCliente;
					break;
				}
			}
		
		do{
			cout<<" Olá "<<nomeCliente<<" informe o nome do produto que gostaria de comprar?"<<endl;
			exibirProdutos();
			cin>>nome;
			if(!produtoExiste(nome)){
				cout<<" Favor escreva corretamente o nome do produto"<<endl;
			}else{
				
			cout<<" Qual a quantidade de itens que gostaria de adicionar ao carrinho?"<<endl;	
			cin>>quantidade;
					
					for(int i=0; i<topo; i++){
						if(quantidade > superMercado[i].quantidade){
							cout<<" Nao temos quantidade suficiente deste produto em nosso estoque"<<endl;
							return;
						}
						if(superMercado[i].nome == nome){
						 valorPagar = superMercado[i].valor * quantidade;
						 novaQuantidade =  superMercado[i].quantidade - quantidade;
						superMercado[i].quantidade = novaQuantidade;						 
						}
					}
					valorTotal = valorPagar + valorTotal;
					cout<<" Valor a pagar: R$"<<valorTotal<<endl;

					cout<<" Gostaria de realizar mais alguma compra?[1 - sim | 2 - não]"<<endl;
					cin>>res;
					if(res == 2){
						cout<<" Pagamento realizado com sucesso, volte sempre"<<endl;
					}
				}	
		}while(res != 2);
	}
	
	void relatorios(){
		cout<<" BEM VINDO(A) AO RELATORIO"<<endl;
		cout<<" Abaixo poderá verificar os clientes e suas compras"<<endl;
			for(int i=0; i<topo; i++){
				cout<<" Cliente: "<<nomesCliente[i]<<endl;
			}
		}
	
	
int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int op;
	int resp;
	
	do{
		system("cls");	
		menuPrincipal();
		cout<<"	Informe a opção desejada "<<endl;
		cin>>op;
		
		if(op == 1){
			//CADASTRAR
			cadastrarProduto();			
		}

			
		if(op == 2){
			//ADICIONAR
			editarProduto();
	}
				
		if(op == 3){
			//EXIBIR PRODUTOS
			exibirProdutos();	
		}
		if(op == 4){
			comprarProdutos();
		}
		if(op == 5){
			relatorios();
		}	
		if(op == 6 ){
			cout<<"SISTEMA ENCERRADO";
			resp = 2;
		}	
		
		if(op != 6){
		cout<<"	Deseja voltar ao menu principal? [1 = SIM || 2 = NÃO]"<<endl;
		cin>>resp;	
		}
	
		
	}while(resp == 1);
}
