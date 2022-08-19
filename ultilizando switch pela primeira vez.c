#include<stdio.h>

int main(){
	
	int login=001;
	int senha=004;
	int login2=002;
	int senha2=005;
	
	printf("dgte seu login:");
	scanf("%d",&login);
	printf("digite seu segundo login");
	scanf("%d",&login2);
	
	
	switch(login){
		case 001:
			printf("digite sua senha:");
			scanf("%d",&senha);
	switch(senha)
		case 004:
		printf("Bem vindo!!\n");
		break;
	defult:
		printf("login errado");
}
	
	switch(login2){
		case 002:
			printf("digite sua senha:");
			scanf("%d",&senha2);
	switch(senha2)
				case 005:
		printf("bem vindo login 2");
	
	break;
	default:
		printf("segundo login errado");
}

	
return 0;	
	
}

