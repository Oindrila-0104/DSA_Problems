#include <stdio.h>
int main()
{
	int n,i,a[50],p,m,pos;
	printf("\nEnter the size of the array: ");
	scanf("%d", &n);
	printf("\nEnter array elements: ");
	for(i=1;i<=n;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nArray: ");
	for(i=1;i<=n;i++)
	{
		printf(" %d", a[i]);
	}
	printf("\nEnter the element after which the element is to be inserted: ");
	scanf("%d", &p);
	printf("\nEnter the element to be inserted: ");
	scanf("%d", &m);
	for(i=1;i<=n;i++)
	{
		if(a[i]==p)
		{
			pos=i+1;
		}
	}
	for(i=n+1;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=m;
	printf("\nNew Array: ");
	for(i=1;i<=n+1;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
