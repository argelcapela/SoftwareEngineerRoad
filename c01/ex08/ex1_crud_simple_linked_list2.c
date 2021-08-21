#include <stdio.h>
#include <stdlib.h>

//DECLARE LINKED LIST
struct node
{
	int data;
	struct node *next;
};

struct node *start=NULL;

//FUNCTIONS 
struct node *create_list(struct node*);

struct node *display(struct node*);

struct node *insert_beg(struct node*);
struct node *insert_end(struct node*);
struct node *insert_before(struct node*);
struct node *insert_after(struct node*);

struct node *delete_beg(struct node*);
struct node *delete_end(struct node*);
struct node *delete_before(struct node*);
struct node *delete_after(struct node*);
struct node *delete_node(struct node*);
struct node *delete_list(struct node*);

struct node *sort_list(struct node*,char *order);


struct node *update_node(struct node*);
struct node *search_node(struct node*);


void main()
{
int option;
// menu
do
{
system("clear");

printf("***************\n");
printf("1)CREATE LIST\n");
printf("2)DISPLAY\n");
printf("3)Add a node at the beginning\n");
printf("4)Add a node at the end\n");
printf("5)Add before a given element\n");
printf("6)Add after a given element\n");
printf("7)Delete a node from the beginning\n");
printf("8)Delete a node from the end\n");
printf("9)Delete a give node\n");
printf("10)Delete a node after a given node\n");
printf("11)Delete the entire list\n");
printf("12)Sort ASC\n");
printf("13)Sort DESC\n");
printf("14)Update by data value\n");
printf("15)Search and return position\n");
printf("16)EXIT\n");
printf("**************\n");
printf("\nPlese enter the option you want:\n");
scanf("%d",&option);


switch(option)
{
	case 1:
		start=create_list(start);
	break;

	case 2:
		start=display(start);
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
		start=delete_after(start);
	break;

	case 11:
		start=delete_list(start);
	break;
	
	case 12:
		start=sort_list(start,"A");
	break;

	case 13:
		start=sort_list(start,"D");
	break;

	case 14:
		start=update_node(start);
	break;

	case 15:
		start=search_node(start);
	break;

	case 16:
	option=16;
	break;
}
//start=display(start);

}
while(option!=16);
}

// functions:
struct node *create_list(struct node *start)
{
struct node *ptr,*new_node;
int num;
printf("\nEnter data,-1 para encerrar\n");
scanf("%d",&num);

while(num!=-1)
{
		new_node=(struct node*)malloc(sizeof(struct node));
		new_node->data=num;
		ptr=start;

	if(start==NULL)
	{
		new_node->next=NULL;
		start=new_node;

	}
	else
	{
		ptr=start;

		while(ptr->next!=NULL)
		ptr=ptr->next;

		ptr->next=new_node;
		new_node->next=NULL;
	}


	//	printf("\nEnter the values: ");
		scanf("%d",&num);

}

return start;
}

struct node *display(struct node *start)
{
	struct node *ptr;
	ptr=start;
	
	printf("\nThe values of the list are:\n");
	printf("[%d",ptr->data);
	
	while(ptr->next!=NULL)
	{
		ptr=ptr->next;
		printf(",%d",ptr->data);
	}
	
	printf("]");
	return start;
}

struct node *insert_beg(struct node *start)
{
	struct node *ptr,*new_node;
	int num;

	printf("\nEnter the value you want to add: ");
	scanf("%d",&num);
	
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
		start=new_node;
		new_node->next=ptr;

	}

	return start;
}

struct node *insert_end (struct node *start)
{
struct node *new_node,*ptr;
int num;

printf("\nEnter the elements you want to add in the end:\n");
scanf("%d",&num);

new_node=(struct node*)malloc(sizeof(struct node*));
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
	new_node=NULL;
}

return start;
}

struct node *insert_before(struct node *start)
{
struct node *ptr,*new_node,*preptr;
int num,val;

printf("\nThe number shall be added before the number:\n");
scanf("%d",&val);

printf("\nThe number to be added will be:\n");
scanf("%d",&num);

new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;

ptr=start;
preptr=start;



while(ptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}


preptr->next=new_node;
new_node->next=ptr;



return start;
}

struct node *insert_after(struct node *start)
{
struct node *ptr,*preptr,*new_node;
int num,val;

printf("\nEnter the position: \n");
scanf("%d",&val);

printf("\nEnter the value to be added: \n");
scanf("%d",&num);

new_node=(struct node*)malloc(sizeof(struct node));
new_node->data=num;

ptr=start;
while(preptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}

preptr->next=new_node;
new_node->next=ptr;


return start;
}

struct node *delete_beg(struct node *start)
{
struct node *ptr;

ptr=start;
start=start->next;
free(ptr);


return start;
}

struct node *delete_end(struct node *start)
{
struct node *ptr,*preptr;
ptr=start;

while(ptr->next!=NULL)
{
	preptr=ptr;
	ptr=ptr->next;
}

preptr->next=NULL;
free(ptr);



printf("\nDeleted Successfully!");

return start;
}

struct node *delete_node(struct node *start)
{
struct node *ptr,*preptr,*posptr;
int val;

printf("\nEnter the value you want to delete: ");
scanf("%d",&val);

ptr=start;
if(ptr->data==val)
{
start=delete_beg(start);
return start;
}
else
{
while(ptr->data!=val)
{
preptr=ptr;
ptr=ptr->next;
}
preptr->next=ptr->next;
free(ptr);
}

printf("\nThe value %d was deleted successfully!",val);
return start;
}

struct node *delete_list(struct node *start)
{
struct node *ptr;
ptr=start;

if(start!=NULL)
{
	ptr=start;

	while(ptr!=NULL)
	{
		printf("\n %d is to be deleted!",ptr->data);
		
		start=delete_beg(ptr);
		
		ptr=start;
	}
}

printf("\nList erased successfully");

return start;
}


struct node *delete_after(struct node *start)
{
struct node *ptr,*preptr;
int val;

printf("\nEnter the value you want to delete: ");
scanf("%d",&val);

ptr=start;
preptr=ptr;

while(preptr->data!=val)
{
	preptr=ptr;
	ptr=ptr->next;
}

preptr->next=NULL;
free(ptr);


return start;
}


struct node *sort_list(struct node *start,char *order)
{
struct node *ptr1,*ptr2;
int temp;

ptr1=start;

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

printf("Sorted Successfully!");
return start;
}

struct node *update_node(struct node *start)
{
struct node *ptr;
int val,nval,found;

printf("\nEnter the value you want to modify: ");
scanf("%d",&val);


ptr=start;
if(ptr->data==val)
found=1;

while(ptr->next!=NULL&&ptr->data!=val)
{
ptr=ptr->next;

if(ptr->data==val)
found=1;

}

if(found==1)
{
printf("\nEnter the new value:");
scanf("%d",&nval);

ptr->data=nval;
printf("\nValue updated successfully!\n");

}
else
{
printf("\nValue not found!");
}


return start;
}

struct node *search_node(struct node *start)
{
struct node *ptr;
int val,i=0,found;

printf("\nEnter the value you want to search: ");
scanf("%d",&val);

ptr=start;
found=0;

if(start->data==val)
found=1;

while(ptr->next!=NULL&&ptr->data!=val)
{
ptr=ptr->next;
i++;

if(ptr->data==val)
found=1;

}

if(found==1)
printf("\nElement %d found in the position %d",val,i);
else
printf("\nElement %d not found!",val);

return start;
}

