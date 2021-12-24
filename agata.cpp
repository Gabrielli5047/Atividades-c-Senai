#include<iostream>

using namespace std;

int main (){
	int idade;
	string sexo;
	
	cout<<"idade ?"<<endl;
	cin>>idade;
	cout<<"sexo ?"<<endl;
	cin>>sexo;
	
	if((idade > 17 )&& (sexo == "M")){
		cout<<"ok 1"<<endl;
	}else{
		if((idade > 25 )|| (sexo == "F")){
		cout<<"ok 2"<<endl;
	}else{
		cout<<"eliminado";
	}
	}
	
return 0;
	
}
