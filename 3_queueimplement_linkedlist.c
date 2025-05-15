#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new, *front=NULL, *rear=NULL, *p;
void enqueue()
{
	int num;
	printf("\nEnter an element: ");
	scanf("%d", &num);
	new=(struct node*)malloc(sizeof(struct node));
	new->data=num;
	new->next=NULL;
	if(front==NULL)
	{
		front=new;
		rear=new;
	}
	else
	{
		rear->next=new;
		rear=new;
	}
}
void dequeue()
{
	p=front;
	if(front==NULL)
	{
		printf("\nUnderflow");
	}
	else if(front->next==NULL)
	{
		free(p);
		front=NULL;
		rear=NULL;
	}
	else
	{
		front=front->next;
		free(p);
	}
}
void display()
{
	p=front;
	if(front==NULL)
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
		printf("%d", p->data);
	}
}
int main()
{
	int i=1, ch;
	while(i>0)
	{
		printf("\nEnter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to display\nEnter 4 to exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:display();
			break;
			case 4:i--;
			break;
			default:printf("\nInvalid choice");
			break;
		}
	}
}
