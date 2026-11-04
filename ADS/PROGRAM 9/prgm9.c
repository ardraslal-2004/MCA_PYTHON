#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
 struct node* prev;
 int data;
 struct node* next;
}
*new,*head=NULL,*h;
void create()
	{
	 new=(struct node*)malloc(sizeof(struct node));
	 printf("Enter the data to the node: ");
	 scanf("%d",&new->data);
	 new->next=NULL;
	 new->prev=NULL;
	}
void ins_beg()
	{
	 create();
	 if(head==NULL)
	 {	
	  head=new;
	 }
	 else
	 {
	  new->next=head;
	  head->prev=new;
	  head=new;
 	 }
	 count++;
	}
void ins_end()
	{
	 create();
	 if(head==NULL)
	 {
	  head=new;
	 }
	 else
	 {
	  h=head;
	  while(h->next!=NULL)
	  {
	   h=h->next;
	  }
	  h->next=new;
	  new->prev=h;
	 }
	 count++;
	}
void ins_pos()
	{
	 int pos,i;
	 printf("Enter the position");
	 scanf("%d",&pos);
	 if(pos==1)
	 ins_beg();
	 else if(pos==count+1)
	 ins_end();
	 else if((pos>count+1)||(pos<1))
	 printf("Invalid position");
	 else
	 {
	  create();
	  h=head;
	  for(i=0;i<pos-2;i++)
	  h=h->next;
	  new->next=h->next;
 	  new->prev=h;
	  h->next->prev=new;
	  h->next=new;
	  count++;
	 }
	}
void display()
	{ 
	 if(head==NULL)
	 printf("List is empty");
	 else
	 {
	  h=head;
 	  printf("Linked list elements are ");
	  while(h!=NULL)
	  {
	   printf("%d -> ",h->data);
	   h=h->next;
	  }
	  //printf("%d ",h->data);
	 }
	}
void search()
	{
	 int sc,i,f=0;
	 if(head==NULL)	
	 printf("List is empty");
	 else
	 {
	  h=head;
	  printf("Enter the element to search ");
	  scanf("%d",&sc);
	  i=0;
	  while(h!=NULL)
	  {
	   i++;
	   if(h->data==sc)
	   {
            printf("Element %d found at position %d",sc,i);	
	    f++;
	   }
	   h=h->next;
	  }
	  if(f==0)
	  {
      	   printf("Element not found ");
	  }
	 }
	}
void del_beg()
	{
	if(head==NULL)
	printf("List is empty");
	else
	{
	h=head;
	head->next->prev=NULL;
	head=head->next;
	printf("Deleted element is %d ",h->data);
	free(h);
	count--;
	}
	}
void del_end()
	{
	if(head==NULL)
	printf("List is empty");
	else
	{
	h=head;
	while(h->next!=NULL)
	{
	h=h->next;
	}
	h->prev->next=NULL;
	printf("Deleted element is %d ",h->data);
	free(h);
	count--;
	}
	}
void del_pos()
	{
	int pos,i;
	if(head==NULL)
	printf("List is empty");
	else
	{
	printf("Enter the position to delete ");
	scanf("%d",&pos);
	if(pos==1)
	del_beg();
	else if(pos==count)
	del_end();
	else
	{
	h=head;
	for(i=0;i<pos-1;i++)
	{
	h=h->next;
	}
	h->prev->next=h->next;
	h->next->prev=h->prev;
	printf("Deleted element is %d ",h->data);
	free(h);
	count--;
	}
	}
	}
void main()	
	{
	 int ch=0;
	 do 
	 {
	  printf("\nChoose option\n");
	  printf("1)Insert at beginning\n2)Insert at end\n3)Insert at position\n4)Display\n5)Delete at beginning\n6)delete at end\n7)Delete at a position\n8)Search\n9)Exit\n ");
	  scanf("%d",&ch);
	  switch(ch)
	  {
 	   case 1:
	   ins_beg();
	   break;
	   case 2:
	   ins_end();
	   break;
	   case 3:
	   ins_pos();
	   break;
	   case 4:
	   display();
	   break;
	   case 5:
	   del_beg();
	   break;
	   case 6:
	   del_end();
	   break;
	   case 7:
	   del_pos();
	   break;
	   case 8:
	   search();
	   break;
	   case 9:
	   printf("Exiting");
	   break;
	   default:
	   printf("Wrong Choice");
	  }
	 }
	 while(ch!=9);
	}  	
 	
	 
	 
