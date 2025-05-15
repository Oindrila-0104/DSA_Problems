#include <stdio.h>
#include <string.h>
int stack[50];
int top=-1;
void push(int x)
{
	if(top==49)
	{
		printf("\nStack overflow");
	}
	else
	{
		top=top+1;
		stack[top]=x;
	}
}
int pop()
{
	if(top==-1)
	{
		printf("\nStack underflow");
	}
	else
	{
		int ele;
		ele=stack[top];
		top=top-1;
		return ele;
	}
}
int main()
{
	char exp[50];
	int l,i,r,a,b,num;
	printf("\nEnter the expression: ");
	scanf("%s", &exp);
	l=strlen(exp);
	exp[l]=')';
	exp[l+1]='\0';
	for(i=0;i<=l;i++)
	{
		if((exp[i]-'0')>=0 && (exp[i]-'0')<='9')
		{
			num=exp[i]-'0';
			push(num);
		}
		else if(exp[i]==')')
		{
			break;
		}
		else
		{
			switch(exp[i])
			{
				case '+':
					a=pop();
					b=pop();
					r=b+a;
					push(r);
					break;
				case '-':
					a=pop();
					b=pop();
					r=b-a;
					push(r);
					break;
				case '*':
					a=pop();
					b=pop();
					r=b*a;
					push(r);
					break;
				case '/':
					a=pop();
					b=pop();
					r=b/a;
					push(r);
					break;
				default:
					printf("\nInvalid choice");
					
			}
		}
	}
	printf("\nResult is %d", stack[top]);
}
