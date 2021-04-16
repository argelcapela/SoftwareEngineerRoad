#include <stdio.h>

struct user
{
	char name[50];
        int age;
	char password[10];
	char email[100];	
};

struct user getInformation();
void registerUser(struct user u);


int main()
{
	int op=0,loop=0;
	struct user u;

	while(loop==0)
	{
		printf("************************************\n");
		printf("*  Bem Vindo(s) ao capelaplus.com: *\n");
		printf("************************************\n");
		printf("*  1) Cadastrar Novo Usuário	   *\n");
		printf("*  2) Sair			   *\n");
		printf("************************************\n");
		scanf("%d",&op);
		
		switch(op)
		{
			case 1:
				u=getInformation();
				registerUser(u);

			continue;

			case 2:
				printf("BYE BYE\n");
				loop=1;
			continue;		
		}

	
	}

return 0;
}

struct user getInformation()
{
	struct user u;

	printf("Nome de Usuario: \t");
	scanf("%s",&u.name);

	printf("Idade: \t");
	scanf("%d",&u.age);

	printf("Password: \t");
	scanf("%s",&u.password);

	printf("Email: \t");
	scanf("%s",&u.email);

	return u;
};

void registerUser(struct user u)
{
	printf("\nCadastro realizado com sucesso!\n");
	printf("|NOME: %s\n",u.name);
	printf("|IDADE: %d\n",u.age);
	printf("|EMAIL: %s\n",u.email);
	printf("|PASSWORD: %s\n",u.password);
};

