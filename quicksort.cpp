	#include <iostream>
#include <stdlib.h>
	
	

	//2
	//função pra dividir
		int dividir(int vetor[],int esq, int dir){
	    int aux; //troca de posicoes
	    int cont = esq;
		//se passar de 0-5, come~ça de 1 a 5, pq  
	    for(int i=esq+1 ; i<=dir ; i++){
	        if( vetor[i] < vetor[esq] ){
	            cont++;
	            aux=vetor[i];
	            vetor[i]=vetor[cont];
	            vetor[cont]=aux;
	        }
	    }
	
	    aux=vetor[esq];
	    vetor[esq]=vetor[cont];
	    vetor[cont]=aux;
	
	    return cont;
	}
	//1
	void quick(int vetor[],int esq, int dir){
	    int pos;
	    if(esq < dir){
	    	//dividir o vetor em duas partes 
	        pos = dividir(vetor,esq,dir);
	        // ordena primeirto a esquerda até a posição do pivô menos 1;
	        quick(vetor,esq,pos-1);
	        //ordena a posição +1  até a posição a direita;
	        quick(vetor,pos+1,dir);
	    }
	}

	
	int main(){
	
	    int vetor[]={3,5,8,1,9,2,4,7,0,6};
	    int n=10;
	
	    quick(vetor,0,n);
	
	
//	    for(int i=0;i<n;i++){
//	    	   cout<<"%d - "<<vetor[i]<<endl;
//		}
	     cout<<"oi";
	
	    system("pause");
	    return 0;
	}
