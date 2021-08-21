#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

struct node {
	int data;
	struct node *next;
};

struct node *start=NULL;
void create_list();
void display_list();

void insert_beg();
void insert_end();
void insert_before();
void insert_after();

struct node *delete_beg(struct node*);
void delete_end();
void delete_node();
void delete_after();
void delete_list();
void sort_list(char *order);
void update_list();
void search_list();
int length_list();
int exist_node_in_list(int pos);
void modify_string();
void draw_menu();
int val(char regex[],char input[]);
char output[100];
char list[100];
void save_list();
void load_list();




void main()
{
char soption[22];
int option;
modify_string(output,"Welcome!");
do
{
draw_menu();

//somente números:
scanf("%s",&soption);
if(val("[0-9]",soption)!=0)
{
modify_string(output,"Essa opção ou caracter não está presente no menu! ou Caracter Inválido!");
}
else
{
	option=atoi(soption);

	if(option==1&&length_list()==0)
	{
		create_list();
		modify_string(output,"List created successfully!");
		

	}
	else if(option!=1&&option!=16&&length_list()==0)
	{
		modify_string(output,"Create a list first of all, to perfom the others operations!");

	}
	else if(option==1&&length_list()!=0)
	{
		modify_string(output,"List already created!");

	}
	else
	{
	switch(option)
	{
		case 2:display_list();
		break;
		case 3:	
		      insert_beg();
		break;
		case 4:insert_end();
		break;
		case 5:insert_before();
		break;
		case 6:insert_after();
		break;
		
		
		
		case 7:start=delete_beg(start);
		break;
		case 8:delete_end();
		break;
		case 9:delete_node();
		break;
		case 10:delete_after();
		break;
		case 11:delete_list();
		break;
		case 12:sort_list("A");
		break;
		case 13:sort_list("D");
		break;
		case 14:update_list();
		break;
		case 15:search_list();
		break;
		case 16:
		system("clear");
		printf("BYE BYE! WE'RE GLAD TO HAVE YOU HERE WITH US!");
		break;
	}
	}

}
}while(option!=16);

}


void draw_menu()
{
system("clear");

if(length_list()==0)
{
modify_string(list,"List empty yet!");
}
else
{
display_list();
}
system("clear");
printf("OUTPUT:\n");
printf("*************************\n");
printf("%s\n",output);
printf("*************************\n\n");
printf("LIST:");
printf("\n**************************\n");
printf(list);
printf("\n**************************\n");
printf("1)create list\n");
printf("2)refresh\n");
printf("3)insert_beg\n");
printf("4)insert_end\n");
printf("5)insert_before\n");
printf("6)insert_after\n");
printf("7)delete_beg\n");
printf("8)delete_end\n");
printf("9)delete_node\n");
printf("10)delete_after\n");
printf("11)delete_list\n");
printf("12)sort_list ascending (<)\n");
printf("13)sort_list descending (>)\n");
printf("14)update_list\n");
printf("15)search_list\n");
printf("16)exit\n");
printf(": ");
}

//validar a entrada do programa
int val(char regex[],char input[])
{
regex_t pc;
if(regcomp(&pc,regex,0)!=0)
{
modify_string(output,"Erro no input do programa: REGULAR EXPRESSION!!");
draw_menu();
return 1;
}
int status=regexec(&pc,input,0,NULL,0);
regfree(&pc);
return status;

}


//modify string
void modify_string(char string[],char new_string[])
{
int i;

for(i=0;i<100;i++)
{
string[i]=new_string[i];
}

}



// verificar a quantidade e se a lista está criada;
int length_list()
{
struct node* ptr;
int l=0;
ptr=start;
if(ptr==NULL)
return 0;
else
l++;

while(ptr->next!=NULL)
{
ptr=ptr->next;
l++;
}
return l;
}

// verificar se existe na lista;
int exist_node_in_list(int pos)
{
struct node *preptr,*ptr;
preptr=(struct node*)malloc(sizeof(struct node));
preptr->data=-1;
preptr->next=start;

ptr=preptr;
int found=0;

while(ptr->next!=NULL)
{
ptr=ptr->next;

if(ptr->data==pos)
{
found=1;
break;
}
else
found=0;

}
free(preptr);
return found;
}


