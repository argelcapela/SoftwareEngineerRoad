#include <stdio.h>
#include <string.h>
#include <regex.h>
#include <stdlib.h>

int val(char regex[],char string[])
{
regex_t pc;
if(regcomp(&pc,regex,0)!=0)
printf("\nInvalid Regex!");
int status=regexec(&pc,string,0,NULL,0);
regfree(&pc);
return status;
}

void main()
{
char email[30];
do
{

printf("\nEnter your E-mail please: ");
scanf("%s",&email);
if(val("[a-z]@gmail.com",email)==0)
{
	printf("\nE-mail valido! \n\n LOGADO COM SUCESSO!");
	return;
}
else
printf("\nTry again!");
system("clear");
}while(strcmp("exit",email)!=0);

}
