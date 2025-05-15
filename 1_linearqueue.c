//linear queue
#include <stdio.h>
int q[50], front=0,rear=0;
void enqueue(int size)
{
	int num;
	if(rear==size)
	{
		printf("\nOverflow");
	}
	else
	{
		printf("\nEnter an element: ");
		scanf("%d", &num);
		if(front==0 && rear==0)
		{
			front=1;
			rear=1;
		}
		else
		rear=rear+1;
		q[rear]=num;
	}
}
void dequeue(int size)
{
	if(front==0 || front>rear)
	{
		printf("\nUnderflow");
	}
	else
	{
		int ele;
		ele=q[front];
		front=front+1;
	}
}
void display()
{
	int i;
	for(i=front;i<=rear;i++)
	{
		printf("  %d", q[i]);
		printf("\n");
	}
}
int main()
{
	int i=1,ch,n;
	printf("\nEnter size of queue: ");
	scanf("%d", &n);
	while(i>0)
	{
		printf("\nEnter 1 to enqueue\nEnter 2 to dequeue\nEnter 3 to display\nEnter 4 to exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: enqueue(n);
			break;
			case 2: dequeue(n);
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
