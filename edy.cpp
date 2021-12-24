#include <iostream>
#include <locale.h>

using namespace std;

#define TAM_MAX 10

void menu();

int main(){

setlocale(LC_ALL,"Portuguese");

int N[TAM_MAX]={0}, x, topo=0, op;
string op2;

do{
system("cls");
menu();
cout<<"DIGITE A OPÇÃO DESEJADA ";
cin>>op;
system("cls");


switch(op){
case 1:
cout<<"DIGITE UM VALOR INTEIRO ";
cin>>x;
while(x>50){
cout<<"DIGITE UM VALOR INTEIRO VALIDO ";
cin>>x;
}

N[0]=x;
cout<<"N[0] = "<<N[0]<<endl;

break;
case 2:
while(N[0]==0){
cout<<"DIGITE UM VALOR INTEIRO ";
cin>>x;

N[0]=x;
}

cout<<"N[0] = "<<N[0]<<endl;

for(int i=1;i<TAM_MAX;i++){
N[i]=N[topo]*2;
topo++;
cout<<"N["<<i<<"] = "<<N[i]<<endl;
}
break;
case 3:
cout<<" OBRIGADO USÚARIO!"<<endl<<endl;
break;
}
cout<<"DESEJA REALIZAR OUTRA OPÇÃO?, CASO QUEIRA DIGITE SIM";
cin>>op2;

}while(op2=="sim"||op2=="SIM");



}
void menu(){
cout<<" Menu"<<endl
<<"1 - Realizar a operação"<<endl
<<"2 - Exibir os valores do vetor"<<endl
<<"3 - Sair"<<endl;

}
