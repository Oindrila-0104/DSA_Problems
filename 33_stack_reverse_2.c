#include <stdio.h>
int stack[50];
int top=-1;
void push(int size)
{
	int num;
	printf("\nEnter an element: ");
	scanf("%d", &num);
	if(top==size-1)
	{
		printf("\nOverflow");
	}
	else
	{
		top=top+1;
		stack[top]=num;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("\nUnderflow");
	}
	else{
	int i,t=top;
	printf("\nStack is: \n");
	for(i=t;i>=0;i--)
	{
		printf(" %d", stack[i]);
	}
	printf("\nReverse is: \n");
	for(i=top;i>=0;i--)
	{
	int ele;
	ele=stack[top];
	printf("\n%d", ele);
	top=top-1;
	}
}
}
int main()
{
	int i=1, n, ch;
	printf("\nEnter size of stack: ");
	scanf("%d", &n);
	while(i>0)
	{
		printf("\nEnter 1 to push\nEnter 2 to reverse\nEnter 3 to exit\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1:push(n);
			break;
			case 2:pop();
			break;
			case 3:i--;
			break;
			default:printf("\nInvalid choice");
			break;
		}
	}
	return 0;
}
