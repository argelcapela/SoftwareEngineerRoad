#include <regex.h>
#include <stdio.h>
#define MAX_MATCHES 1

void match(regex_t *pexp,char *sz)
{
regmatch_t matches[MAX_MATCHES];

if(regexec(pexp,sz,MAX_MATCHES,matches,0)==0)
{
printf("\"%s\",matches characters %d - %d\n",sz,matches[0].rm_so,matches[0].rm_eo);
}
else
{
printf("\"%s\" does not match \n",sz);

}

}

void main()
{
int rv;
regex_t exp;
rv=regcomp(&exp,"-?[0-9]+(\\.[0-9]+)?",REG_EXTENDED);
if(rv!=0)
{
printf("regcomp failed with %d\n",rv);
}

//2. Now run some tests on it
match(&exp,"0");
match(&exp,"0.0");
match(&exp,"-10.1");
match(&exp,"a");
match(&exp,"a.1");
match(&exp,"hello");
regfree(&exp);


}
