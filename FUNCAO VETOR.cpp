#include <locale.h>
#include <iostream>

//FUNÇÃO com vetor;
	using namespace std;
	void numeros(float tra[4]);
	
	int main(){
		
	float valores[4]= {1,2,5,4};
	
	numeros(valores);
	
	return 0;
	}
	
 	void numeros(float tra[4]){
 		for(int i = 0; i <4; i++){
 			cout<<tra[i]<<endl;
		 }
	 }
