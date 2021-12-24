#include <locale.h>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int quantidadeAlunos = 0,res, alunos = 1;
	float n1, n2, n3, media, somaMedias, notaGlobal= 0, mediaGlobal=0;


    do{
    	
    	
    	cout<< "Deseja calcular media do aluno "<<alunos<<" ? SIM[1] NÃO[0]"<<endl;
    	cin>> res;
    	
    	if(res == 1){
	    	cout << "Digite nota 1 do aluno"<<endl;
			cin >> n1;				
			
			cout << "Digite nota 2 do aluno"<<endl;
			cin >> n2;
			
			cout << "Digite nota 3 do aluno"<<endl;
			cin >> n3;	
			
			somaMedias = (n1 + n2 + n3);
		media = somaMedias/3;
		
		
		if(media >= 7){
			cout<<"Aprovado"<<endl;
			cout<<"Media do aluno "<<media<<endl;
		}else if (media <= 3){
			cout<<"Reprovado"<<endl;
			cout<<"Media do aluno "<<media<<endl;
		}else{
			cout << "Recuperação"<< endl;
			cout<<"Media do aluno "<<media<<endl;
		}
		alunos++;
		quantidadeAlunos++;
		notaGlobal+= media;
		mediaGlobal = notaGlobal/quantidadeAlunos;
		
		
		}
		
		if(res ==0
		){
		cout<<"Soma das medias: "<< notaGlobal<<endl;
		cout<<"Quantidade de medias: "<<quantidadeAlunos<<endl;
		cout<<"Media geral: "<<mediaGlobal<<endl;	
		}
		
			
					
    } while (res == 1);

		return 0;
}

