#include <stdio.h>
int main()
{
	int n,i,a[50],p,j;
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
	printf("\nEnter the index whose element is to be deleted: ");
	scanf("%d", &p);
	for(i=1;i<n;i++)
	{
		if(i==p)
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
