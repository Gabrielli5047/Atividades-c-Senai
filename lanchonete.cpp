#include <iostream>

using namespace std;
int main()
{

    int quantidade, codigo;
    float preco, total,resp;
do{

	    cout << "Digite o codigo do produto desejado e depois a quantidade desejada" << endl << "| 1 | Cachorro quente | R$ 4.00 |\n| 2 | X-Salada | R$ 4.50 |\n| 3 |X-Bacon | R$ 5.00 |\n| 4 | Torrada Simples | R$ 2.00 |\n| 5 | Refrigerante | R$ 1.50 |"<< endl;
	    cout << "Informe o codigo do lanche: "<<endl;
	    cin >> codigo;
	    cout << "Informe a quantidade do lanche: "<<endl;
		cin >> quantidade;
	    
	    if(codigo==1)
	    {
	        preco = 4.00;
	        cout << quantidade << "x " << "|Cachorro quente|" << endl;
	    }
	    else if (codigo==2)
	    {
	        preco = 4.50;
	        cout << quantidade << "x " << "|X-Salada|" << endl;
	    }
	    else if(codigo==3)
	    {
	    	preco = 5.00;
	    	cout << quantidade << "x" << "|X-Bacon|" << endl;
		}
		else if(codigo==4)
		{
			preco = 2.00;
			cout << quantidade << "x" << "|Torrada Simples|" << endl;
		}
		else if(codigo==5)
		{
			preco = 1.50;
			cout << quantidade << "x" << "|Refrigerante|" << endl;
	}
	    total = total +(quantidade * preco);
	    cout << "Total a pagar R$ " << total <<endl;
	    cout << "Gostaria de comprar outros produtos?[Sim = 1, Não = 2]"<<endl;
	    cin>> resp;
	  
}while(resp== 1);
    return 0;
}
