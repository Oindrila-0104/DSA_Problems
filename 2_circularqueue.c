#include <stdio.h>
#include <stdlib.h>
#define n 3
int q[3],front=-1,rear=-1;
void enqueue()
{
	int element;
	printf("\nEnter an element: ");
	scanf("%d", &element);
	if(front==-1 && rear==-1)
	{
		front=rear=0;
		q[rear]=element;
	}
	else if((rear+1)%n==front)
	{
		printf("\nOverflow");
	}
	else
	{
		rear=(rear+1)%n;
		q[rear]=element;
	}
}
void dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		front=(front+1)%n;
	}
}
void display()
{
	if(front==-1 && rear==-1)
	{
		printf("\nQueue is empty");
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			printf(" %d\n", q[i]);
			i=(i+1)%n;
		}
		printf(" %d", q[rear]);
	}
}
int main()
{
	int i=1,ch;
	while(i>0)
	{
		printf("\nEnter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to display\nEnter 4 to exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: enqueue();
			break;
			case 2: dequeue();
			break;
			case 3: display();
			break;
			case 4: i--;
			break;
			default: printf("\nInvalid choice");
			break;
		}
	}
}
