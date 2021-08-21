#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
  char nome[20];
  int idade;
  float media;
} aluno;

void alterar_dados_aluno();
void mostrar_dados_aluno();
void carregar_dados_aluno();
void encontrar_variavel_no_arquivo(char nome_var[]);
void main()
{
	
	int op;
	
	do
	{
	
	printf("1)Escrever dados do aluno no arquivo\n");
	printf("2)Ler dados do aluno no arquivo e jogar na struct\n");
	printf("3)Mostrar dados dados aluno na struct\n");
	printf("Qual a opção: \n");
	scanf("%d",&op);

	
	if(op==1)
	{
		system("cls");
		alterar_dados_aluno();
	}
	else if(op==2)
	{
		system("cls");
		carregar_dados_aluno();
	}
	else if(op==3)
	{
		system("cls");
		mostrar_dados_aluno();
	}


	
	}
	while(op!=-1);



}
void alterar_dados_aluno()
{
	printf("Name of student: \n");
	scanf("%s",&aluno.nome);

	printf("Age of student: \n");
	scanf("%d",&aluno.idade);

	printf("Average grade of student: \n");
	scanf("%0.f",&aluno.media);

	FILE *f;
	char pwd[200]="bruxa.txt";
	f=fopen(pwd,"w");
	
	
	fprintf(f,"|%s|\n",aluno.nome);
	fprintf(f,"|%d|\n",aluno.idade);
	fprintf(f,"|%f|\n",aluno.media);

	fclose(f);
}

void encontrar_variavel_no_arquivo(char nome_var[])
{
	FILE *f;
	char pwd[200]="bruxa.txt";
	f=fopen(pwd,"r");
	char buff[200];
	char mostrar[200];
	/*
	fscanf:
	- don't accept NULL but EOF as null;
	- do not respect the formatation;
	- get the first string until the space;
	
	*/
	/*
	fgets:
	- accept NULL;
	- respect formatation;
	- get the first n caracteres before space;
	*/

	int i=0;
	while(fgets(buff,2,f)!=NULL)
	{
	mostrar[i]=buff;
	printf("%s",buff);
	i++;
	}
	

	
	

	printf("\n\n");
	fclose(f);
}

void carregar_dados_aluno()
{
encontrar_variavel_no_arquivo("");



}
void mostrar_dados_aluno()
{
printf("Nome: %s\n",aluno.nome);
printf("Idade: %d\n",aluno.idade);
printf("Média: %0.lf\n",aluno.media);

}
