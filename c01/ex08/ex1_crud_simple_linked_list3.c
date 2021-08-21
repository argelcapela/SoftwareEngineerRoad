#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;
struct node *create_list(struct node*);
struct node *display(struct node*);
struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_before(struct node*);
struct node *insert_after(struct node*);
struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_node(struct node*);
struct node *delete_list(struct node*);
struct node *delete_after(struct node*);
struct node *sort_list(struct node*,char*);
struct node *update_node(struct node*);
struct node *search_node(struct node*);



void main()
{
int option;
	
do
{
printf("\n*******************\n");
start=display(start);
printf("\n*******************\n");
printf("1)CREATE LIST\n");
printf("2)DISPLAY\n");
printf("3)INSERT BEGIN\n");
printf("4)INSERT END\n");
printf("5)INSERT BEFORE\n");
printf("6)INSERT AFTER\n");
printf("7)DELETE BEG\n");
printf("8)DELETE END\n");
printf("9)DELETE NODE\n");
printf("10)DELETE ENTIRE LIST\n");
printf("11)DELETE AFTER NODE\n");
printf("12)SORT ASCENDING\n");
printf("13)SORT DESCENDING\n");
printf("14)SEARCH NODE\n");
printf("15)UPDATE NODE\n");
printf("16)EXIT\n");
printf("*************************\n\n");
printf("Choose a option:");
scanf("%d",&option);

switch(option)
{
	case 1:
	start=create_list(start);
	break;

	case 2:
	
	break;

	case 3:
	start=insert_beg(start);
	break;

	case 4:
	start=insert_end(start);
	break;

	case 5:
	start=insert_before(start);
	break;

	case 6:
	start=insert_after(start);
	break;

	case 7:
	start=delete_beg(start);
	break;

	case 8:
	start=delete_end(start);
	break;

	case 9:
	start=delete_node(start);
	break;

	case 10:
	start=delete_list(start);
	break;

	case 11:
	start=delete_after(start);
	break;

	case 12:
	start=sort_list(start,"A");
	break;

	case 13:
	start=sort_list(start,"D");
	break;

	case 14:
	start=search_node(start);
	break;

	case 15:
	start=update_node(start);
	break;

	case 16:
	option=16;
	break;
}
system("clear");
}
while(option!=16);

}

struct node *create_list(struct node *start)
{
struct node *ptr,*new_node;
int num;

if(start!=NULL)
{
printf("\nAlready exist a running list, delete it before create other!");
}
else
{
			printf("\nEnter the values you want in the list. (-1 to stop)\n");
			scanf("%d",&num);
	do
	{
		
			new_node=(struct node*)malloc(sizeof(struct node));
			new_node->data=num;
		
		if(start==NULL)
		{
			start=new_node;
			start->next=NULL;
		}
		else
		{
			ptr=start;
			while(ptr->next!=NULL)
			ptr=ptr->next;

			ptr->next=new_node;
			new_node->next=NULL;
		}	
		
		scanf("%d",&num);


	}
	while(num!=-1);
			printf("\nList Created Successfully");
}


return start;
}

struct node *display(struct node *start)
{
struct node *ptr;
if(start==NULL)
printf("List is empty!");
else
{
		ptr=start;
		printf("[%d",start->data);

	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		printf(",%d",ptr->data);
	}
		printf("]");


}
return start;
}


struct node *insert_end(struct node *start)
{
struct node *ptr,*new_node;
int num;

if(start==NULL)
{
printf("\nList not created yet!");
return start;
}
else
{	
	printf("\nEnter the value you want to add:\n");
	scanf("%d",&num);

	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;
	ptr=start;
	while(ptr->next!=NULL)
	ptr=ptr->next;
	ptr->next=new_node;
	new_node->next=NULL;
	printf("\nNode created successfully!\n");	
}


return start;
}


struct node *insert_beg(struct node *start)
{
struct node *ptr,*new_node;
int num;

if(start==NULL)
{
printf("\nList not created yet!");
return start;
}
else
{
	printf("\nEnter the number you want to add in the begin of list: ");
	scanf("%d",&num);

	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=num;

	ptr=start;
	start=new_node;
	new_node->next=ptr;
}

return start;
}

struct node *insert_before(struct node *start)
{
struct node *ptr,*new_node,*preptr;
int pos,num,found;

if(start==NULL)
{
printf("\nList not created yet!");
return start;
}
else
{
	printf("\nEnter the value position: ");
	scanf("%d",&pos);

	new_node=(struct node*)malloc(sizeof(struct node));
	ptr=start;
	preptr=start;
	if(start->data==pos)
	found=1;
	while(ptr->data!=pos)
	{
	preptr=ptr;
	ptr=ptr->next;
	if(ptr->data==pos)
	found=1;
	}
	
	if(found==1)
	{
		printf("\nEnter the element you want to insert before %d",pos);
		scanf("%d",&num);
		preptr->next=new_node;
		new_node->next=ptr;
		new_node->data=num;
	}
	else
	{
		printf("\nThis element don't exist! Try again!");
	}

}

return start;
}


