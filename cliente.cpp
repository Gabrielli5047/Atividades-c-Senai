	void cadastrarCliente(){
		int res;
		float senha;
		
		cout<< " 	É funcionario? digite a senha para ter acesso!!"<<endl;
		cin>>senha;
		
		do{
			if(senha == 123456){
			do{
			cout<<"	CADASTRAR Cliente: "<<endl;
		int idCliente = 0;
		string nome;
			
		for(int i = 0; i < 10; i++){
			if(superMercado[i].id == 0){
				cout<<" Informe o id do produto, favor inserir somente NUMEROS"<<endl;
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
			cout<<" Senha incorreta, digite a senha novamente! | 1- sair"<<endl;
			cin>>senha;
		}while(senha == 123456);
		
}
