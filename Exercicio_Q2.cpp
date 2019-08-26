#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int m[3][3], q_pares;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("Linha %d coluna %d: ", i, j);
			scanf("%d", &m[i][j]);
			if(m[i][j] % 2 == 0){
				q_pares ++;
			}
		}
	}
	//system("cls");
	printf("Quantidade de números pares: %d", q_pares);
	
	return 0;
}