void create_list()
{
struct node *ptr,*new_node;
int num;

system("clear");
printf("Enter the values to add in list. (-1 to stop and return to menu)\n");
scanf("%d",&num);

do
{

if(exist_node_in_list(num)==1)
{
	printf("You can't repeat values on the list!Try other!\n");
}
else if(num!=-1)
{

	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	if(start==NULL)
	{
	start=new_node;
	new_node->next=NULL;
	}
	else
	{
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;

	ptr->next=new_node;
	new_node->next=NULL;

	}

}
scanf("%d",&num);
}while(num!=-1);

}

void display_list()
{
struct node *ptr;
ptr=start;

modify_string(list,"[");

//first_node
char first_node[50];
sprintf(first_node,"%d",ptr->data);
strcat(list,first_node);


//other nodes
char value_node[1];
while(ptr->next!=NULL)
{
ptr=ptr->next;
sprintf(value_node,"%d",ptr->data);
strcat(list,",");
strcat(list,value_node);
}
strcat(list,"]");
}

void insert_beg()
{
struct node *ptr,*new_node;
int num;

do
{
modify_string(output,"Enter the value to be added. (You can't repeat one already in the list!):");
draw_menu();
scanf("%d",&num);
}while(exist_node_in_list(num)==1);



new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;
ptr=start;
new_node->next=ptr;
start=new_node;

modify_string(output,"Value added successfully!");
}

void insert_end()
{
struct node *ptr,*new_node;
int num;

do
{
modify_string(output,"Enter the value to add in the end. ( You can't repeat one already added!):");
draw_menu();
scanf("%d",&num);
}while(exist_node_in_list(num)==1);

ptr=start;
while(ptr->next!=NULL)
{
ptr=ptr->next;
}
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;
ptr->next=new_node;
new_node->next=NULL;
modify_string(output,"Added successfully!");
}

void insert_before()
{
struct node *ptr,*new_node,*preptr;
int pos,num;

do
{
modify_string(output,"Enter the value that will have a value before: ");
draw_menu();
scanf("%d",&pos);
}
while(exist_node_in_list(pos)==1);


modify_string(output,"Enter the new value added: ");
draw_menu();
scanf("%d",&num);


ptr=start;
preptr=ptr;
while(ptr->data!=pos)
{
preptr=ptr;
ptr=ptr->next;
}
new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;

if(start->next==NULL)
{
ptr=start;
start=new_node;
new_node->next=ptr;
}
else
{
preptr->next=new_node;
new_node->next=ptr;
}

modify_string(output,"Added successfully!");
}

void insert_after()
{
struct node *ptr,*new_node,*preptr;
int num,pos;

do
{
modify_string(output,"Enter the number that will have a number added after:");
draw_menu();
scanf("%d",&pos);
}
while(exist_node_in_list(pos)==1);


modify_string(output,"Enter the new number to be added:");
draw_menu();
scanf("%d",&num);

ptr=start;
preptr=ptr;
while(preptr->data!=pos)
{
preptr=ptr;
ptr=ptr->next;
}

new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;

if(start->next==NULL)
{
ptr=start;
ptr->next=new_node;
new_node->next=NULL;
}
else
{
preptr->next=new_node;
new_node->next=ptr;
}

modify_string(output,"Added successfully!");
}

struct node *delete_beg(struct node *start)
{
struct node *ptr;

ptr=start;
start=start->next;
free(ptr);

modify_string(output,"First element deleted successfully!");
return start;
}

void delete_end()
{
struct node *ptr,*preptr;
ptr=start;
while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
}

if(start->next==NULL)
{
ptr=start;
start=NULL;
free(ptr);

}
else
{
preptr->next=NULL;
free(ptr);
}


modify_string(output,"Last element deleted successfully!");
}

