#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *new, *p, *q, *start;
void create()
{
	int ele;
	printf("\nEnter an element: ");
	scanf("%d", &ele);
	new=(struct node *)malloc(sizeof(struct node));
	new->data=ele;
	new->next=NULL;
}
void insert_beg()
{
	p=start;
	while(p->next!=start)
	{
		p=p->next;
	}
	new->next=start;
	start=new;
	p->next=new;
}
void insert_end()
{
	p=start;
	while(p->next!=start)
	{
		p=p->next;
	}
	new->next=start;
	p->next=new;
}
void insert_bef()
{
	int bef;
	printf("\nEnter the number before which you want to insert: ");
	scanf("%d", &bef);
	p=start;
	q=start;
	while(p->data!=bef)
	{
		q=p;
		p=p->next;
	}
	new->next=p;
	q->next=new;
}
void insert_aft()
{
	int aft;
	printf("\nEnter the number after which you want to insert: ");
	scanf("%d", &aft);
	p=start;
	while(p->data!=aft)
	{
		p=p->next;
	}
	new->next=p->next;
	p->next=new;
}
void delete_beg()
{
	if(start==NULL)
	{
		printf("\nUnderflow");
	}
	else if(start->next==start)
	{
		free(start);
		start=NULL;
	}
	else
	{
		q=start;
		while(q->next!=start)
		{
			q=q->next;
		}
		p=start;
		start=start->next;
		q->next=start;
		free(p);
		p=NULL;
	}
}
void delete_end()
{
	if(start==NULL)
	{
		printf("\nUnderflow");
	}
	else if(start->next==start)
	{
		free(start);
		start=NULL;
	}
	else
	{
		p=NULL;
		q=start;
		while(q->next!=start)
		{
			p=q;
			q=q->next;
		}
		p->next=start;
		free(q);
		q=NULL;
	}
}
void delete_aft()
{
	int aft;
	printf("\nEnter the number after which you want to delete: ");
	scanf("%d", &aft);
	q=start;
	p=start;
	while(p->data!=aft)
	{
		q=p;
		p=p->next;
	}
	q=p;
	p=p->next;
	q->next=p->next;
	free(p);
}
void display()
{
	printf("\nThe linked list is: ");
	p=start;
	while(p->next!=start)
	{
		printf(" %d", p->data);
		p=p->next;
	}
	printf(" %d", p->data);
}
int main()
{
	start=NULL;
	int n=-5000,i=1,ch;
	while(n!=-1)
	{
		printf("\nEnter an element: ");
		scanf("%d", &n);
		if(n==-1)
		continue;
		else
		{
			new=(struct node *)malloc(sizeof(struct node));
			new->data=n;
			new->next=NULL;
			if(start==NULL)
			{
				start=new;
			}
			else
			{
				p=start;
				while(p->next!=NULL)
				{
					p=p->next;
				}
				p->next=new;
			}
		}
	}
	p=start;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=start;
	display();
    while(i!=0)
    {
    	printf("\nEnter 1 to insert at beginning\nEnter 2 to insert at end\nEnter 3 to insert before\nEnter 4 to insert after\nEnter 5 to delete at beginning\nEnter 6 to delete at end\nEnter 7 to delete after\nEnter 8 to display\nEnter 9 to exit\n");
    	scanf("%d", &ch);
    	switch(ch)
    	{
    		case 1:create();
    		insert_beg();
    		break;
    		case 2:create();
    		insert_end();
    		break;
    		case 3:create();
    		insert_bef();
    		break;
    		case 4:create();
    		insert_aft();
    		break;
    		case 5:delete_beg();
    		break;
    		case 6:delete_end();
    		break;
    		case 7:delete_aft();
    		break;
    		case 8:display();
    		break;
    		case 9:i--;
    		break;
    		default:printf("\nInvalid choice");
    		break;
		}
	}
	return 0;
}

