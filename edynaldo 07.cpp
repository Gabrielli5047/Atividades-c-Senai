#include <iostream>
#include <locale.h>
#include <string.h>

using namespace std ;

void menuP() ;
void menuCad() ;
void menuVendas() ;
void menuRelato() ;
void addProduto() ;
void addFuncionario() ;
void addCliente() ;
bool validarCOD( int a ) ;
bool validarPIS( int a ) ;
bool validarCPF( int a ) ;
void exibirPRO() ;
void exibirFUN() ;
void exibirCLI() ;
void terminalVendas() ;

struct cadPro {
	string Nome ;
	int Tipo ;
	int Cod ;
	double Valor;	
};
cadPro produto[10] ;

struct cadFun {
	string Nome ;
	int Pis ;
	int Cpf ;
	double Ano ;	
};
cadFun funcionario[5] ;

struct cadClien {
	string Nome ;
	int Registro ;
	int Cpf ;
	double Regiao ;
};
cadClien cliente[20] ;

struct terminalVENDAS {
	string Funcionario ;
	string Produto ;
	int Quantidade ;
	double TotalVenda ;
	int Mes ;
};
terminalVENDAS vendasPeriodo[50] ;

int topo1, topo2, topo3, topo4 ;
string cadasPro, cadasPis, cadasCli, cadasVENDAS ;


int main() {
	
	setlocale(LC_ALL,"Portuguese") ;
	
	int op, op2, op3 ;
	string menup ;
	
	do{
		menuP() ;
		cout << "ESCOLHA UMA OPÇÃO DO MENU:" << endl ;
		cin >> op ;
		system( "cls" ) ;
		while( op < 0 || op > 4 ) {
			cout << "ESCOLHA UMA OPÇÃO DO MENU:" << endl ;
			cin >> op ;
			system( "cls" ) ;
		}
		
		switch(op) {
			case 1:
				menuCad() ;
				cout << "ESCOLHA UMA OPÇÃO DO MENU:" << endl ;
				cin >> op2 ;
				system( "cls" ) ;
				while( op2 < 0 || op2 > 4 ) {
					cout << "ESCOLHA UMA OPÇÃO DO MENU:" << endl ;
					cin >> op2 ;
					system( "cls" ) ;
				}
				
				if ( op2 == 1 ){
					
					addProduto() ;
					exibirPRO() ;
					
				}else if ( op2 == 2 ) {
					
					addFuncionario() ;
					exibirFUN() ;					
					
				}else if ( op2 == 3 ) {
					
					addCliente() ;
					exibirCLI() ;
					
				}else if ( op2 ==4 ) {
					
					cout << "\tOBRIGADO USÁRIO!" << endl << endl ;
					
				}
				break;
			case 2 :
				cout << "\tBEM VINDO AO TERMINAL DE VENDAS" << endl ;
				menuVendas() ;
				cout << "ESCOLHA UMA DAS OPÇÕES DO MENU ACIMA"<< endl ;
				cin >> op3 ;
				
				if ( op3 == 1 ) {
					
				} else if ( op3 == 2 ) {
					terminalVendas() ;
				}else if ( op3 == 3 ) {
					
				}
				
				break;
			case 3:
				break;
			case 4:
				break;
		}
		
		cout << "DESEJA RETORNAR AO MENU PRINCIPAL?, DIGITE SIM:" << endl ;
		cin >> menup ;
		system( "cls" ) ;
		
	}while(menup == "sim" || menup == "SIM");	
	
	
}

void menuP() {
	cout << "Menu Principal"   << endl
		 << "1 - Cadastros"    << endl
		 << "2 - Vendas"       << endl
		 << "3 - Relatórios"   << endl
		 << "4 - Sair"         << endl ;
}

void menuCad() {
	cout << "Menu Cadastros"                                                << endl
		 << "1 - Cadastrar Produto (Nome, Tipo, Código, Valor)"             << endl
		 << "2 - Cadastrar Funcionário (Nome, CPF, PIS, Ano Contratação)"   << endl
		 << "3 - Cadastrar Cliente (Nome, Registro, CPF, Região)"           << endl
		 << "4 - Voltar ao Menu Principal"                                  << endl ;
}

