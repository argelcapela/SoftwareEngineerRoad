#include <stdio.h>

struct person
{
	char nome[20];
	int idade;
	char senha[10];
};

int main()
{
	struct person *personPtr,person1;
	personPtr=&person1;

	// Enter Values:
	printf("Enter your name?\n");
	scanf("%s",&personPtr->nome);

	printf("Enter your age:\n");
	scanf("%d",&personPtr->idade);
	
	printf("Enter your senha:\n");
	scanf("%s",&personPtr->senha);


	// Display:
	printf("Cadastro realizado com sucesso!\n");
	printf("\nNome: %s\n",personPtr->nome);
	printf("\nIdade: %d\n",personPtr->idade);
	printf("\nSenha: %s\n",personPtr->senha);







	return 0;
}
