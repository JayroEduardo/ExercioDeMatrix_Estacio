#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[4][4], maior = 0, linha = 0, coluna = 0;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			printf("linha %d coluna %d: ", i, j);
			scanf("%d", &m[i][j]);
			if(m[i][j] > maior || i == 0){
				maior = m[i][j];
				linha = i;
				coluna = j;
			}
		}
	}
	//system("cls");
	printf("Localização do maior número\n");
	printf("linha %d coluna %d", linha, coluna);
	
	return 0;
}
