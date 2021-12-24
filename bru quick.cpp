#include <iostream>
#include <iomanip>
#include <iostream>
#include <stdlib.h>

void ordenarQuickSort(int v[], int left, int right) {
    int i, j, x, y,vezes=0;     
    i = left;
    j = right;
    x = v[(left + right) / 2];
     
    while(i <= j) {
            vezes++;
            while (v[i] < x && i < right) {
                vezes++;
                i++;
        }
        while(v[j] > x && j > left) {
                    vezes++;
                    j--;
        }
        if(i <= j) {
                    vezes++;
            y = v[i];
            v[i] = v[j];
            v[j] = y;
            i++;
            j--;
                        
        }
                
    }

    if(j > left) {
            vezes++;
            ordenarQuickSort(int left, int j);
    }
        if (i < right) {
            vezes++;
        ordenarQuickSort(i, right);
    }

        if(verificaOrdenado()) {
            cout << "O vetor foi ordenado com o metodo Quick Sort gerando " << vezes << " comparacoes tendo custo de O(n log n)." << endl;
        }
}

int main(){
	ordenarQuickSort();
retun 0;	
}
