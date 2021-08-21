#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
char url[50];
void draw_menu();

void create_file();
void delete_file();

void read_fgetc();
void read_fscanf();
void read_fgets();

void write_fputc();
void write_fprintf();
void write_fputs();

void write_fseek();

void register_user();
void calc_file_size();

void main()
{
int option;

//printf("Enter the url of the file:\n");
//scanf("%s",url);
strcpy(url,"/home/argelcapeladossantos/c.txt");

do
{
draw_menu();
scanf("%d",&option);
system("clear");
switch(option)
{
	case 1:
		create_file();
	break;

	case 2:
		delete_file();
	break;

	case 3:
		read_fgetc();
	break;

	case 4:
		read_fscanf();
	break;

	case 5:
		read_fgets();
	break;

	case 6:
		write_fputc();
	break;

	case 7:
		write_fprintf();
	break;

	case 8:
		write_fputs();
	break;

	case 9:
		write_fseek();
	break;

	case 10:
		register_user();
	break;

	case 11:
		calc_file_size();
	break;
}

}while(option!=-1);




}

void draw_menu()
{
//system("clear");

printf("\n");
printf("************************\n");
printf("    FILE HANDLING\n");
printf("************************\n");

printf("1)Create file\n");
printf("2)Delete file\n\n");

printf("3)Read with |ch=fgetc();|\n");
printf("4)Read with |ch=fscanf();|\n");
printf("5)Read with |ch=fgets();|\n\n");

printf("6)Write with |fputc();|\n");
printf("7)Write with |fprintf();|\n");
printf("8)Write with |fputs()|;\n");
printf("9)Write with |fseek();|\n\n");

printf("10)Register User\n\n");
printf("11)Calc the size of file\n");


}

void create_file()
{


}

void delete_file()
{



}



void read_fgetc()
{

FILE *fp;
char ch;
fp=fopen(url,"r");

while((ch=fgetc(fp))!=EOF)
printf("%c",ch);
fclose(fp);

}

void read_fscanf()
{
FILE *fp;
char ch;
fp=fopen(url,"r");

rewind(fp);  // SET THE STREAM POINTER TO THE BEGINNING!

char buff[255];
fp=fopen(url,"r");
while(fscanf(fp,"%s",buff)!=EOF)
printf("%s",buff);

}


void read_fgets()
{
char str[500];

FILE *fp;

fp=fopen(url,"r+");

printf("%s",fgets(str,100,fp));

fclose(fp);
}





void write_fputc()
{
// prepare
FILE *fp;
char txt_to_write[100];
fp=fopen("/home/argelcapeladossantos/c.txt","w");

// input msg
printf("\nEnter the message:\n");
scanf("%s",txt_to_write);

// pass string to file
for(int i=0;i<strlen(txt_to_write);i++)
fputc(txt_to_write[i],fp);

fclose(fp);
}

void write_fprintf()
{
// prepare
FILE *fp;
char txt_to_write[100];
fp=fopen("/home/argelcapeladossantos/c.txt","w");

// input msg
printf("\nEnter the message:\n");
scanf("%s",txt_to_write);

fprintf(fp,txt_to_write);

fclose(fp);
}


void write_fputs()
{
char buf[50];

printf("Enter the input you want to add into the file:\n");

scanf("%s",buf);

FILE *fp;

fp=fopen(url,"w+");

fputs(buf,fp);

fclose(fp);
}



void register_user()
{
int id;
char name[30];
float salary;

FILE *fp;
fp=fopen(url,"w+");

printf("Enter your ID:\n");
scanf("%d",&id);
fprintf(fp,"Id=%d\n\n",id);

printf("Enter your name:\n");
scanf("%s",&name);
fprintf(fp,"Name=%s\n\n",name);

printf("Enter you salary:\n");
scanf("%f",&salary);
fprintf(fp,"Salary=%f\n\n",salary);

fclose(fp);
}

void write_fseek()
{
FILE *fp;
int offset;
char str[100],str2[100];
fp=fopen(url,"w+");

/*
printf("\nEnter the message:\n");
scanf("%s",str);
if(strcmp(str,"-1")!=0)
fputs(str,fp);
*/

printf("\nEnter the OFFSET:\n");
scanf("%d",&offset);

printf("\nEnter the second message:\n");
scanf("%s",str2);



//Write data into file at desired location.
fseek(fp,offset,SEEK_SET);

fputs(str2,fp);

fclose(fp);
}

void calc_file_size()
{
FILE *fp;
int length;
fp=fopen(url,"r");
fseek(fp,0,SEEK_END);

length=ftell(fp);
fclose(fp);

printf("Size of file: %d bytes",length);

}

