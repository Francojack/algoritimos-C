#include<stdio.h>
#include<string.h>

struct funcionario{
	int codigo;
	char nome[20];
	float salario;
	int departamento;
	int cargo;
};
 int main(){
 	struct funcionario
 	funcionario1,funcionario2;
 	
 	printf("digite o codig:\n");
 	scanf("%d",&funcionario1.codigo);
 	printf("Nome\n");
 	scanf("%s",&funcionario1.nome);
 	printf("Digite o salario:\n");
 	scanf("%d"&funcionario1.salario);
 	
 	return 0;
 }

