#include<stdio.h>

int main(){
	
	char matriz [4][4][1];
	int linha=1,coluna=1;
	
	inicio:
	while(coluna<=4){
		printf("Digite a linha : %d Digite a coluna :%d",linha,coluna);
		scanf("%s",&matriz[linha][coluna]);
		coluna++;
	}
	linha++;
	coluna=1;
	if(linha<=4){
		goto inicio;
	}
	else{ printf("matriz :");
	}
	
	printf(" %s|%s|%s|%s\n", matriz[1][1],matriz[1][2],matriz[1][3],matriz[1][4]);
	
	printf(" %s|%s|%s|%s\n", matriz[2][1],matriz[2][2],matriz[2][3],matriz[2][4]);
	
	printf(" %s|%s|%s|%s\n", matriz[3][1],matriz[3][2],matriz[3][3],matriz[3][4]);
	
	printf(" %s|%s|%s|%s\n", matriz[4][1],matriz[4][2],matriz[4][3],matriz[4][4]);
	
	return 0;
}

