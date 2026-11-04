#include<stdio.h>
#include<stdlib.h>
int count=0;
struct node
{
int data;
struct node* next;
}
*new,*head=NULL,*h,*l,*sl;
void create()
	{
	 new=(struct node*)malloc(sizeof(struct node));
	 printf("Enter the data to the node");
	 scanf("%d",&new->data);
	 new->next=NULL;
	}
void enqueue()
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
	 }
 	 count++;
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
	   printf("%d ",h->data);
	   h=h->next;
	  }
	 }
	}
void dequeue()
	{
	 if(head==NULL)
	 printf("List is empty");
	 else
	 {
	  h=head;
	  head=head->next;
	  printf("Deleted element is %d",h->data);
	  free(h);
	  count --;
	 }
	}
void main()
	{
	 int ch=0;
	 do
	 {
	  printf("\nChoose option \n");
	  printf("1) Enqueue \n2) Dequeue \n3) Display \n4) Exit\n");
	  scanf("%d",&ch);
	  switch(ch)
	  {
	   case 1:
	   enqueue();
	   break;
	   case 2:
	   dequeue();
	   break;
	   case 3:
	   display();
	   break;
	   case 4:
	   printf("Exiting");
	   break;
	   default:
	   printf("Wrong Choice");
	  }
	 }
	 while(ch!=4);
	}   
	  

	 
