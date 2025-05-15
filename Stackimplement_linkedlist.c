#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new, *top=NULL, *p;
void push()
{
	int num;
	printf("\nEnter an element: ");
	scanf("%d", &num);
	new=(struct node*)malloc(sizeof(struct node));
	new->data=num;
	new->next=NULL;
	if(top==NULL)
	{
		top=new;
	}
	else
	{
		new->next=top;
		top=new;
	}
}
void pop()
{
	p=top;
	if(top==NULL)
	{
		printf("\nUnderflow");
	}
	else if(top->next==NULL)
	{
		free(p);
		top=NULL;
	}
	else
	{
		top=top->next;
		free(p);
	}
}
void display()
{
	p=top;
	if(top==NULL)
	{
		printf("\nUnderflow");
	}
	else
	{
		while(p->next!=NULL)
		{
			printf("%d\n", p->data);
			p=p->next;
		}
		printf("%d\n", p->data);
	}
}
int main()
{
	int i=1, ch;
	while(i>0)
	{
		printf("\nEnter 1 to push\nEnter 2 to pop\nEnter 3 to display\nEnter 4 to exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:i--;
			break;
			default:printf("\nInvalid choice");
			break;
		}
	}
	return 0;
}