struct node *insert_after(struct node *start)
{
struct node *ptr,*new_node,*preptr;
int pos,num,found;

if(start==NULL)
{
printf("\nList not created yet!");
return start;
}
else
{
	printf("\nEnter the value position you want to add after: ");
	scanf("%d",&pos);
	new_node=(struct node*)malloc(sizeof(struct node));

	if(start->data==pos)
	found=1;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=pos)
	{
	preptr=ptr;
	ptr=ptr->next;
	if(preptr->data==pos)
	found=1;
	}
	if(found==1)
	{
	printf("\nEnter the value to be added  afterthe value %d: ",pos);
	scanf("%d",&num);
	new_node->data=num;
	preptr->next=new_node;
	new_node->next=ptr;
	}
	else
	{
	printf("\nValue position not found in the list! Please Try again! ");
	}



}



return start;
}

struct node *delete_beg(struct node *start)
{
if(start==NULL)
{
printf("\nList already empty!");
return start;
}

struct node *ptr,*preptr;
preptr=start;
ptr=start->next;
start=ptr;
free(preptr);

return start;
}

struct node *delete_end(struct node *start)
{
if(start==NULL)
{
printf("\nList already empty");
return start;
}

struct node *ptr,*preptr;

ptr=start;

while(ptr->next!=NULL)
{
preptr=ptr;
ptr=ptr->next;
}

if(preptr==NULL)
{
	start=NULL;
	free(ptr);
}
else
{
	preptr->next=NULL;
	free(ptr);
}

return start;
}

struct node *delete_node(struct node *start)
{
if(start==NULL)
{
printf("\nList already empty!");
return start;
}
struct node *ptr,*preptr;
int found,num;

printf("\nEnter the number that you want to delete: ");
scanf("%d",&num);

ptr=start;

if(ptr->data==num)
{
start=ptr->next;
free(ptr);
return start;
}

while(ptr->data!=num)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=ptr->next;
free(ptr);

return start;
}

struct node *delete_list(struct node *start)
{
if(start==NULL)
{
printf("\nList is already empty!");
return start;
}

while(start!=NULL)
{
start=delete_beg(start);
}
printf("\nList erased successfully!");

struct node *ptr;


return start;
}

struct node *delete_after(struct node *start)
{
if(start==NULL)
{
printf("\nList already empty!");
return start;
}
struct node *ptr,*preptr;
int pos,num,found;

printf("\nEnter the number position you want to delete after: ");
scanf("%d",&num);
ptr=start;
if(ptr->data==num)
found=1;
while(preptr->data!=num)
{
preptr=ptr;
ptr=ptr->next;
if(preptr->data==num)
found=1;
}

if(found==1)
{
preptr->next=ptr->next;
free(ptr);

}
else
{
printf("\nInvalid value to deleted!");
}




return start;
}

struct node *sort_list(struct node *start,char *order)
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

printf("\nSorted Successfully!");

return start;
}


struct node *update_node(struct node *start)
{
struct node *ptr;
int pos,num,found,i;

if(start==NULL)
{
printf("\nList already empty!");
return start;
}
else
{

printf("\nEnter the value position you want to modify: ");
scanf("%d",&pos);

printf("\nEnter the new value to position %d",pos);
scanf("%d",&num);

ptr=start;
while(ptr->data!=pos)
{
ptr=ptr->next;
}

ptr->data=num;

printf("\nValue altered successfully!");

}
return start;
}

struct node *search_node(struct node *start)
{

struct node *ptr;
int num,i=0,found=0;

printf("\nEnter the value you want to search: ");
scanf("%d",&num);

ptr=start;

if(ptr->data==num)
found=1;

while(ptr->data!=num)
{
ptr=ptr->next;
if(ptr->data==num)
{
	found=1;
}


i++;
}

if(found==1)
{
printf("Value %d founded in position %d",num,i);
}
else if(found==0)
{
printf("Value not found in list!");
}

//printf("\nSearch finished! %d",found);
return start;
}

// what rest:
// 1) val if is letter;  data -> char[];
// 2) accept letter or words; I/O library
// 3) val is have a list or the proper value just one time and not repeat in each function;
// 	-list size
// 	-found if exist
// 	-verify if value is valid
// 4) more friendly interface;
// 5) more context to the program;
