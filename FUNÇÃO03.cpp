#include <locale.h>
#include <iostream>

//FUNÇÃO QUE RETORNA VALOR;
	using namespace std;
	
	float soma(float a, float b);
	
	int main(){
	
	float res;
	
	res = soma(15, 30);
	cout<<" Res:"<<res<<endl;
	
	return 0;
	}
	
 	float soma(float a, float b){
		return a + b;
	}

