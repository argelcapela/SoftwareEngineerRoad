#include <regex.h>
#include <stdio.h>

//CREATE A PRE-COMPILATOR with the compilation string:
//regcomp(<regex var>,<string pattern>,<type of compilation>)
// 	-return 0 if success
// 	-return other stuff it error
// 	-REG_EXTENDED:type of expression
// 	-REG_NOSUB:return error ir occur in regexec


//EXECUTE THIS PRE-COMPILATOR INTO MY STRING:
//regexec(<precompiled pattern>,<string to be matched>,0,NULL,0);
//	3-LOCATION DETAILS;
//	4-DETAILS OF SEARCH;
//	5-CHANGE IN MATCHING BEHAVIOR;
//return 0 if success
//return REG_NOMATCH if or the string do not match

//regfree(&re)
// free memory allocated to precompiler &re;
/

int match(const char *string,const char *pattern)
{
regex_t re;

if(regcomp(&re,pattern,REG_EXTENDED|REG_NOSUB)!=0)
return 0;

int status=regexec(&re,string,0,NULL,0);

regfree(&re);

if(status!=0) return 0;

return 1;
}

void main()
{

const char* s1="abc";
const char* s2="123";
const char *re="[word]";

printf("%s Given string matchches %s? %s\n",s1,re,match(s1,re)?"true":"false");

printf("%s Given string matches %s? %s\n",s2,re,match(s2,re)?"true":"false");

}