void menuVendas() {
	cout << "Menu Estoque/Vendas"                                                                          << endl
		 << "1 - Entrada de Estoque (Mês de entrada, Quantidade, Lote, Valor NF'Nota Fiscal')"             << endl
		 << "2 - Terminal de Vendas (id do funcionário, id do produto, quatidade comprada, Mês da venda )" << endl
		 << "3 - Voltar ao Menu Principal"                                                                 << endl ;
}

void menuRelato() {
	cout << "Menu Relatórios"                                           << endl
		 << "1 - Total das Vendas (Por Mês, Por Cliente, Por Produto)." << endl 
		 << "2 - Fornecedores (Tipo, Quantidade)."                      << endl
		 << "3 - Voltar ao Menu Principal"                              << endl ;
}

void addProduto() {
	do{
		int codigo = 0 ;		
		for ( int i = 0 ; i < 10 ; i++ ) {
			if ( produto[i].Nome == "" ) {
				cout << "DIGITE O NOME DO PRODUTO"                    << endl ;
				cin >> produto[i].Nome ;		
				cout << "DIGITE O TIPO DO PRODUTO"                    << endl ;
				cin >> produto[i].Tipo ;				
				cout << "INFORME O CÓDIGO"                            << endl ;
				cin >> codigo ;
				while ( validarCOD(codigo) == true ) {
					cout << "INFORME OUTRO CÓDIGO"                    << endl ;
					cin >> codigo ;
					break ;
				}
				produto[i].Cod = codigo ;
				cout << "INFORME O VALOR "                            << endl ;
				cin >> produto[i].Valor ;
				topo1++ ;
				break ;									
			 }
		 }				
		 cout << "DESEJA CADASTRAR OUTRO PRODUTO?, DIGITE SIM:"       << endl ;
		 cin >> cadasPro ;
		 system("cls") ;
			
	}while ( cadasPro == "sim" || cadasPro =="SIM") ;

}

void addFuncionario() {
	do{
		int pis = 0 ;
		for ( int i = 0 ; i < 10 ; i++ ) {
			if ( funcionario[i].Nome == "" ) {
				cout << "DIGITE O NOME DO FUNCIONÁRIO"                 << endl ;
				cin >> funcionario[i].Nome ;
				cout << "DIGITE O CPF DO FUNCIONÁRIO"                  << endl ;
				cin >> funcionario[i].Cpf ;
				cout << "DIGITE O PIS DO FUNCIONÁRIO"                  << endl ;
				cin >> pis ;
				while( validarPIS( pis ) == true ) {
					cout << "DIGITE O PIS DO FUNCIONÁRIO CORRETAMENTE" << endl ;
					cin >> pis ;
				}
				funcionario[i].Pis = pis ;
				cout << "DIGITE O ANO DE CONTRATAÇÃO DO FUNCIONÁRIO"   << endl ;
				cin >> funcionario[i].Ano ;
				topo2++ ;
				break ;
			}
		}		
		cout << "DESEJA CADASTRAR OUTRO FUNCIONÁRIO?, DIGITE SIM"      << endl ;
		cin >> cadasPis ;
		system( "cls" ) ;		
		
	}while ( cadasPis == "sim" || cadasPis == "SIM" ) ;
}

void addCliente() {
	do{
		int cpf = 0 ;
		for ( int i = 0 ; i < 10 ; i++ ) {
			if ( cliente[i].Nome == "" ) {
				cout << "DIGITE O NOME DO CLIENTE"                     << endl ;
				cin >> cliente[i].Nome ;
				cout << "DIGITE O REGISTRO DO CLIENTE"                 << endl ;
				cin >> cliente[i].Registro ;
				cout << "DIGITE SEU CPF"                               << endl ;
				cin >> cpf ;
				while( validarCPF( cpf ) == true ) {
					cout << "DIGITE SEU CPF"                           << endl ;
				 	cin >> cpf ;
				}
				cliente[i].Cpf = cpf ;
				cout << "DIGITE A REGIÃO DO CLIENTE"                   << endl ;
				cin >> cliente[i].Regiao ;
				topo3++ ;
				break ;
			}
		}
		cout << "DESEJA CADASTRAR OUTRO CLIENTE?, DIGITE SIM"          << endl ;
		cin >> cadasCli ;
		system( "cls" ) ;
		
	}while ( cadasCli == "sim" || cadasCli == "SIM" ) ;
}
	
