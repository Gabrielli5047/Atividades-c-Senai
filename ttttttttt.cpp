#include <locale.h>
#include <iomanip>
#include <iostream>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int quantidadeNotas = 0, novaMedia = 0;
	double n1, n2, n3, media, somaMedias = 0;


            do{
				cout << "Digite nota 1 do aluno\n";
				cin >> n1;
				quantidadeNotas++;
				
				cout << "Digite nota 2 do aluno\n";
				cin >> n2;
				quantidadeNotas++;
				
				cout << "Digite nota 3 do aluno\n";
				cin >> n3;
				quantidadeNotas++;
				
				somaMedias = n1 + n2 + n3;
				media = somaMedias/3;
				
				
				if(media >= 7){
					cout << "Aprovado"<< endl;
				}else if (media <= 3){
					cout << "Reprovado"<< endl;
				}else{
					cout << "Recuperação"<< endl;
				}
				
				cout << "A soma das medias é: "<< somaMedias<< endl;
				cout << "A  media global é: " << media<< endl;
				
				cout<<"Deseja calcular nova media, digite 1, se não, digite 0? "<<endl;
				cin>> novaMedia;
				
				cout<<somaMedias;
					
				
            } while (novaMedia == 1);
	
return 0;
}