void delete_node()
{
struct node *ptr,*preptr;
int pos;

modify_string(output,"Enter the element to be deleted!");
draw_menu();
scanf("%d",&pos);

while(exist_node_in_list(pos)==0)
{
modify_string(output,"Invalid value, try other please:");
draw_menu();
scanf("%d",&pos);

}


if(start->next==NULL)
{
ptr=start;
start=NULL;
free(ptr);
return;
}

ptr=start;
preptr=ptr;
while(ptr->data!=pos)
{
preptr=ptr;
ptr=ptr->next;
}

preptr->next=ptr->next;
free(ptr);

modify_string(output,"Element deleted successfully!");

}

void delete_after()
{
struct node *ptr,*preptr;
int pos;

modify_string(output,"Enter the element that will have his next element deleted:");
draw_menu();
scanf("%d",&pos);

while(exist_node_in_list(pos)==0)
{
modify_string(output,"The value to serve as position that the next will be deleted informed, do not exist! Try again!");
draw_menu();
scanf("%d",&pos);
}


if(start->next==NULL)
{
modify_string(output,"None element after!");	
draw_menu();
//ptr=start;
//start=NULL;
//free(ptr);
return;
}

ptr=start;
preptr=ptr;
while(preptr->data!=pos)
{
preptr=ptr;
ptr=ptr->next;
}

if(ptr==NULL)
{
modify_string(output,"None element after!");
draw_menu();
return;
}

if(preptr==ptr)
{
ptr=ptr->next;
preptr->next=ptr->next;
free(ptr);

}
else
{
preptr->next=ptr->next;
free(ptr);


}
modify_string(output,"Element deleted!");

}

void delete_list()
{
while(start!=NULL)
start=delete_beg(start);

modify_string(output,"List Erased Successfully!");
}


void sort_list(char *order)
{
struct node *ptr1,*ptr2;
int temp;

ptr1=start;
ptr2=start;
while(ptr1->next!=NULL)
{
	ptr2=ptr1->next;
	while(ptr2!=NULL)
	{
		if(order=="A"&&ptr1->data>ptr2->data)
		{
			temp=ptr1->data;
			ptr1->data=ptr2->data;
			ptr2->data=temp;
		}
		else if(order=="D"&&ptr1->data<ptr2->data)
		{
			temp=ptr1->data;
			ptr1->data=ptr2->data;
			ptr2->data=temp;
		}

	ptr2=ptr2->next;
	}
ptr1=ptr1->next;
}

if(order=="A")
modify_string(output,"Sorted in ASCENDING ORDER");
else
modify_string(output,"Sorted in DESCENDING ORDER");


}

void update_list()
{
struct node *ptr;
int pos,num;



modify_string(output,"Enter the value you want to modify: ");
draw_menu();
scanf("%d",&pos);

while(exist_node_in_list(pos)==0)
{
modify_string(output,"This value do not exist! Try again with other please: ");
draw_menu();
scanf("%d",&pos);

}


modify_string(output,"Enter the new value to this old value: ");
draw_menu();
scanf("%d",&num);

ptr=start;

if(ptr->next==NULL)
{
ptr->data=num;
}

while(ptr->next!=NULL&&ptr->data!=pos)
{
ptr=ptr->next;
}

ptr->data=num;
modify_string(output,"Value modified successfully!");
}

void search_list()
{

struct node *ptr;
int pos,i=0;

modify_string(output,"Enter the value, you want to search!");
draw_menu();
scanf("%d",&pos);


if(exist_node_in_list(pos)==0)
{
modify_string(output,"The element entered do not exist!");
draw_menu();
return;
}

/*
else
{
modify_string(output,"Não eixste!");
draw_menu();
}
*/
/*
char search_value[10];
sprintf(search_value,"%d",exist_node_in_list(pos));
modify_string(output,search_value);
*/


if(start->data!=pos)
{
	ptr=start;
	while(ptr->data!=pos)
	{
	ptr=ptr->next;
	i++;
	}
}

char i_to_string[2];
sprintf(i_to_string,"%d",i);

char pos_to_string[2];
sprintf(pos_to_string,"%d",pos);



char pos_msg[50]="";

strcat(pos_msg,"The value ");
strcat(pos_msg,pos_to_string);
strcat(pos_msg," was found in the position ");
strcat(pos_msg,i_to_string);
strcat(pos_msg,"!");

modify_string(output,pos_msg);

}

void save_list()
{


}

void load_list()
{


}





