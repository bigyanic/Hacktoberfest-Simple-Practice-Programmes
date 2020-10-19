#include<stdio.h>
#include<stdlib.h>
struct node
{
int n;
struct node*next;
};

//function print elements
void display(struct node *top)
{
     struct node *p=top;
     while(p!=NULL)
     {
     printf("%d-->",p->n);
     p=p->next;
     }
}
//function to push elements
struct node *push(struct node *top)
{  
    char ch;
    struct node *newnode,*p;
    ch='y';
    while(ch=='y')
    {
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("ENTER element:");
      scanf("%d",&newnode->n);
      if(top==NULL)
        {
        top=newnode;
	    newnode->next=NULL;
		}
      else
	    {
	    p=top;
    	newnode->next=p;
		top=newnode;
		}
	  printf("stack:");
	  display(top);
	  printf("\npress y to continue pushing\n");
	  scanf("\n%c",&ch);
     }
return top;
}
struct node *pop(struct node *top)
{
	struct node *p=top;
	char ch;
    ch='y';
    while(ch=='y')
    {
		if(top==NULL)
		{
			printf("underflow\n");
			break;
		}
		else
		{
			p=p->next;
			printf("popped element=%d\n",top->n);
			top=p;
			printf("stack:");
			display(top);
			printf("\npress y to continue popping\n");
			scanf("\n%c",&ch);
		}
	}
	return top;
}
void main()
{
   struct node *top=NULL;
   int c;char ch='y';
   while(ch=='y')
   {
	   printf("\n1.push\n2.pop\n3.exit\n");
		scanf("%d",&c);
		switch(c)
		{
		case 1:
		top=push(top);   
		printf("stack:");
		display(top);
		break;
		case 2:
		top=pop(top);
		printf("stack:");
		display(top);
		
		break;
		case 3:
		exit(0);
	    printf("back to menu?");
	    scanf("%c",&ch);
		}   
	}
}
