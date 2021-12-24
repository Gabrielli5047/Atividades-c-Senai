#include <iostream>
#include <locale.h>
#include <iomanip>

		using namespace std;
		
	int main(){
		
	setlocale(LC_ALL,"Portuguese");
	double n1, n2, n3, notas1, notas2, notas3, amostra, media, totalMedias=media;
	int numeroMedias=0, novaMedia;
	
	do{
		cout<<"DIGITE A PRIMEIRA NOTA DO ALUNO: ";
		cin>>n1;
		amostra++;
		system("cls");
	while(n1<0||n1>10){
		cout<<"DIGITE A PRIMEIRA NOTA DO ALUNO VALIDA: ";
		cin>>n1;
		amostra++;
		system("cls");
	}
		cout<<"DIGITE A SEGUNDA NOTA DO ALUNO: ";
		cin>>n2;
		amostra++;
		system("cls");
	  while(n2<0||n2>10){
		cout<<"DIGITE A SEGUNDA NOTA DO ALUNO VALIDA: ";
		cin>>n2;
		amostra++;
		system("cls");
	}
		cout<<"DIGITE A TERCEIRA NOTA DO ALUNO: ";
		cin>>n3;
		amostra++;
		system("cls");
	  while(n3<0||n3>10){
		cout<<"DIGITE A TERCEIRA NOTA DO ALUNO VALIDA: ";
		cin>>n3;
		amostra++;
		system("cls");
	}
		numeroMedias++;
		cout<<"DIGITE '1' SE DESEJAR CALCULAR NOVA MÉDIA: ";
		cin>>novaMedia;
		system("cls");
		
		notas1=notas1+n1;
		notas2=notas2+n2;
		notas3=notas3+n3;
		
		media=(notas1+notas2+notas3)/amostra;
	
		totalMedias=totalMedias+media;
	}while(novaMedia==1);
		cout<<" TOTAL DA SOMA DAS MÉDIAS É EQUIVALENTE A"<<fixed<<setprecision(2)<<totalMedias<<endl
		<<" FORAM VERIFICADAS "<<numeroMedias
		<<" MÉDIAS, TENDO O ALUNO FICADO COM MÉDIA "<<media<<endl
		<<" SENDO CONSIDERADO ";
	  if(media>=7){
		cout<<"APROVADO";
	} else if(media<=3){
		cout<<"REPROVADO";
	} else{
		cout<<"EM RECUPERAÇÃO";
	}
}
