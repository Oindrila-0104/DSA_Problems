#include <stdio.h>
int main()
{
	int n,i,a[50],p,pos,j;
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
	printf("\nEnter the element after which the element is to be deleted: ");
	scanf("%d", &p);
	for(i=1;i<=n;i++)
	{
		if(a[i]==p)
		{
			pos=i+1;
		}
	}
	for(i=1;i<n;i++)
	{
		if(i==pos)
		{
			for(j=i;j<n;j++)
			{
				a[j]=a[j+1];
			}
		}
	}
	printf("\nNew Array: ");
	for(i=1;i<n;i++)
	{
		printf(" %d", a[i]);
	}
	return 0;
}
