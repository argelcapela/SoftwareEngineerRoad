// val email
#include <stdio.h>
#include <regex.h>
#include <stdlib.h>
#include <string.h>


int regexValidator(char pattern[],char string[])
{

regex_t re;// pre-compilador;
if(regcomp(&re,pattern,0)!=0)
printf("\nErro na expressão regular!");
int status=regexec(&re,string,0,NULL,0);// valida;
regfree(&re);// libera memória;
return status;

}

void main()
{

char email[20];


do
{
system("clear");
printf("\nEnter your E-Mail please: ");
scanf("%s",&email);

// validando o email digitado:
if(val("[a-z]@gmail.com",email)==0)
{
printf("\nE-mail validado com sucesso!");
}
else
{
printf("\n Tente outro email por favor");
}

}while(strcmp(email,"exit")!=0);

}