bool validarCOD( int a) {
	bool valida = false ;
	for( int i = 0 ; i < 10 ; i++ ) {
		if( produto[i].Cod == a ) {
			valida = true ;
			break ;
		}
	}
	return valida ;
}

bool validarPIS(int a) {
	bool valida = false ;
	for ( int i = 0 ; i < 10 ; i++ ) {
		if( funcionario[i].Pis == a ) {
			valida = true ;
			break ;
		}
	}
	return valida ;
}

bool validarCPF( int a ) {
	bool valida = false ;
	for ( int i = 0 ; i < 10 ; i++ ) {
		if ( cliente[i].Cpf == a) {
			valida = true ;
			break ;
		}
	}
	return valida ;
}

void exibirPRO() {
	for ( int i = 0 ; i < topo1 ; i++ ) {
		cout << "NOME\t\tTIPO\tCÓDIGO\tVALOR" << endl 
			 << produto[i].Nome               << "\t\t"     
			 << produto[i].Tipo               << "\t"     
			 << produto[i].Cod                << "\t"      
			 << produto[i].Valor              << endl ;
	}
}

void exibirFUN() {
	for ( int i = 0 ; i < topo2 ; i++ ) {
		cout << "NOME\t\tCPF\tPIS\tANO"       << endl
			 << funcionario[i].Nome           << "\t\t"
			 << funcionario[i].Cpf            << "\t"
			 << funcionario[i].Pis            << "\t"
			 << funcionario[i].Ano            << endl ; 
	}
}

void exibirCLI() {
	for ( int i = 0 ; i < topo3 ; i++ ) {
		cout << "NOME\t\tREGISTRO\tCPF\tREGIÃO" << endl
			 << cliente[i].Nome                 << "\t\t"
			 << cliente[i].Registro             << "\t"
			 << cliente[i].Cpf                  << "\t"
			 << cliente[i].Regiao               << endl ;
	}
}

void terminalVendas() {
	do {
		int pis, quantPro, mesFatu, prod ;
		for ( int i = 0 ; i < 5/*topo2*/ ; i++ ) {
			cout << "INFORME O CADASTRO DO VENDEDOR 'Nº do PIS" << endl ;
			cin >> pis ;
			if ( funcionario[i].Pis == 0/*pis*/ ) {
				//funcionario[i].Pis = pis ;
				cout << "INFORME O PRODUTO PELO CÓDIGO CADASTRADO" << endl ;
				cin >> prod ;			
				if ( produto[i].Cod == 0/*prod*/ ) {
					//produto[i].Cod = prod ;
					cout << "INFORME A QUANTIDADE DESEJADA DO PRODUTO" << endl ;
					cin >> quantPro ;
					cout << " INFORME O MÊS PARA FATURAMENTO DO MATERIAL" << endl ;
					cin >> mesFatu ;
					
					vendasPeriodo[i].Funcionario = funcionario[i].Pis ;
					vendasPeriodo[i].Produto = produto[i].Cod ;
					vendasPeriodo[i].Quantidade = quantPro ;
					vendasPeriodo[i].TotalVenda = quantPro * produto[i].Valor ;	
					vendasPeriodo[i].Mes = 	mesFatu ;	
					
					topo4++ ;
					break ;
				}
			}
		}
		cout << "DESEJA REALIZAR OUTRA VENDA?, DIGITE SIM" << endl ;
		cin >> cadasVENDAS ;
		system( "cls" ) ;
		
	}while ( cadasVENDAS == "SIM" || cadasVENDAS == "sim" ) ;
}
