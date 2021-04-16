#include <stdio.h>

struct usuario 
{
	char nome[10];
	int idade;
	char senha[10];
}u1;

int main()
{
	// enter user datas
	printf("Qual o seu nome meu amigo?\n");
	scanf("%s",&u1.nome);

	printf("Qual a sua idade meu amigo?\n");
	scanf("%d",&u1.idade);

	printf("Escolha uma senha meu amigo: \n");
	scanf("%s",&u1.senha);

	// display user information
	printf("\nCadastro realizado com sucesso!\n");
	printf("Nome: %s\n",u1.nome);
	printf("Idade: %d\n",u1.idade);
	printf("Senha: %s\n",u1.senha);

	return 0;
}

