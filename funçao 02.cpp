#include <locale.h>
#include <iostream>

//VOID NÃO RETORNA VALORES;
	using namespace std;
	
	void soma(int a, int b);
	
	int main(){
		
	soma(15, 30);
	
	return 0;
	}
	
	void soma(int a, int b){
		cout<< " Soma dos valores: "<< a + b<<endl;
	}

